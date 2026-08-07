#pragma once
#include "../Include/Visualizer.h"

#include <unordered_map>

class QMainWindow;
class QGraphicsScene;
class QGraphicsView;
class QTextEdit;
class QGraphicsEllipseItem;

class QtVisualizer : public Visualizer
{
public:
  explicit QtVisualizer(const std::shared_ptr<Map>& map, const std::list<std::shared_ptr<Unit>>& allUnits);
  virtual ~QtVisualizer() override;

  virtual void DisplayLoop() override;
  virtual void ParseEvent(const std::string& event) override;
  virtual void EndGame(Team team) override;

private:
  //! Sets up the main window and its components.
  void SetupUI();

  //! Draws the grid for the map based on its dimensions and tile size.
  void DrawMapGrid();

  //! Updates the statistics view with the current state of all units.
  void UpdateStats();

  //! Introduces a delay in the simulation to allow for visual updates.
  void DelaySimulation(int milliseconds);

  QMainWindow* _mainWindow;
  QGraphicsScene* _scene;
  QGraphicsView* _view;
  QTextEdit* _eventLog;
  QTextEdit* _statsView;

  //! Size of each tile in the grid, used for positioning units and drawing the map.
  int _tileSize;

  //! Maps each unit to its corresponding graphical representation (sprite) in the scene.
  std::unordered_map<Unit*, QGraphicsEllipseItem*> _unitSprites;
};