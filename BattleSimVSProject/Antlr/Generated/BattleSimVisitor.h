
// Generated from ./BattleSimVSProject/Antlr/BattleSim.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BattleSimParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BattleSimParser.
 */
class  BattleSimVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BattleSimParser.
   */
    virtual std::any visitBattleSim(BattleSimParser::BattleSimContext *context) = 0;

    virtual std::any visitMap(BattleSimParser::MapContext *context) = 0;

    virtual std::any visitTeamDef(BattleSimParser::TeamDefContext *context) = 0;

    virtual std::any visitUnitDef(BattleSimParser::UnitDefContext *context) = 0;

    virtual std::any visitUnitStats(BattleSimParser::UnitStatsContext *context) = 0;

    virtual std::any visitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext *context) = 0;

    virtual std::any visitLogicCommand(BattleSimParser::LogicCommandContext *context) = 0;

    virtual std::any visitMoveCmd(BattleSimParser::MoveCmdContext *context) = 0;

    virtual std::any visitTurnCmd(BattleSimParser::TurnCmdContext *context) = 0;

    virtual std::any visitTurnLeftCmd(BattleSimParser::TurnLeftCmdContext *context) = 0;

    virtual std::any visitTurnRightCmd(BattleSimParser::TurnRightCmdContext *context) = 0;

    virtual std::any visitTurnOrientationCmd(BattleSimParser::TurnOrientationCmdContext *context) = 0;

    virtual std::any visitIfCondition(BattleSimParser::IfConditionContext *context) = 0;

    virtual std::any visitWhileCycle(BattleSimParser::WhileCycleContext *context) = 0;

    virtual std::any visitAttackCmd(BattleSimParser::AttackCmdContext *context) = 0;

    virtual std::any visitAttackAroundSelfCmd(BattleSimParser::AttackAroundSelfCmdContext *context) = 0;

    virtual std::any visitAttackInFrontCmd(BattleSimParser::AttackInFrontCmdContext *context) = 0;

    virtual std::any visitRangeAttackCmd(BattleSimParser::RangeAttackCmdContext *context) = 0;

    virtual std::any visitSkipCmd(BattleSimParser::SkipCmdContext *context) = 0;

    virtual std::any visitBoolexp(BattleSimParser::BoolexpContext *context) = 0;

    virtual std::any visitOrExpr(BattleSimParser::OrExprContext *context) = 0;

    virtual std::any visitAndExpr(BattleSimParser::AndExprContext *context) = 0;

    virtual std::any visitNotExpr(BattleSimParser::NotExprContext *context) = 0;

    virtual std::any visitPrimaryBool(BattleSimParser::PrimaryBoolContext *context) = 0;

    virtual std::any visitTrue(BattleSimParser::TrueContext *context) = 0;

    virtual std::any visitFalse(BattleSimParser::FalseContext *context) = 0;

    virtual std::any visitParenthesesBool(BattleSimParser::ParenthesesBoolContext *context) = 0;

    virtual std::any visitComparisonBool(BattleSimParser::ComparisonBoolContext *context) = 0;

    virtual std::any visitOrientationEqualityCheck(BattleSimParser::OrientationEqualityCheckContext *context) = 0;

    virtual std::any visitEnemyNearbyCheck(BattleSimParser::EnemyNearbyCheckContext *context) = 0;

    virtual std::any visitBlockCheck(BattleSimParser::BlockCheckContext *context) = 0;

    virtual std::any visitIsFrontClearCheck(BattleSimParser::IsFrontClearCheckContext *context) = 0;

    virtual std::any visitIsFrontBlockedCheck(BattleSimParser::IsFrontBlockedCheckContext *context) = 0;

    virtual std::any visitOrientationCheck(BattleSimParser::OrientationCheckContext *context) = 0;

    virtual std::any visitFacingNCheck(BattleSimParser::FacingNCheckContext *context) = 0;

    virtual std::any visitFacingWCheck(BattleSimParser::FacingWCheckContext *context) = 0;

    virtual std::any visitFacingECheck(BattleSimParser::FacingECheckContext *context) = 0;

    virtual std::any visitFacingSCheck(BattleSimParser::FacingSCheckContext *context) = 0;

    virtual std::any visitOrientation(BattleSimParser::OrientationContext *context) = 0;

    virtual std::any visitGetNearbyEnemyOrientation(BattleSimParser::GetNearbyEnemyOrientationContext *context) = 0;

    virtual std::any visitGetMyOrientation(BattleSimParser::GetMyOrientationContext *context) = 0;

    virtual std::any visitExp(BattleSimParser::ExpContext *context) = 0;

    virtual std::any visitAtomicExp(BattleSimParser::AtomicExpContext *context) = 0;

    virtual std::any visitParenthesesExp(BattleSimParser::ParenthesesExpContext *context) = 0;


};

