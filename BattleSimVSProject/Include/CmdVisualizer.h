#pragma once
#include "../Include/Visualizer.h"

class CmdVisualizer : public Visualizer
{
public:
  explicit CmdVisualizer(const std::shared_ptr<Map> map)
    : Visualizer(map)
  {
  }

  virtual void DisplayMap() const override;

private:
  void PrintMap() const;
};
