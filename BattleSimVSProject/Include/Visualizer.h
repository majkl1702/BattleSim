#pragma once
#include "../Include/Map.h"

class Visualizer
{
public:
  explicit Visualizer(const std::shared_ptr<Map>& map)
    : _map(map)
  {}

  virtual ~Visualizer() = default;
  virtual void DisplayLoop(const std::list<std::shared_ptr<Unit>>& units) = 0;
  virtual void ParseEvent(const std::string& event) = 0;
  virtual void EndGame(Team team) = 0;

protected:
  std::shared_ptr<Map> _map;
};