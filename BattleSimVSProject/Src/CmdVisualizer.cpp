#include "../Include/CmdVisualizer.h"

#include <iostream>

void CmdVisualizer::DisplayMap() const
{
  PrintMap();
}

void CmdVisualizer::PrintMap() const
{
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