
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BattleSimVisitor.h"


/**
 * This class provides an empty implementation of BattleSimVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BattleSimBaseVisitor : public BattleSimVisitor {
public:

  virtual std::any visitBattleSim(BattleSimParser::BattleSimContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMap(BattleSimParser::MapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTeamDef(BattleSimParser::TeamDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitDef(BattleSimParser::UnitDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitStats(BattleSimParser::UnitStatsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicCommand(BattleSimParser::LogicCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMoveCmd(BattleSimParser::MoveCmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTurnCmd(BattleSimParser::TurnCmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfCondition(BattleSimParser::IfConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileCycle(BattleSimParser::WhileCycleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttackCmd(BattleSimParser::AttackCmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkipCmd(BattleSimParser::SkipCmdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolexp(BattleSimParser::BoolexpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrExpr(BattleSimParser::OrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpr(BattleSimParser::AndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(BattleSimParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryBool(BattleSimParser::PrimaryBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockCheck(BattleSimParser::BlockCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrientationCheck(BattleSimParser::OrientationCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrientation(BattleSimParser::OrientationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(BattleSimParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }


};

