
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

    virtual std::any visitIfCondition(BattleSimParser::IfConditionContext *context) = 0;

    virtual std::any visitWhileCycle(BattleSimParser::WhileCycleContext *context) = 0;

    virtual std::any visitAttackCmd(BattleSimParser::AttackCmdContext *context) = 0;

    virtual std::any visitBoolexp(BattleSimParser::BoolexpContext *context) = 0;

    virtual std::any visitOrExpr(BattleSimParser::OrExprContext *context) = 0;

    virtual std::any visitAndExpr(BattleSimParser::AndExprContext *context) = 0;

    virtual std::any visitNotExpr(BattleSimParser::NotExprContext *context) = 0;

    virtual std::any visitPrimaryBool(BattleSimParser::PrimaryBoolContext *context) = 0;

    virtual std::any visitBlockCheck(BattleSimParser::BlockCheckContext *context) = 0;

    virtual std::any visitOrientationCheck(BattleSimParser::OrientationCheckContext *context) = 0;

    virtual std::any visitOrientation(BattleSimParser::OrientationContext *context) = 0;

    virtual std::any visitExp(BattleSimParser::ExpContext *context) = 0;


};

