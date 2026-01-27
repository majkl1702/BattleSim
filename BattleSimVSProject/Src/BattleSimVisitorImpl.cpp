#pragma once
#include "../Include/BattleSimVisitorImpl.h"

#include "../Include/Map.h"
#include "../Include/Unit.h"

#include "format"

namespace
{

Orientation ParseOrientationString(std::string orientation)
{
  if (orientation == "N")
    return Orientation::N;
  else if (orientation == "E")
    return Orientation::E;
  else if (orientation == "S")
    return Orientation::S;
  else if (orientation == "W")
    return Orientation::W;
  else if (orientation == "NE")
    return Orientation::NE;
  else if (orientation == "NW")
    return Orientation::NW;
  else if (orientation == "SE")
    return Orientation::SE;
  else if (orientation == "SW")
    return Orientation::SW;
  else
    throw std::runtime_error("Invalid orientation specified.");
}

} // namespace

std::shared_ptr<Map> BattleSimVisitorImpl::CreateGameMap(BattleSimParser::BattleSimContext* context)
{
  auto* mapCtx = context->map();
  if (!mapCtx)
    throw std::runtime_error("No map defined in the battle simulation context.");

  auto widthToken = mapCtx->NUMBER(0u);
  auto heightToken = mapCtx->NUMBER(1u);

  if (!widthToken || !heightToken)
    throw std::runtime_error("Map dimensions are not properly defined.");

  int width = std::stoi(widthToken->getText());
  int height = std::stoi(heightToken->getText());

  if (width <= 0 || height <= 0)
    throw std::runtime_error("Map dimensions must be positive integers.");

  _map = std::make_shared<Map>(width, height);
  return _map;
}

std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> 
BattleSimVisitorImpl::CreateUnits(BattleSimParser::BattleSimContext* context)
{
  auto teamDefs = context->teamDef();

  if (teamDefs.size() != 2)
    throw std::runtime_error("There must be exactly two teams defined.");

  std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> teams;

  const auto prepareTeam = [this](BattleSimParser::TeamDefContext* teamDefContext, std::vector<std::shared_ptr<Unit>>& team, Team teamCode)
    {
      if (!teamDefContext)
        throw std::runtime_error("Invalid team definition.");

      auto unitDefs = teamDefContext->unitDef();

      if (unitDefs.empty())
        throw std::runtime_error("Each team must have at least one unit defined.");

      for (auto* unitDef : unitDefs)
      {
        team.push_back(CreateUnit(unitDef, teamCode));
      }

      team.shrink_to_fit();
    };

  // Prepare both teams.
  prepareTeam(teamDefs[0], teams.first, Team::Blue);
  prepareTeam(teamDefs[1], teams.second, Team::Red);
  return teams;
}

std::shared_ptr<Unit> BattleSimVisitorImpl::CreateUnit(BattleSimParser::UnitDefContext* context, Team team)
{
  if (!context)
    throw std::runtime_error("Invalid unit definition context.");

  auto* statsCtx = context->unitStats();
  if (!statsCtx || statsCtx->NUMBER().size() < 2)
    throw std::runtime_error("Unit stats are not properly defined.");

  int health = std::stoi(statsCtx->NUMBER(0u)->getText());
  int attack = std::stoi(statsCtx->NUMBER(1u)->getText());

  auto unit = std::make_shared<Unit>(
    context->NAME()->getText(),
    health,
    attack,
    team,
    context->unitLogicSequence(),
    *_map);

  uint32_t x = static_cast<uint32_t>(std::stoi(context->NUMBER(0u)->getText()));
  uint32_t y = static_cast<uint32_t>(std::stoi(context->NUMBER(1u)->getText()));
  unit->SetPosition(x, y);

  if (!_map->PlaceUnit(x, y, unit))
    throw std::runtime_error("Failed to place unit on the map at the specified coordinates.");

  return unit;
}

void BattleSimVisitorImpl::SimulateUnitTurn(std::shared_ptr<Unit> unit)
{
  const auto commands = unit->GetUnitLogic()->logicCommand();

  // Evaluate each command.
  for (auto* command : commands)
  {
    ExecuteLogicCommand(command, unit);
  }
}

