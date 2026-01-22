#pragma once
#include "../Include/Visualizer.h"

class CmdVisualizer : public Visualizer
{
public:
  explicit CmdVisualizer(const std::shared_ptr<Map> map)
    : Visualizer(map)
  {
  }

  virtual void DisplayLoop(const std::list<std::shared_ptr<Unit>>& units) override;

  virtual void ParseEvent(const std::string& event) override;

  virtual void EndGame(Team team) override;

private:
  void PrintMap() const;

  void PrintStats(const std::list<std::shared_ptr<Unit>>& units) const;

  std::string _events;
};
