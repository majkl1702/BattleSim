#pragma once
#include "../Include/BattleSimVisitorImpl.h"

#include "../Include/Map.h"
#include "../Include/Unit.h"

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

Map BattleSimVisitorImpl::CreateGameMap(BattleSimParser::BattleSimContext* context)
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

  return Map(width, height);
}

std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> 
BattleSimVisitorImpl::CreateUnits(
  BattleSimParser::BattleSimContext* context,
  Map& map)
{
  auto teamDefs = context->teamDef();

  if (teamDefs.size() != 2)
    throw std::runtime_error("There must be exactly two teams defined.");

  std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> teams;

  const auto prepareTeam = [this, &map](BattleSimParser::TeamDefContext* teamDefContext, std::vector<std::shared_ptr<Unit>>& team)
    {
      if (!teamDefContext)
        throw std::runtime_error("Invalid team definition.");

      auto unitDefs = teamDefContext->unitDef();

      if (unitDefs.empty())
        throw std::runtime_error("Each team must have at least one unit defined.");

      for (auto* unitDef : unitDefs)
      {
        team.push_back(CreateUnit(unitDef, map));
      }

      team.shrink_to_fit();
    };

  // Prepare both teams.
  prepareTeam(teamDefs[0], teams.first);
  prepareTeam(teamDefs[1], teams.second);
  return teams;
}

std::shared_ptr<Unit> BattleSimVisitorImpl::CreateUnit(BattleSimParser::UnitDefContext* context, Map& map)
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
    map
  );

  uint32_t x = static_cast<uint32_t>(std::stoi(context->NUMBER(0u)->getText()));
  uint32_t y = static_cast<uint32_t>(std::stoi(context->NUMBER(1u)->getText()));
  unit->SetPosition(x, y);

  if (!map.PlaceUnit(x, y, unit))
    throw std::runtime_error("Failed to place unit on the map at the specified coordinates.");

  return unit;
}

std::vector<std::shared_ptr<Unit>> BattleSimVisitorImpl::SimulateUnitTurn(std::shared_ptr<Unit> unit, Map& map)
{
  std::vector<std::shared_ptr<Unit>> deadUnits;

  const auto commands = unit->GetUnitLogic()->logicCommand();

  // Evaluate each command.
  for (auto* command : commands)
  {
    ExecuteLogicCommand(command, unit, map);
  }
  
  return deadUnits;
}