void BattleSimVisitorImpl::AttackAroundUnit(std::shared_ptr<Unit> unit) const
{
  const auto attack = unit->GetAttack();
  const auto unitX = unit->GetX();
  const auto unitY = unit->GetY();

  const auto directions = std::vector<std::pair<int, int>>{
    {-1, -1}, {0, -1}, {1, -1},
    {-1, 0},           {1, 0},
    {-1, 1},  {0, 1},  {1, 1}
  };

  for (const auto& [dx, dy] : directions)
  {
    int targetX = static_cast<int>(unitX) + dx;
    int targetY = static_cast<int>(unitY) + dy;
    if (!_map->IsWithinBounds(targetX, targetY))
    {
      continue;
    }

    auto mapPoint = _map->GetMapPoint(targetX, targetY);
    if (mapPoint && mapPoint->unit != nullptr)
    {
      const auto targetUnit = mapPoint->unit;
      bool stillAlive = targetUnit->SetDamage(attack);
      if (!stillAlive)
      {
        _visualizer->ParseEvent("Unit " + targetUnit->GetName() + " has been destroyed!");
        _visualizer->ParseEvent(std::format("Unit  {} has been destroyed!", targetUnit->GetName()));
      }
      else
      {
        _visualizer->ParseEvent(std::format("Unit  {} took {} damage, remaining health: {}", targetUnit->GetName(), attack, targetUnit->GetHealth()));
      }
    }
  }
}

void BattleSimVisitorImpl::AttackInFrontOfUnit(std::shared_ptr<Unit> unit) const
{
  const auto attack = unit->GetAttack();
  const auto unitX = unit->GetX();
  const auto unitY = unit->GetY();

  // Find the direction vector based on orientation.
  int dx = 0;
  int dy = 0;
  switch (unit->GetOrientation())
  {
    case Orientation::N: dy = -1; break;
    case Orientation::E: dx = 1; break;
    case Orientation::S: dy = 1; break;
    case Orientation::W: dx = -1; break;
    default: break;
  }

  int targetX = static_cast<int>(unitX) + dx;
  int targetY = static_cast<int>(unitY) + dy;
  AttackAt(targetX, targetY, attack);
}

void BattleSimVisitorImpl::RangeAttackFromUnit(std::shared_ptr<Unit> unit, BattleSimParser::ExpContext* rangeExpCtx) const
{
  const auto attack = unit->GetAttack();
  const auto unitX = unit->GetX();
  const auto unitY = unit->GetY();

  int range = EvaluateExpression(rangeExpCtx);

  // Attack in a straight line in the direction the unit is facing.
  int dx = 0;
  int dy = 0;
  switch (unit->GetOrientation())
  {
    case Orientation::N: dy = -1; break;
    case Orientation::E: dx = 1; break;
    case Orientation::S: dy = 1; break;
    case Orientation::W: dx = -1; break;
    default: break;
  }

  int targetX = static_cast<int>(unitX) + dx;
  int targetY = static_cast<int>(unitY) + dy;
  while (_map->IsWithinBounds(targetX, targetY) && range > 0)
  {
    const auto& mapPoint = _map->GetMapPoint(targetX, targetY);
    AttackAt(targetX, targetY, attack);
    targetX += dx;
    targetY += dy;
    range--; // Decrease remaining range.

    if (mapPoint && mapPoint->unit != nullptr)
    {

      // There was a unit at this position, stop the ranged attack.
      break;
    }
  }
}

void BattleSimVisitorImpl::AttackAt(const int targetX, const int targetY, const int damage) const
{
  if (!_map->IsWithinBounds(targetX, targetY))
  {
    return;
  }

  auto mapPoint = _map->GetMapPoint(targetX, targetY);
  if (!mapPoint || mapPoint->unit == nullptr)
  {
    return;
  }

  const auto& targetUnit = mapPoint->unit;
  bool stillAlive = targetUnit->SetDamage(damage);
  if (!stillAlive)
  {
    _visualizer->ParseEvent(std::format("Unit {} has been destroyed!", targetUnit->GetName()));
  }
  else
  {
    _visualizer->ParseEvent(std::format("Unit {} took {} damage, remaining health: {}", targetUnit->GetName(), damage, targetUnit->GetHealth()));
  }
}

