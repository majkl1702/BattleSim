#include "../Include/BattleSimVisitorImpl.h"

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

std::any BattleSimVisitorImpl::visitSkip(BattleSimParser::SkipContext* ctx)
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