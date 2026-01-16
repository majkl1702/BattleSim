#pragma once

#include "../Common.h"
#include "Unit.h"

#include <vector>

//! Content of a single map point.
struct MapPoint
{
public:
  MapPoint() = default;
  ~MapPoint() = default;
  MapPoint(const MapPoint&) = default;
  MapPoint& operator=(const MapPoint&) = default;
  MapPoint(MapPoint&&) = default;
  MapPoint& operator=(MapPoint&&) = default;

  //! Content of the point.
  char content = ' ';

  std::shared_ptr<Unit> unit = nullptr;
};

//! Map class representing the game area.
class Map
{
public:
  Map() = delete;
  ~Map() = default;
  Map(const Map&) = default;
  Map& operator=(const Map&) = default;
  Map(Map&&) = default;
  Map& operator=(Map&&) = default;

  Map(uint32_t width, uint32_t height);

  //! Returns true if the map is valid.
  [[nodiscard]] bool IsValid() const;

  //! Prints the current state of the map to the console.
  void PrintMap() const; // TODO Move to view component

  //! Places a unit on the map at the specified coordinates.
  bool PlaceUnit(uint32_t x, uint32_t y, std::shared_ptr<Unit> unit);

  int GetWidth() const { return _width; }
  int GetHeight() const { return _height; }

  const MapPoint* GetMapPoint(uint32_t x, uint32_t y) const;

  bool IsWithinBounds(int x, int y) const
  {
    return x >= 0 && x < static_cast<int>(_width) && y >= 0 && y < static_cast<int>(_height);
  }

  const auto& GetRawMap() const { return _map; }

private:
  //! Map dimensions.
  uint32_t _width = 0;
  uint32_t _height = 0;

  //! 2D map representation. 
  std::vector<std::vector<MapPoint>> _map;

  //! Track unit positions for quick access.
  std::unordered_map<Unit*, std::pair<int, int>> _unitPositions;
};