void BattleSimVisitorImpl::ExecuteLogicCommand(BattleSimParser::LogicCommandContext* command, std::shared_ptr<Unit> unit) const
{
  if (command->moveCmd())
  {
    ExecuteMoveCommand(unit);
  }
  else if (command->turnCmd())
  {
    // Handle turn command.
    ExecuteTurnCommand(unit, command->turnCmd());
  }
  else if (command->ifCondition())
  {
    // Handle if condition.
    ExecuteIfCondition(unit, command->ifCondition());
  }
  else if (command->whileCycle())
  {
    // Handle while cycle.
    ExecuteWhileCycle(unit, command->whileCycle());
  }
  else if (command->attackCmd())
  {
    // Handle attack command.
    ExecuteAttackCommand(unit, command->attackCmd());
  }
  else if (command->skipCmd())
  {
    ExecuteSkipCommand(unit);
  }
  else
  {
    throw std::runtime_error("Unknown command in unit logic.");
  }
}

void BattleSimVisitorImpl::ExecuteMoveCommand(std::shared_ptr<Unit> unit) const
{
  const auto unitOrientation = unit->GetOrientation();

  int x = unit->GetX();
  int y = unit->GetY();

  switch (unitOrientation)
  {
    case Orientation::N:
      if (y > 0) // Prevent underflow
        y--;
      break;
    case Orientation::E:
      if (x < _map->GetWidth() - 1) // Prevent overflow
        x++;
      break;
    case Orientation::S:
      if (y < _map->GetHeight() - 1) // Prevent overflow
        y++;
      break;
    case Orientation::W:
      if (x > 0) // Prevent underflow
        x--;
      break;
    default:
      // Cannot move diagonally or have diagonal orientation.
      break;
  }
  
  if (_map->PlaceUnit(x, y, unit))
  {
    unit->SetPosition(x, y);
  }
  else
  {
    _visualizer->ParseEvent(std::format("Unit {} failed to move to ({}, {}).", unit->GetName(), x, y));
  }
}

void BattleSimVisitorImpl::ExecuteTurnCommand(std::shared_ptr<Unit> unit, BattleSimParser::TurnCmdContext* ctx) const
{
  if (auto* turnOrientationCmd = ctx->turnOrientationCmd())
  {
    auto orientationText = turnOrientationCmd->getText();
    unit->SetOrientation(EvaluateOrientation(unit, turnOrientationCmd->orientation()));
    return;
  }

  if (auto* turnLeftCmd = ctx->turnLeftCmd())
  {
    switch (unit->GetOrientation())
    {
      case Orientation::N: unit->SetOrientation(Orientation::W); break;
      case Orientation::E: unit->SetOrientation(Orientation::N); break;
      case Orientation::S: unit->SetOrientation(Orientation::E); break;
      case Orientation::W: unit->SetOrientation(Orientation::S); break;
      default: break;
    }
  }
  else if (auto* turnRightCmd = ctx->turnRightCmd())
  {
    switch (unit->GetOrientation())
    {
      case Orientation::N: unit->SetOrientation(Orientation::E); break;
      case Orientation::E: unit->SetOrientation(Orientation::S); break;
      case Orientation::S: unit->SetOrientation(Orientation::W); break;
      case Orientation::W: unit->SetOrientation(Orientation::N); break;
      default: break;
    }
  }
  else
  {
    throw std::runtime_error("Invalid turn command.");
  }
}

void BattleSimVisitorImpl::ExecuteIfCondition(std::shared_ptr<Unit> unit, BattleSimParser::IfConditionContext* ctx) const
{
  // Evaluate the boolean expression.
  // If true, execute the logic commands inside the if condition.
  const auto boolExpCtx = ctx->boolexp();
  if (!boolExpCtx)
    throw std::runtime_error("If condition missing boolean expression.");

  const auto unitLogicSequence = ctx->unitLogicSequence();

  if (unitLogicSequence.size() != 2)
    throw std::runtime_error("If condition missing some sequences.");

  const bool conditionResult = EvaluateBooleanExpression(unit, boolExpCtx);

  std::vector<BattleSimParser::LogicCommandContext*> commands;
  if (conditionResult)
  {
    commands = unitLogicSequence[0]->logicCommand();
    
  }
  else
  {
    commands = unitLogicSequence[1]->logicCommand();
  }

  // Execute the selected commands.
  for (auto* command : commands)
  {
    ExecuteLogicCommand(command, unit);
  }
}

