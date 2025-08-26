#pragma once

#include "../Antlr/Generated/BattleSimBaseVisitor.h"

class BattleSimVisitorImpl : public BattleSimBaseVisitor
{
public:

  virtual std::any visitBattleSim(BattleSimParser::BattleSimContext* ctx) override;

  virtual std::any visitMap(BattleSimParser::MapContext* ctx) override;

  virtual std::any visitTeamDef(BattleSimParser::TeamDefContext* ctx) override;

  virtual std::any visitUnitDef(BattleSimParser::UnitDefContext* ctx) override;
    
  virtual std::any visitUnitStats(BattleSimParser::UnitStatsContext* ctx) override;
    
  virtual std::any visitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext* ctx) override;

  virtual std::any visitLogicCommand(BattleSimParser::LogicCommandContext* ctx) override;

  virtual std::any visitMoveCmd(BattleSimParser::MoveCmdContext* ctx) override;

  virtual std::any visitTurnCmd(BattleSimParser::TurnCmdContext* ctx) override;

  virtual std::any visitIfCondition(BattleSimParser::IfConditionContext* ctx) override;

  virtual std::any visitWhileCycle(BattleSimParser::WhileCycleContext* ctx) override;

  virtual std::any visitAttackCmd(BattleSimParser::AttackCmdContext* ctx) override;

  virtual std::any visitSkip(BattleSimParser::SkipContext* ctx) override;

  virtual std::any visitBoolexp(BattleSimParser::BoolexpContext* ctx) override;

  virtual std::any visitOrExpr(BattleSimParser::OrExprContext* ctx) override;

  virtual std::any visitAndExpr(BattleSimParser::AndExprContext* ctx) override;

  virtual std::any visitNotExpr(BattleSimParser::NotExprContext* ctx) override;

  virtual std::any visitPrimaryBool(BattleSimParser::PrimaryBoolContext* ctx) override;

  virtual std::any visitBlockCheck(BattleSimParser::BlockCheckContext* ctx) override;

  virtual std::any visitOrientationCheck(BattleSimParser::OrientationCheckContext* ctx) override;

  virtual std::any visitOrientation(BattleSimParser::OrientationContext* ctx) override;

  virtual std::any visitExp(BattleSimParser::ExpContext* ctx) override;

private:

};