void BattleSimVisitorImpl::ExecuteLogicCommand(BattleSimParser::LogicCommandContext* command, std::shared_ptr<Unit> unit, Map& map) const
{
  if (command->moveCmd())
  {
    ExecuteMoveCommand(unit, map);
  }
  else if (command->turnCmd())
  {
    // Handle turn command.
    ExecuteTurnCommand(unit, command->turnCmd());
  }
  else if (command->ifCondition())
  {
    // Handle if condition.
    ExecuteIfCondition(unit, command->ifCondition(), map);
  }
  else if (command->whileCycle())
  {
    // Handle while cycle.
  }
  else if (command->attackCmd())
  {
    // Handle attack command.
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

void BattleSimVisitorImpl::ExecuteMoveCommand(
  std::shared_ptr<Unit> unit, 
  Map& map) const
{
  const auto unitOrientation = unit->GetOrientation();

  auto x = unit->GetX();
  auto y = unit->GetY();

  switch (unitOrientation)
  {
    case Orientation::N:
      if (y > 0) // Prevent underflow
        y--;
      break;
    case Orientation::E:
      if (x < map.GetWidth() - 1) // Prevent overflow
        x++;
      break;
    case Orientation::S:
      if (y < map.GetHeight() - 1) // Prevent overflow
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
  
  if (map.PlaceUnit(x, y, unit))
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
  if (ctx->orientation())
  {
    auto orientationText = ctx->orientation()->getText();
    if (orientationText == "N")
      unit->SetOrientation(Orientation::N);
    else if (orientationText == "E")
      unit->SetOrientation(Orientation::E);
    else if (orientationText == "S")
      unit->SetOrientation(Orientation::S);
    else if (orientationText == "W")
      unit->SetOrientation(Orientation::W);
    else
      throw std::runtime_error("Invalid orientation specified in turn command.");
    return;
  }

  if (ctx->getText() == "TurnLeft()")
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
  else if (ctx->getText() == "TurnRight()")
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

void BattleSimVisitorImpl::ExecuteIfCondition(std::shared_ptr<Unit> unit, BattleSimParser::IfConditionContext* ctx, Map& map) const
{
  // Evaluate the boolean expression.
  // If true, execute the logic commands inside the if condition.
  const auto boolExpCtx = ctx->boolexp();
  if (!boolExpCtx)
    throw std::runtime_error("If condition missing boolean expression.");

  const auto unitLogicSequence = ctx->unitLogicSequence();

  if (unitLogicSequence.size() != 2)
    throw std::runtime_error("If condition missing some sequences.");

  const bool conditionResult = EvaluateBooleanExpression(unit, boolExpCtx, map);

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
    ExecuteLogicCommand(command, unit, map);
  }
}

void BattleSimVisitorImpl::ExecuteSkipCommand(std::shared_ptr<Unit> unit) const
{
  // Info log.
  std::cout << "Unit " << unit->GetName() << " skips." << std::endl;
}

bool BattleSimVisitorImpl::EvaluatePrimaryBoolExpression(std::shared_ptr<Unit> unit, BattleSimParser::PrimaryBoolContext* ctx, Map& map)
{
  if (!ctx)
    throw std::runtime_error("Invalid primary boolean expression context.");

  const auto text = ctx->getText();
  if (text == "true")
    return true;

  if (text == "false")
    return false;

  if (text.starts_with('(') && text.ends_with(')'))
    return EvaluateBooleanExpression(unit, ctx->boolexp(), map);

  if (text == "IsEnemyNearby()")
  {
    return EvaluateIsEnemyNearby(unit, map);
  }

  if (const auto expressions = ctx->exp();
    expressions.size() == 2 && ctx->COMPSYMBOL())
  {
    EvaluateComparation(expressions, ctx->COMPSYMBOL);
  }

  if (ctx->blockCheck())
  {
    return EvaluateBlockCheck(unit, ctx->blockCheck(), map);
  }

  if (ctx->orientationCheck())
  {
    return EvaluateOrientationCheck(unit, ctx->orientationCheck(), map);
  }
}

bool BattleSimVisitorImpl::EvaluateNotAndOperator(std::shared_ptr<Unit> unit, BattleSimParser::NotExprContext* ctx, Map& map)
{
  if (!ctx)
    throw std::runtime_error("Invalid NOT expression context.");

  // Check for NOT operator. If present, evaluate inner expression and negate the result.
  if (ctx->notExpr())
  {
    const bool innerResult = EvaluateNotAndOperator(unit, ctx->notExpr(), map);
    return !innerResult;
  }
  else if (ctx->primaryBool())
  {
    // Evaluate the primary boolean expression.
    return EvaluatePrimaryBoolExpression(unit, ctx->primaryBool(), map);
  }

  throw std::runtime_error("Invalid NOT expression structure.");
}

bool BattleSimVisitorImpl::EvaluateAndOperator(std::shared_ptr<Unit> unit, BattleSimParser::AndExprContext* ctx, Map& map)
{
  if (!ctx || !ctx->notExpr())
    throw std::runtime_error("Invalid AND expression context.");

  const auto notOperators = ctx->notExpr();
  // Evaluate each not operator of the and expression.
  // If one is false, the whole expression is false.
  for (const auto& notExpr : notOperators)
  {
    //const bool notResult = EvaluatePrimaryBoolExpression(unit, notExpr, map);
    const bool notResult = EvaluateNotAndOperator(unit, notExpr, map);
    if (!notResult)
    {
      return false;
    }
  }
  return true;
}

bool BattleSimVisitorImpl::EvaluateBooleanExpression(std::shared_ptr<Unit> unit, BattleSimParser::BoolexpContext* ctx, Map& map) const
{
  if (!ctx || !ctx->orExpr())
    throw std::runtime_error("Invalid boolean expression context.");

  const auto andOperators = ctx->orExpr()->andExpr();
 
  // Evaluate each and operator of the or expression.
  // If one is true, the whole expression is true.
  for (const auto& andExpr : andOperators)
  {
    if (EvaluateAndOperator(unit, andExpr, map))
    {
      return true;
    }
  }

  return false;
}
