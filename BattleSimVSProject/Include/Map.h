#pragma once

#include "../Common.h"

#include <vector>

//! Content of a single map point.
class MapPoint
{
public:
  MapPoint() = default;
  ~MapPoint() = default;
  MapPoint(const MapPoint&) = default;
  MapPoint& operator=(const MapPoint&) = default;
  MapPoint(MapPoint&&) = default;
  MapPoint& operator=(MapPoint&&) = default;

private:

  // Content of the map point.
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

private:
  //! Map dimensions.
  uint32_t _width = 0;
  uint32_t _height = 0;

  //! 2D map representation.
  std::vector<std::vector<MapPoint>> _map;
};