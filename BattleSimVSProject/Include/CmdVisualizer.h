#pragma once
#include "../Include/Visualizer.h"

class CmdVisualizer : public Visualizer
{
public:
  explicit CmdVisualizer(const std::shared_ptr<Map> map, const std::list<std::shared_ptr<Unit>>& allUnits)
    : Visualizer(map, allUnits)
  {
  }

  virtual void DisplayLoop() override;

  virtual void ParseEvent(const std::string& event) override;

  virtual void EndGame(Team team) override;

private:
  void PrintMap() const;

  void PrintStats() const;

  std::string _events;
};
