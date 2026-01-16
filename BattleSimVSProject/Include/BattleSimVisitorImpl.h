#pragma once

#include "../Antlr/Generated/BattleSimBaseVisitor.h"

class Map;
class Unit;
enum Team : uint8_t;
enum class Orientation;

class BattleSimVisitorImpl : public BattleSimBaseVisitor
{
public:

  //! Game functions.
  //! Creates a game map from the parse tree.
  std::shared_ptr<Map> CreateGameMap(BattleSimParser::BattleSimContext* context);

  //! Creates units from the parse tree.
  //! Returns a pair of vectors, each containing the units for one team.
  std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> CreateUnits(
    BattleSimParser::BattleSimContext* context);

  //! Creates a single unit from its definition in the parse tree.
  std::shared_ptr<Unit> CreateUnit(BattleSimParser::UnitDefContext* context, Team team);

  //! Simulates a single turn for a unit on the map.
  //! Moves the unit according to its logic and updates the map state.
  void SimulateUnitTurn(std::shared_ptr<Unit> unit);

private:

  void AttackAroundUnit(std::shared_ptr<Unit> unit) const;

  void AttackInFrontOfUnit(std::shared_ptr<Unit> unit) const;

  void RangeAttackFromUnit(std::shared_ptr<Unit> unit) const;

  void AttackAt(int targetX, int targetY, int damage) const;


  /* ---------------------------------------------- ANTLR language parsers ------------------------------------------------------------ */

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

  Orientation EvaluateOrientation(std::shared_ptr<Unit> unit, BattleSimParser::OrientationContext* ctx) const;

  std::shared_ptr<Map> _map;
};

