#pragma once

#include "../Antlr/Generated/BattleSimBaseVisitor.h"

class Map;
class Unit;

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

  virtual std::any visitSkipCmd(BattleSimParser::SkipCmdContext* ctx) override;

  virtual std::any visitBoolexp(BattleSimParser::BoolexpContext* ctx) override;

  virtual std::any visitOrExpr(BattleSimParser::OrExprContext* ctx) override;

  virtual std::any visitAndExpr(BattleSimParser::AndExprContext* ctx) override;

  virtual std::any visitNotExpr(BattleSimParser::NotExprContext* ctx) override;

  virtual std::any visitPrimaryBool(BattleSimParser::PrimaryBoolContext* ctx) override;

  virtual std::any visitBlockCheck(BattleSimParser::BlockCheckContext* ctx) override;

  virtual std::any visitOrientationCheck(BattleSimParser::OrientationCheckContext* ctx) override;

  virtual std::any visitOrientation(BattleSimParser::OrientationContext* ctx) override;

  virtual std::any visitExp(BattleSimParser::ExpContext* ctx) override;

  //! Game functions.
  //! Creates a game map from the parse tree.
  std::shared_ptr<Map> CreateGameMap(BattleSimParser::BattleSimContext* context);

  //! Creates units from the parse tree.
  //! Returns a pair of vectors, each containing the units for one team.
  std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> CreateUnits(
    BattleSimParser::BattleSimContext* context);

  //! Creates a single unit from its definition in the parse tree.
  std::shared_ptr<Unit> CreateUnit(BattleSimParser::UnitDefContext* context);

  //! Simulates a single turn for a unit on the map.
  //! Returns a vector unit pointers that were eliminated in this turn.
  //! Moves the unit according to its logic and updates the map state.
  std::vector<std::shared_ptr<Unit>> SimulateUnitTurn(std::shared_ptr<Unit> unit);


  // Commands
  void ExecuteLogicCommand(BattleSimParser::LogicCommandContext* command, std::shared_ptr<Unit> unit) const;

  void ExecuteMoveCommand(std::shared_ptr<Unit> unit) const;

  void ExecuteTurnCommand(std::shared_ptr<Unit> unit, BattleSimParser::TurnCmdContext* ctx) const;

  void ExecuteIfCondition(std::shared_ptr<Unit> unit, BattleSimParser::IfConditionContext* ctx) const;

  void ExecuteWhileCycle(std::shared_ptr<Unit> unit, BattleSimParser::WhileCycleContext* ctx) const;

  void ExecuteAttackCommand(std::shared_ptr<Unit> unit, BattleSimParser::AttackCmdContext* ctx) const;

  void ExecuteSkipCommand(std::shared_ptr<Unit> unit) const;

  // Conditions
  bool EvaluateBooleanExpression(std::shared_ptr<Unit> unit, BattleSimParser::BoolexpContext* ctx) const;

  bool EvaluatePrimaryBoolExpression(std::shared_ptr<Unit> unit, BattleSimParser::PrimaryBoolContext* ctx) const;

  bool EvaluateNotOperator(std::shared_ptr<Unit> unit, BattleSimParser::NotExprContext* ctx) const;

  bool EvaluateAndOperator(std::shared_ptr<Unit> unit, BattleSimParser::AndExprContext* ctx) const;

  bool EvaluateComparison(std::vector<BattleSimParser::ExpContext*> expressions, const char* compSymbol) const;

  bool EvaluateOrientationEqualityCheck(std::shared_ptr<Unit> unit, BattleSimParser::OrientationEqualityCheckContext* ctx) const;

  bool EvaluateBlockCheck(std::shared_ptr<Unit> unit, BattleSimParser::BlockCheckContext* ctx) const;

  bool EvaluateOrientationCheck(std::shared_ptr<Unit> unit, BattleSimParser::OrientationCheckContext* ctx) const;

  bool EvaluateEnemyNearbyCheck(std::shared_ptr<Unit> unit, BattleSimParser::EnemyNearbyCheckContext* ctx) const;

  // Expressions
  int EvaluateExpression(BattleSimParser::ExpContext* ctx) const;

private:

  std::shared_ptr<Map> _map;
};

