#include "../Include/CmdVisualizer.h"

#include <iostream>

#define DELAY 500

void CmdVisualizer::DisplayLoop()
{
  PrintMap();
  PrintStats();

  std::cout << std::endl << _events << std::endl;
  _events.clear();

  // Locked FPS for better visibility.
  std::chrono::milliseconds timespan(DELAY);
  std::this_thread::sleep_for(timespan);
}

void CmdVisualizer::ParseEvent(const std::string& event) 
{
  _events += event + '\n';
}

void CmdVisualizer::EndGame(const Team team)
{
  std::cout << "Game Over! " << ((team == Team::Red) ? "Red" : "Blue") << " team wins!" << std::endl;
}

void CmdVisualizer::PrintMap() const
{
  std::cout << "\033[2J\033[H";
  std::cout << "Map state:" << std::endl;

  const auto& map = _map->GetRawMap();
  const auto width = _map->GetWidth();
  const auto height = _map->GetHeight();

  const auto printHorizontalBorder = [&](bool withLegend = false)
    {
      if (withLegend)
      {
        std::cout << "  ";
        for (int32_t i = 0; i < width; ++i)
        {
          std::cout << i << ' ';
        }
        std::cout << ' ' << std::endl;
      }

      std::cout << " +";
      for (int32_t i = 0; i < width; ++i)
      {
        std::cout << "--";
      }
      std::cout << '+' << std::endl;
    };

  // Print top border.
  printHorizontalBorder(true);

  auto counter = 0;
  for (const auto& row : map)
  {
    std::cout << counter++ << '|';
    for (const auto& point : row)
    {
      if (point.unit)
      {
        std::cout << point.unit->GetName()[0] << ' '; // Print unit.
      }
      else
      {
        std::cout << "  "; // Empty space.
      }
    }
    std::cout << '|';
    std::cout << std::endl;
  }

  // Print bottom border.
  printHorizontalBorder();
}

void CmdVisualizer::PrintStats() const
{
  std::stringstream blueStats, redStats;

  for (const auto& unit : _allUnits)
  {
    std::stringstream* targetStream = nullptr;
    if (unit->GetTeam() == Team::Blue)
    {
      targetStream = &blueStats;
    }
    else if (unit->GetTeam() == Team::Red)
    {
      targetStream = &redStats;
    }

    *targetStream << " - " << unit->GetName()
              << " [Health: " << unit->GetHealth() << "]"
              << " [Attack: " << unit->GetAttack() << "]"
              << " [Position: (" << unit->GetX() << ", " << unit->GetY() << ")]"
              << std::endl;
  }

  std::cout << " Blue Team Units:\n" << blueStats.str();
  std::cout << "\n Red Team Units:\n" << redStats.str();
}
