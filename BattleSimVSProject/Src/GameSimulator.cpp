#include "../Include/GameSimulator.h"

#include <chrono>
#include <thread>

GameSimulator::GameSimulator(BattleSimParser::BattleSimContext* context)
{
  if (PrepareGame(context) < 0)
  {
    throw std::runtime_error("Failed to prepare game for simulation.");
  }
}

int GameSimulator::PrepareGame(BattleSimParser::BattleSimContext* context)
{
  // Prepare map from config.
  _map = _visitor.CreateGameMap(context);

  if (_map.IsValid())
  {
    return -1;
  }

  // Create units from config.
  auto unitsPair = _visitor.CreateUnits(context);
  _blueUnits = std::move(unitsPair.first);
  _redUnits = std::move(unitsPair.second);

  if (_blueUnits.empty() || _redUnits.empty())
  {
    return -1;
  }

  // Prepare all units list for simulation queue by alternating units from both teams.
  for (auto i = 0 ; i < _blueUnits.size(); ++i)
  {
    _allUnits.push_back(&_redUnits[i]);

    if (i < _redUnits.size())
    {
      _allUnits.push_back(&_redUnits[i]);
    }
  }

  return 0;
}

int GameSimulator::SimulateGame()
{
  // Run game simulation until one team is defeated.
  while (!_blueUnits.empty() && !_redUnits.empty())
  {
    if (SimulateTurn() < 0)
    {
      // Turn failed.
      return -1;
    }
  }

  // Todo which team won
  return 0;
}

int GameSimulator::SimulateTurn()
{
  // Simulate a turn for all units.
  for (auto* unit : _allUnits)
  {
    // Locked FPS for better visibility.
    std::chrono::milliseconds timespan(DELAY);
    std::this_thread::sleep_for(timespan);
    
    // Todo simulate unit turn.
  }

  // Todo show map state.

  return 0;
}
