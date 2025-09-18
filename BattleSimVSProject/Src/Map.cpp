#include "../Include/Map.h"

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
