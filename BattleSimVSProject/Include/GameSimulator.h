#pragma once

#pragma warning(push)
#pragma warning(disable: 4251)
#include "antlr4-runtime.h"
#pragma warning(pop)

#include "../Include/BattleSimVisitorImpl.h";
#include "../Include/Map.h"
#include "../Include/Unit.h"

#define DELAY 500

class GameSimulator
{
public:
  GameSimulator() = delete;
  ~GameSimulator() = default;

  GameSimulator(const GameSimulator&) = delete;
  GameSimulator& operator=(const GameSimulator&) = delete;

  GameSimulator(GameSimulator&&) = delete;
  GameSimulator& operator=(GameSimulator&&) = delete;

  //! Constructor with the parse tree to prepare the game.
  explicit GameSimulator(BattleSimParser::BattleSimContext* context);

  //! Simulates the game until one team is defeated.
  int SimulateGame();

private:
  //! Prepares game with the given parse tree.
  //! Instaniates map and units.
  int PrepareGame(BattleSimParser::BattleSimContext* context);

  //! Simulates a single turn for all units.
  int SimulateTurn();

  //! Visitor instance to process the parse tree.
  BattleSimVisitorImpl _visitor = {};

  // Game state data.
  //! Map of the game.
  Map _map{0, 0};

  //! Units in the game.
  std::vector<std::shared_ptr<Unit>> _blueUnits;
  std::vector<std::shared_ptr<Unit>> _redUnits;
  std::list<std::shared_ptr<Unit>> _allUnits;
};

