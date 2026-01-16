#pragma once
#include "../Include/Map.h"

class Visualizer
{
public:
  explicit Visualizer(const std::shared_ptr<Map>& map)
    : _map(map)
  {}

  virtual ~Visualizer() = default;
  virtual void DisplayMap() const = 0;


protected:
  std::shared_ptr<Map> _map;
};