void BattleSimVisitorImpl::ExecuteWhileCycle(std::shared_ptr<Unit> unit, BattleSimParser::WhileCycleContext* ctx) const
{
  // Evaluate the boolean expression.
  const auto boolExpCtx = ctx->boolexp();
  const auto unitLogicSequence = ctx->unitLogicSequence();

  if (!boolExpCtx || !unitLogicSequence)
    throw std::runtime_error("While cycle missing boolean expression or logic sequence.");

  while (EvaluateBooleanExpression(unit, boolExpCtx))
  {
    // Evaluate each command.
    for (auto* command : unitLogicSequence->logicCommand())
    {
      ExecuteLogicCommand(command, unit);
    }
  }
}

void BattleSimVisitorImpl::ExecuteAttackCommand(std::shared_ptr<Unit> unit, BattleSimParser::AttackCmdContext* ctx) const
{
  if (ctx->attackAroundSelfCmd())
  {
    AttackAroundUnit(unit);
  }
  else if (ctx->attackInFrontCmd())
  {
    AttackInFrontOfUnit(unit);
  }
  else if (ctx->rangeAttackCmd())
  {
    RangeAttackFromUnit(unit, ctx->rangeAttackCmd()->exp());
  }
  else
  {
    throw std::runtime_error("Invalid attack command.");
  }
}

void BattleSimVisitorImpl::ExecuteSkipCommand(std::shared_ptr<Unit> unit) const
{
  // Info log.
  _visualizer->ParseEvent(std::format("Unit {} skips its turn.", unit->GetName()));
}

bool BattleSimVisitorImpl::EvaluatePrimaryBoolExpression(std::shared_ptr<Unit> unit, BattleSimParser::PrimaryBoolContext* ctx) const
{
  if (!ctx)
    throw std::runtime_error("Invalid primary boolean expression context.");

  if (ctx->true_())
  {
    return true;
  }

  if (ctx->false_())
  {
    return false;
  }

  if (auto* parenthesesBool = ctx->parenthesesBool())
  {
    return EvaluateBooleanExpression(unit, parenthesesBool->boolexp());
  }

  if (auto* comparisonBool = ctx->comparisonBool())
  {
    if (const auto expressions = comparisonBool->exp();
      expressions.size() == 2 && comparisonBool->COMPSYMBOL())
    {
      return EvaluateComparison(expressions, comparisonBool->COMPSYMBOL()->getText().c_str());
    }

    throw(std::runtime_error("Invalid comparation boolean expression."));
  }

  if (auto* visitOrientationEqualityCheck = ctx->orientationEqualityCheck())
  {
    return EvaluateOrientationEqualityCheck(unit, visitOrientationEqualityCheck);
  }

  if (auto* blockCheck = ctx->blockCheck())
  {
    return EvaluateBlockCheck(unit, blockCheck);
  }

  if (auto* orientationCheck = ctx->orientationCheck())
  {
    return EvaluateOrientationCheck(unit, orientationCheck);
  }

  if (auto* enemyNearbyCheck = ctx->enemyNearbyCheck())
  {
    return EvaluateEnemyNearbyCheck(unit, enemyNearbyCheck);
  }

  throw(std::runtime_error("Unknown primary boolean expression."));
}

bool BattleSimVisitorImpl::EvaluateNotOperator(std::shared_ptr<Unit> unit, BattleSimParser::NotExprContext* ctx) const
{
  if (!ctx)
    throw std::runtime_error("Invalid NOT expression context.");

  // Check for NOT operator. If present, evaluate inner expression and negate the result.
  if (ctx->notExpr())
  {
    const bool innerResult = EvaluateNotOperator(unit, ctx->notExpr());
    return !innerResult;
  }
  else if (ctx->primaryBool())
  {
    // Evaluate the primary boolean expression.
    return EvaluatePrimaryBoolExpression(unit, ctx->primaryBool());
  }

  throw std::runtime_error("Invalid NOT expression structure.");
}

