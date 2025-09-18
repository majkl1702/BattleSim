#pragma
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

std::pair<std::vector<Unit>, std::vector<Unit>> BattleSimVisitorImpl::CreateUnits(
  BattleSimParser::BattleSimContext* context)
{
  auto teamDefs = context->teamDef();

  if (teamDefs.size() != 2)
    throw std::runtime_error("There must be exactly two teams defined.");

  std::pair<std::vector<Unit>, std::vector<Unit>> teams;

  for (auto* teamDef : teamDefs)
  {
    if (!teamDef)
      throw std::runtime_error("Invalid team definition.");

    auto unitDefs = teamDef->unitDef();

    if (unitDefs.empty())
      throw std::runtime_error("Each team must have at least one unit defined.");

    // Determine which team we are processing.
    auto teamIndex = (teamDef == teamDefs[0]) ? 0 : 1;
    auto& teamUnits = (teamIndex == 0) ? teams.first : teams.second;

    for (auto* unitDef : unitDefs)
    {
      teamUnits.push_back(CreateUnit(unitDef));
    }
  }

  teams.first.shrink_to_fit();
  teams.second.shrink_to_fit();
  return teams;
}

Unit BattleSimVisitorImpl::CreateUnit(BattleSimParser::UnitDefContext* context)
{
  if (!context)
    throw std::runtime_error("Invalid unit definition context.");

  auto* statsCtx = context->unitStats();
  if (!statsCtx || statsCtx->NUMBER().size() < 2)
    throw std::runtime_error("Unit stats are not properly defined.");

  int health = std::stoi(statsCtx->NUMBER(0u)->getText());
  int attack = std::stoi(statsCtx->NUMBER(0u)->getText());

  return Unit{
    context->NAME()->getText(),
    health,
    attack,
    context->unitLogicSequence() ? context->unitLogicSequence()->getText() : ""
  };
}
