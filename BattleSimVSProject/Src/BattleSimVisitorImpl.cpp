#pragma once
#include "../Include/BattleSimVisitorImpl.h"

#include "../Include/Map.h"
#include "../Include/Unit.h"

namespace
{

Orientation ParseOrientation(const char orientation)
{
  if (orientation == 'N')
    return Orientation::N;
  else if (orientation == 'E')
    return Orientation::E;
  else if (orientation == 'S')
    return Orientation::S;
  else if (orientation == 'W')
    return Orientation::W;
  else
    throw std::runtime_error("Invalid orientation specified.");
}

} // namespace

std::any BattleSimVisitorImpl::visitBattleSim(BattleSimParser::BattleSimContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitMap(BattleSimParser::MapContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitTeamDef(BattleSimParser::TeamDefContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitDef(BattleSimParser::UnitDefContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitStats(BattleSimParser::UnitStatsContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitLogicCommand(BattleSimParser::LogicCommandContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitMoveCmd(BattleSimParser::MoveCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitTurnCmd(BattleSimParser::TurnCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitIfCondition(BattleSimParser::IfConditionContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitWhileCycle(BattleSimParser::WhileCycleContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitAttackCmd(BattleSimParser::AttackCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitSkipCmd(BattleSimParser::SkipCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitBoolexp(BattleSimParser::BoolexpContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrExpr(BattleSimParser::OrExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitAndExpr(BattleSimParser::AndExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitNotExpr(BattleSimParser::NotExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitPrimaryBool(BattleSimParser::PrimaryBoolContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitBlockCheck(BattleSimParser::BlockCheckContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrientationCheck(BattleSimParser::OrientationCheckContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrientation(BattleSimParser::OrientationContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitExp(BattleSimParser::ExpContext* ctx) 
{
  return visitChildren(ctx);
}

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

  const auto prepareTeam = [this](BattleSimParser::TeamDefContext* teamDefContext, std::vector<std::shared_ptr<Unit>>& team)
    {
      if (!teamDefContext)
        throw std::runtime_error("Invalid team definition.");

      auto unitDefs = teamDefContext->unitDef();

      if (unitDefs.empty())
        throw std::runtime_error("Each team must have at least one unit defined.");

      for (auto* unitDef : unitDefs)
      {
        team.push_back(CreateUnit(unitDef));
      }

      team.shrink_to_fit();
    };

  // Prepare both teams.
  prepareTeam(teamDefs[0], teams.first);
  prepareTeam(teamDefs[1], teams.second);
  return teams;
}

std::shared_ptr<Unit> BattleSimVisitorImpl::CreateUnit(BattleSimParser::UnitDefContext* context)
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
    context->unitLogicSequence(),
    *_map);

  uint32_t x = static_cast<uint32_t>(std::stoi(context->NUMBER(0u)->getText()));
  uint32_t y = static_cast<uint32_t>(std::stoi(context->NUMBER(1u)->getText()));
  unit->SetPosition(x, y);

  if (!_map->PlaceUnit(x, y, unit))
    throw std::runtime_error("Failed to place unit on the map at the specified coordinates.");

  return unit;
}

std::vector<std::shared_ptr<Unit>> BattleSimVisitorImpl::SimulateUnitTurn(std::shared_ptr<Unit> unit)
{
  std::vector<std::shared_ptr<Unit>> deadUnits;

  const auto commands = unit->GetUnitLogic()->logicCommand();

  // Evaluate each command.
  for (auto* command : commands)
  {
    ExecuteLogicCommand(command, unit);
  }
  
  return deadUnits;
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
    std::cout << "Unit " << unit->GetName() << " failed to move to (" << x << ", " << y << ")." << std::endl;
  }
}

void BattleSimVisitorImpl::ExecuteTurnCommand(std::shared_ptr<Unit> unit, BattleSimParser::TurnCmdContext* ctx) const
{
  if (auto* turnOrientationCmd = ctx->turnOrientationCmd())
  {
    auto orientationText = turnOrientationCmd->getText();
    unit->SetOrientation(ParseOrientation(orientationText[0]));
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
  //TODO
}

void BattleSimVisitorImpl::ExecuteAttackCommand(std::shared_ptr<Unit> unit, BattleSimParser::AttackCmdContext* ctx) const
{
  //TODO
}

void BattleSimVisitorImpl::ExecuteSkipCommand(std::shared_ptr<Unit> unit) const
{
  // Info log.
  std::cout << "Unit " << unit->GetName() << " skips." << std::endl;
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
  const auto orientation1 = ParseOrientation(orientations[0]->getText()[0]);
  const auto orientation2 = ParseOrientation(orientations[1]->getText()[0]);

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
  //TODO 
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