bool BattleSimVisitorImpl::EvaluateAndOperator(std::shared_ptr<Unit> unit, BattleSimParser::AndExprContext* ctx) const
{
  if (!ctx || ctx->notExpr().empty())
    throw std::runtime_error("Invalid AND expression context.");

  const auto andOperators = ctx->notExpr();
  // Evaluate each not operator of the and expression.
  // If one is false, the whole expression is false.
  for (const auto& notExpr : andOperators)
  {
    const bool andOperatorResult = EvaluateNotOperator(unit, notExpr);
    if (!andOperatorResult)
    {
      return false;
    }
  }
  return true;
}

bool BattleSimVisitorImpl::EvaluateBooleanExpression(std::shared_ptr<Unit> unit, BattleSimParser::BoolexpContext* ctx) const
{
  if (!ctx || !ctx->orExpr())
    throw std::runtime_error("Invalid boolean expression context.");

  auto orOperators = ctx->orExpr()->andExpr();
 
  // Evaluate each or operator of the or expression.
  // If one is true, the whole expression is true.
  for (auto* andExpr : orOperators)
  {
    if (EvaluateAndOperator(unit, andExpr))
    {
      return true;
    }
  }

  return false;
}

bool BattleSimVisitorImpl::EvaluateComparison(std::vector<BattleSimParser::ExpContext*> expressions, const char* compSymbol) const
{
  if (compSymbol == nullptr || expressions.size() != 2)
    throw std::runtime_error("Invalid comparison parameters.");

  if (compSymbol == std::string("=="))
  {
    return EvaluateExpression(expressions[0]) == EvaluateExpression(expressions[1]);
  }
  else if (compSymbol == std::string("!="))
  {
    return EvaluateExpression(expressions[0]) != EvaluateExpression(expressions[1]);
  }
  else if (compSymbol == std::string("<"))
  {
    return EvaluateExpression(expressions[0]) < EvaluateExpression(expressions[1]);
  }
  else if (compSymbol == std::string("<="))
  {
    return EvaluateExpression(expressions[0]) <= EvaluateExpression(expressions[1]);
  }
  else if (compSymbol == std::string(">"))
  {
    return EvaluateExpression(expressions[0]) > EvaluateExpression(expressions[1]);
  }
  else if (compSymbol == std::string(">="))
  {
    return EvaluateExpression(expressions[0]) >= EvaluateExpression(expressions[1]);
  }
  else
  {
    throw std::runtime_error("Unknown comparison symbol.");
  }
}

bool BattleSimVisitorImpl::EvaluateOrientationEqualityCheck(std::shared_ptr<Unit> unit, BattleSimParser::OrientationEqualityCheckContext* ctx) const
{
  auto orientations = ctx->orientation();

  if (orientations.size() != 2)
    throw std::runtime_error("Invalid orientation equality check context.");

  const auto equals = ctx->getText().find("==") != std::string::npos;
  const auto orientation1 = EvaluateOrientation(unit, orientations[0]);
  const auto orientation2 = EvaluateOrientation(unit, orientations[1]);

  return equals
    ? orientation1 == orientation2
    : orientation1 != orientation2;
}

bool BattleSimVisitorImpl::EvaluateBlockCheck(std::shared_ptr<Unit> unit, BattleSimParser::BlockCheckContext* ctx) const
{
  const auto isUnitblocked = unit->IsUnitFrontBlocked();

  return ctx->isFrontBlockedCheck() ? isUnitblocked : !isUnitblocked;
}

bool BattleSimVisitorImpl::EvaluateOrientationCheck(std::shared_ptr<Unit> unit, BattleSimParser::OrientationCheckContext* ctx) const
{
  const auto orientation = unit->GetOrientation();

  if (ctx->facingECheck())
  {
    return orientation == Orientation::E;
  }
  else if (ctx->facingNCheck())
  {
    return orientation == Orientation::N;
  }
  else if (ctx->facingSCheck())
  {
    return orientation == Orientation::S;
  }
  else if (ctx->facingWCheck())
  {
    return orientation == Orientation::W;
  }
  throw std::runtime_error("Invalid orientation check context.");
}

