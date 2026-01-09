
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BattleSimParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BattleSimParser.
 */
class  BattleSimListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterBattleSim(BattleSimParser::BattleSimContext *ctx) = 0;
  virtual void exitBattleSim(BattleSimParser::BattleSimContext *ctx) = 0;

  virtual void enterMap(BattleSimParser::MapContext *ctx) = 0;
  virtual void exitMap(BattleSimParser::MapContext *ctx) = 0;

  virtual void enterTeamDef(BattleSimParser::TeamDefContext *ctx) = 0;
  virtual void exitTeamDef(BattleSimParser::TeamDefContext *ctx) = 0;

  virtual void enterUnitDef(BattleSimParser::UnitDefContext *ctx) = 0;
  virtual void exitUnitDef(BattleSimParser::UnitDefContext *ctx) = 0;

  virtual void enterUnitStats(BattleSimParser::UnitStatsContext *ctx) = 0;
  virtual void exitUnitStats(BattleSimParser::UnitStatsContext *ctx) = 0;

  virtual void enterUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext *ctx) = 0;
  virtual void exitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext *ctx) = 0;

  virtual void enterLogicCommand(BattleSimParser::LogicCommandContext *ctx) = 0;
  virtual void exitLogicCommand(BattleSimParser::LogicCommandContext *ctx) = 0;

  virtual void enterMoveCmd(BattleSimParser::MoveCmdContext *ctx) = 0;
  virtual void exitMoveCmd(BattleSimParser::MoveCmdContext *ctx) = 0;

  virtual void enterTurnCmd(BattleSimParser::TurnCmdContext *ctx) = 0;
  virtual void exitTurnCmd(BattleSimParser::TurnCmdContext *ctx) = 0;

  virtual void enterTurnLeftCmd(BattleSimParser::TurnLeftCmdContext *ctx) = 0;
  virtual void exitTurnLeftCmd(BattleSimParser::TurnLeftCmdContext *ctx) = 0;

  virtual void enterTurnRightCmd(BattleSimParser::TurnRightCmdContext *ctx) = 0;
  virtual void exitTurnRightCmd(BattleSimParser::TurnRightCmdContext *ctx) = 0;

  virtual void enterTurnOrientationCmd(BattleSimParser::TurnOrientationCmdContext *ctx) = 0;
  virtual void exitTurnOrientationCmd(BattleSimParser::TurnOrientationCmdContext *ctx) = 0;

  virtual void enterIfCondition(BattleSimParser::IfConditionContext *ctx) = 0;
  virtual void exitIfCondition(BattleSimParser::IfConditionContext *ctx) = 0;

  virtual void enterWhileCycle(BattleSimParser::WhileCycleContext *ctx) = 0;
  virtual void exitWhileCycle(BattleSimParser::WhileCycleContext *ctx) = 0;

  virtual void enterAttackCmd(BattleSimParser::AttackCmdContext *ctx) = 0;
  virtual void exitAttackCmd(BattleSimParser::AttackCmdContext *ctx) = 0;

  virtual void enterAttackAroundSelfCmd(BattleSimParser::AttackAroundSelfCmdContext *ctx) = 0;
  virtual void exitAttackAroundSelfCmd(BattleSimParser::AttackAroundSelfCmdContext *ctx) = 0;

  virtual void enterAttackInFrontCmd(BattleSimParser::AttackInFrontCmdContext *ctx) = 0;
  virtual void exitAttackInFrontCmd(BattleSimParser::AttackInFrontCmdContext *ctx) = 0;

  virtual void enterRangeAttackCmd(BattleSimParser::RangeAttackCmdContext *ctx) = 0;
  virtual void exitRangeAttackCmd(BattleSimParser::RangeAttackCmdContext *ctx) = 0;

  virtual void enterSkipCmd(BattleSimParser::SkipCmdContext *ctx) = 0;
  virtual void exitSkipCmd(BattleSimParser::SkipCmdContext *ctx) = 0;

  virtual void enterBoolexp(BattleSimParser::BoolexpContext *ctx) = 0;
  virtual void exitBoolexp(BattleSimParser::BoolexpContext *ctx) = 0;

  virtual void enterOrExpr(BattleSimParser::OrExprContext *ctx) = 0;
  virtual void exitOrExpr(BattleSimParser::OrExprContext *ctx) = 0;

  virtual void enterAndExpr(BattleSimParser::AndExprContext *ctx) = 0;
  virtual void exitAndExpr(BattleSimParser::AndExprContext *ctx) = 0;

  virtual void enterNotExpr(BattleSimParser::NotExprContext *ctx) = 0;
  virtual void exitNotExpr(BattleSimParser::NotExprContext *ctx) = 0;

  virtual void enterPrimaryBool(BattleSimParser::PrimaryBoolContext *ctx) = 0;
  virtual void exitPrimaryBool(BattleSimParser::PrimaryBoolContext *ctx) = 0;

  virtual void enterTrue(BattleSimParser::TrueContext *ctx) = 0;
  virtual void exitTrue(BattleSimParser::TrueContext *ctx) = 0;

  virtual void enterFalse(BattleSimParser::FalseContext *ctx) = 0;
  virtual void exitFalse(BattleSimParser::FalseContext *ctx) = 0;

  virtual void enterParenthesesBool(BattleSimParser::ParenthesesBoolContext *ctx) = 0;
  virtual void exitParenthesesBool(BattleSimParser::ParenthesesBoolContext *ctx) = 0;

  virtual void enterComparisonBool(BattleSimParser::ComparisonBoolContext *ctx) = 0;
  virtual void exitComparisonBool(BattleSimParser::ComparisonBoolContext *ctx) = 0;

  virtual void enterOrientationEqualityCheck(BattleSimParser::OrientationEqualityCheckContext *ctx) = 0;
  virtual void exitOrientationEqualityCheck(BattleSimParser::OrientationEqualityCheckContext *ctx) = 0;

  virtual void enterEnemyNearbyCheck(BattleSimParser::EnemyNearbyCheckContext *ctx) = 0;
  virtual void exitEnemyNearbyCheck(BattleSimParser::EnemyNearbyCheckContext *ctx) = 0;

  virtual void enterBlockCheck(BattleSimParser::BlockCheckContext *ctx) = 0;
  virtual void exitBlockCheck(BattleSimParser::BlockCheckContext *ctx) = 0;

  virtual void enterIsFrontClearCheck(BattleSimParser::IsFrontClearCheckContext *ctx) = 0;
  virtual void exitIsFrontClearCheck(BattleSimParser::IsFrontClearCheckContext *ctx) = 0;

  virtual void enterIsFrontBlockedCheck(BattleSimParser::IsFrontBlockedCheckContext *ctx) = 0;
  virtual void exitIsFrontBlockedCheck(BattleSimParser::IsFrontBlockedCheckContext *ctx) = 0;

  virtual void enterOrientationCheck(BattleSimParser::OrientationCheckContext *ctx) = 0;
  virtual void exitOrientationCheck(BattleSimParser::OrientationCheckContext *ctx) = 0;

  virtual void enterFacingNCheck(BattleSimParser::FacingNCheckContext *ctx) = 0;
  virtual void exitFacingNCheck(BattleSimParser::FacingNCheckContext *ctx) = 0;

  virtual void enterFacingWCheck(BattleSimParser::FacingWCheckContext *ctx) = 0;
  virtual void exitFacingWCheck(BattleSimParser::FacingWCheckContext *ctx) = 0;

  virtual void enterFacingECheck(BattleSimParser::FacingECheckContext *ctx) = 0;
  virtual void exitFacingECheck(BattleSimParser::FacingECheckContext *ctx) = 0;

  virtual void enterFacingSCheck(BattleSimParser::FacingSCheckContext *ctx) = 0;
  virtual void exitFacingSCheck(BattleSimParser::FacingSCheckContext *ctx) = 0;

  virtual void enterOrientation(BattleSimParser::OrientationContext *ctx) = 0;
  virtual void exitOrientation(BattleSimParser::OrientationContext *ctx) = 0;

  virtual void enterGetNearbyEnemyOrientation(BattleSimParser::GetNearbyEnemyOrientationContext *ctx) = 0;
  virtual void exitGetNearbyEnemyOrientation(BattleSimParser::GetNearbyEnemyOrientationContext *ctx) = 0;

  virtual void enterGetMyOrientation(BattleSimParser::GetMyOrientationContext *ctx) = 0;
  virtual void exitGetMyOrientation(BattleSimParser::GetMyOrientationContext *ctx) = 0;

  virtual void enterExp(BattleSimParser::ExpContext *ctx) = 0;
  virtual void exitExp(BattleSimParser::ExpContext *ctx) = 0;

  virtual void enterAtomicExp(BattleSimParser::AtomicExpContext *ctx) = 0;
  virtual void exitAtomicExp(BattleSimParser::AtomicExpContext *ctx) = 0;

  virtual void enterParenthesesExp(BattleSimParser::ParenthesesExpContext *ctx) = 0;
  virtual void exitParenthesesExp(BattleSimParser::ParenthesesExpContext *ctx) = 0;


};

