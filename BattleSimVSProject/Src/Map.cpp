#pragma once
#include "../Include/Map.h"

#include <iostream>

Map::Map(uint32_t width, uint32_t height)
  : _width(width)
  , _height(height)
{
  // Prepare the 2D map representation.
  _map.resize(height, std::vector<MapPoint>(width));
}

bool Map::IsValid() const
{
  // Check if all rows have the correct width.
  for (const auto& row : _map)
  {
    if (row.size() != _width)
      return false;
  }

  //! Check if dimensions are positive and match the map size.
  return _width > 0 && _height > 0 && _map.size() == _height;
}

void Map::PrintMap() const
{
  std::cout << "Map state:" << std::endl;

  const auto printHorizontalBorder = [this](bool withLegend = false) {
    if (withLegend)
    {
      std::cout << "  ";
      for (uint32_t i = 0; i < _width; ++i)
      {
        std::cout << i << ' ';
      }
      std::cout << ' ' << std::endl;
    }

    std::cout << " +";
    for (uint32_t i = 0; i < _width; ++i)
    {
      std::cout << "--";
    }
    std::cout << '+' << std::endl;
    };

  // Print top border.
  printHorizontalBorder(true);

  auto counter = 0;
  for (const auto& row : _map)
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

bool Map::PlaceUnit(uint32_t x, uint32_t y, std::shared_ptr<Unit> unit)
{
  if (!unit || !IsWithinBounds(x, y))
  {
    return false;
  }

  auto& mapPoint = _map[y][x];
  if (mapPoint.unit != nullptr)
  {
    return false; // Position already occupied.
  }

  const auto previousX = unit->GetX();
  const auto previousY = unit->GetY();
  if (previousX >= 0 && previousX < _width && previousY >= 0 && previousY < _height)
  {
    // Clear previous position.
    auto& previousMapPoint = _map[previousY][previousX];
    previousMapPoint.content = ' ';
    previousMapPoint.unit = nullptr;
  }

  // Place unit at new position.
  mapPoint.content = unit->GetName().empty() ? 'U' : unit->GetName()[0]; // Use first letter of unit name or 'U' if name is empty.
  mapPoint.unit = unit;

  // Cache position.
  _unitPositions[&*unit] = {x, y};
  return true;
}

const MapPoint* Map::GetMapPoint(uint32_t x, uint32_t y) const
{
  if (x >= _width || y >= _height)
  {
    return nullptr;
  }
  return &_map[y][x];
}
