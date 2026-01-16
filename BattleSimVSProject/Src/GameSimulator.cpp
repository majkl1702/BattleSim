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

  if (!_map->IsValid())
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
    _allUnits.push_back(_blueUnits[i]);

    if (i < _redUnits.size())
    {
      _allUnits.push_back(_redUnits[i]);
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

  if (_blueUnits.empty())
  {
    std::cout << "Red team wins!" << std::endl;
  }
  else
  {
    std::cout << "Blue team wins!" << std::endl;
  }

  return 0;
}

int GameSimulator::SimulateTurn()
{
  // Simulate a turn for all units.
  for (auto unitIter = _allUnits.begin(); unitIter != _allUnits.end();)
  {
    // Locked FPS for better visibility.
    std::chrono::milliseconds timespan(DELAY);
    std::this_thread::sleep_for(timespan);
    
    // Simulate unit turn.
    _visitor.SimulateUnitTurn(*unitIter);

    if (unitIter->get()->GetTeam() == Team::Blue && !(*unitIter)->IsAlive())
    {
      // Remove dead blue unit.
      _blueUnits.erase(std::remove(_blueUnits.begin(), _blueUnits.end(), *unitIter), _blueUnits.end());
      unitIter = _allUnits.erase(unitIter);
      continue;
    }
    else if (unitIter->get()->GetTeam() == Team::Red && !(*unitIter)->IsAlive())
    {
      // Remove dead red unit.
      _redUnits.erase(std::remove(_redUnits.begin(), _redUnits.end(), *unitIter), _redUnits.end());
      unitIter = _allUnits.erase(unitIter);
      continue;
    }

    ++unitIter;
  }

  // Show map state.
  _map->PrintMap(); // TODO Change

  return 0;
}
