
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BattleSimListener.h"


/**
 * This class provides an empty implementation of BattleSimListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BattleSimBaseListener : public BattleSimListener {
public:

  virtual void enterBattleSim(BattleSimParser::BattleSimContext * /*ctx*/) override { }
  virtual void exitBattleSim(BattleSimParser::BattleSimContext * /*ctx*/) override { }

  virtual void enterMap(BattleSimParser::MapContext * /*ctx*/) override { }
  virtual void exitMap(BattleSimParser::MapContext * /*ctx*/) override { }

  virtual void enterTeamDef(BattleSimParser::TeamDefContext * /*ctx*/) override { }
  virtual void exitTeamDef(BattleSimParser::TeamDefContext * /*ctx*/) override { }

  virtual void enterUnitDef(BattleSimParser::UnitDefContext * /*ctx*/) override { }
  virtual void exitUnitDef(BattleSimParser::UnitDefContext * /*ctx*/) override { }

  virtual void enterUnitStats(BattleSimParser::UnitStatsContext * /*ctx*/) override { }
  virtual void exitUnitStats(BattleSimParser::UnitStatsContext * /*ctx*/) override { }

  virtual void enterUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext * /*ctx*/) override { }
  virtual void exitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext * /*ctx*/) override { }

  virtual void enterLogicCommand(BattleSimParser::LogicCommandContext * /*ctx*/) override { }
  virtual void exitLogicCommand(BattleSimParser::LogicCommandContext * /*ctx*/) override { }

  virtual void enterMoveCmd(BattleSimParser::MoveCmdContext * /*ctx*/) override { }
  virtual void exitMoveCmd(BattleSimParser::MoveCmdContext * /*ctx*/) override { }

  virtual void enterTurnCmd(BattleSimParser::TurnCmdContext * /*ctx*/) override { }
  virtual void exitTurnCmd(BattleSimParser::TurnCmdContext * /*ctx*/) override { }

  virtual void enterIfCondition(BattleSimParser::IfConditionContext * /*ctx*/) override { }
  virtual void exitIfCondition(BattleSimParser::IfConditionContext * /*ctx*/) override { }

  virtual void enterWhileCycle(BattleSimParser::WhileCycleContext * /*ctx*/) override { }
  virtual void exitWhileCycle(BattleSimParser::WhileCycleContext * /*ctx*/) override { }

  virtual void enterAttackCmd(BattleSimParser::AttackCmdContext * /*ctx*/) override { }
  virtual void exitAttackCmd(BattleSimParser::AttackCmdContext * /*ctx*/) override { }

  virtual void enterSkipCmd(BattleSimParser::SkipCmdContext * /*ctx*/) override { }
  virtual void exitSkipCmd(BattleSimParser::SkipCmdContext * /*ctx*/) override { }

  virtual void enterBoolexp(BattleSimParser::BoolexpContext * /*ctx*/) override { }
  virtual void exitBoolexp(BattleSimParser::BoolexpContext * /*ctx*/) override { }

  virtual void enterOrExpr(BattleSimParser::OrExprContext * /*ctx*/) override { }
  virtual void exitOrExpr(BattleSimParser::OrExprContext * /*ctx*/) override { }

  virtual void enterAndExpr(BattleSimParser::AndExprContext * /*ctx*/) override { }
  virtual void exitAndExpr(BattleSimParser::AndExprContext * /*ctx*/) override { }

  virtual void enterNotExpr(BattleSimParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(BattleSimParser::NotExprContext * /*ctx*/) override { }

  virtual void enterPrimaryBool(BattleSimParser::PrimaryBoolContext * /*ctx*/) override { }
  virtual void exitPrimaryBool(BattleSimParser::PrimaryBoolContext * /*ctx*/) override { }

  virtual void enterBlockCheck(BattleSimParser::BlockCheckContext * /*ctx*/) override { }
  virtual void exitBlockCheck(BattleSimParser::BlockCheckContext * /*ctx*/) override { }

  virtual void enterOrientationCheck(BattleSimParser::OrientationCheckContext * /*ctx*/) override { }
  virtual void exitOrientationCheck(BattleSimParser::OrientationCheckContext * /*ctx*/) override { }

  virtual void enterOrientation(BattleSimParser::OrientationContext * /*ctx*/) override { }
  virtual void exitOrientation(BattleSimParser::OrientationContext * /*ctx*/) override { }

  virtual void enterExp(BattleSimParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(BattleSimParser::ExpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