bool BattleSimVisitorImpl::EvaluateEnemyNearbyCheck(std::shared_ptr<Unit> unit, BattleSimParser::EnemyNearbyCheckContext* ctx) const
{
  const auto unitX = unit->GetX();
  const auto unitY = unit->GetY();

  const auto directions = std::vector<std::pair<int, int>>{
    {-1, -1}, {0, -1}, {1, -1},
    {-1, 0},           {1, 0},
    {-1, 1},  {0, 1},  {1, 1}
  };

  for (const auto& [dx, dy] : directions)
  {
    int targetX = static_cast<int>(unitX) + dx;
    int targetY = static_cast<int>(unitY) + dy;
    if (!_map->IsWithinBounds(targetX, targetY))
    {
      continue;
    }

    auto mapPoint = _map->GetMapPoint(targetX, targetY);
    if (mapPoint && mapPoint->unit != nullptr && mapPoint->unit->GetTeam() != unit->GetTeam() && mapPoint->unit->IsAlive())
    {
      return true;
    }
  }

  return false;
}

int BattleSimVisitorImpl::EvaluateExpression(BattleSimParser::ExpContext* ctx) const
{
  if (auto* atomicCtx = ctx->atomicExp())
  {
    return std::stoi(atomicCtx->NUMBER()->getText());
  }

  if (auto* parenthesesCtx = ctx->parenthesesExp())
  {
    return EvaluateExpression(parenthesesCtx->exp());
  }

  if (auto expressions = ctx->exp();
    expressions.size() == 2 && ctx->MATHSYMBOL())
  {
    int leftValue = EvaluateExpression(expressions[0]);
    int rightValue = EvaluateExpression(expressions[1]);
    const auto mathSymbol = ctx->MATHSYMBOL()->getText();
    if (mathSymbol == "+")
    {
      return leftValue + rightValue;
    }
    else if (mathSymbol == "-")
    {
      return leftValue - rightValue;
    }
    else if (mathSymbol == "*")
    {
      return leftValue * rightValue;
    }
    else if (mathSymbol == "/")
    {
      if (rightValue == 0)
        throw std::runtime_error("Division by zero in expression.");
      return leftValue / rightValue;
    }
    else
    {
      throw std::runtime_error("Unknown mathematical operator.");
    }
  }

  throw std::runtime_error("Invalid expression context.");
}

Orientation BattleSimVisitorImpl::EvaluateOrientation(std::shared_ptr<Unit> unit, BattleSimParser::OrientationContext* ctx) const
{
  if (ctx->getNearbyEnemyOrientation())
  {
    // Try to find a nearby enemy unit.
    const auto unitX = unit->GetX();
    const auto unitY = unit->GetY();

    const auto directions = std::vector<std::tuple<int, int, Orientation>>{
      {-1, -1, Orientation::NW}, {0, -1, Orientation::N}, {1, -1, Orientation::NE},
      {-1, 0, Orientation::W},                            {1, 0, Orientation::E},
      {-1, 1, Orientation::SW},  {0, 1, Orientation::S},  {1, 1, Orientation::SE}
    };

    for (const auto& [dx, dy, orientation] : directions)
    {
      int targetX = static_cast<int>(unitX) + dx;
      int targetY = static_cast<int>(unitY) + dy;
      if (!_map->IsWithinBounds(targetX, targetY))
      {
        continue;
      }

      auto mapPoint = _map->GetMapPoint(targetX, targetY);
      if (mapPoint && mapPoint->unit != nullptr && mapPoint->unit->GetTeam() != unit->GetTeam())
      {
        // Return the orientation of the nearby enemy unit.
        return orientation;
      }
    }
  }
  else if (ctx->getMyOrientation())
  {
    // Return the unit's current orientation.
    return unit->GetOrientation();
  }
  else if (ctx->ORIENTATION())
  {
    // Parse and return the specified orientation.
    return ParseOrientationString(ctx->ORIENTATION()->getText().c_str());
  }

  return unit->GetOrientation();
}
