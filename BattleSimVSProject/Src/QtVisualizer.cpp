#include "../Include/QtVisualizer.h"
#include "../Include/Unit.h"

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QEventLoop>
#include <QTimer>
#include <QString>
#include <sstream>

#define DELAY_MS 500

QtVisualizer::QtVisualizer(
  const std::shared_ptr<Map>& map,
  const std::list<std::shared_ptr<Unit>>& allUnits)
  : Visualizer(map, allUnits)
  , _tileSize(40)
{
  SetupUI();
  DrawMapGrid();
  UpdateStats();

  _mainWindow->show();
}

QtVisualizer::~QtVisualizer()
{
  // Qt will handle the deletion of child widgets, but we need to delete the main window explicitly.
  delete _mainWindow;
}

void QtVisualizer::SetupUI()
{
  _mainWindow = new QMainWindow();
  _mainWindow->setWindowTitle("BattleSim");
  _mainWindow->resize(1200, 800);

  // Main widget.
  QWidget* centralWidget = new QWidget(_mainWindow);
  _mainWindow->setCentralWidget(centralWidget);

  // Layout of the window - horizontal (left map, right panels)
  QHBoxLayout* mainLayout = new QHBoxLayout(centralWidget);

  // --- Left side: Map ---
  _scene = new QGraphicsScene(_mainWindow);
  _view = new QGraphicsView(_scene);
  mainLayout->addWidget(_view, 2); // Stretch factor 2

  // --- Right side: Logs and Statistics ---
  QVBoxLayout* rightLayout = new QVBoxLayout();

  // Statistics view (top)
  _statsView = new QTextEdit();
  _statsView->setReadOnly(true);
  _statsView->setStyleSheet("font-family: monospace;");
  rightLayout->addWidget(_statsView, 1);

  // Event log view (bottom)
  _eventLog = new QTextEdit();
  _eventLog->setReadOnly(true);
  _eventLog->setStyleSheet("font-family: monospace;");
  rightLayout->addWidget(_eventLog, 1);

  mainLayout->addLayout(rightLayout, 1);
}

void QtVisualizer::DrawMapGrid()
{
  const auto width = _map->GetWidth();
  const auto height = _map->GetHeight();

  // Draw the grid of the map using squares. Each square represents a tile on the map.
  for (int y = 0; y < height; ++y)
  {
    for (int x = 0; x < width; ++x)
    {
      _scene->addRect(
        x * _tileSize,
        y * _tileSize,
        _tileSize,
        _tileSize,
        QPen(Qt::darkGray),
        QBrush(Qt::darkGreen)
      );
    }
  }

  // Draw the units on the map. Each unit is represented as a colored circle (ellipse) based on its team.
  for (const auto& unit : _allUnits)
  {
    QColor teamColor = (unit->GetTeam() == Team::Blue) ? Qt::blue : Qt::red;

    // Create a circle at coordinates (0,0) in its local system, slightly smaller than the tile (padding 10)
    QGraphicsEllipseItem* sprite = _scene->addEllipse(
      0, 0, _tileSize - 10, _tileSize - 10,
      QPen(Qt::black, 2),
      QBrush(teamColor)
    );

    QString initial = QString(unit->GetName()[0]).toUpper();
    QGraphicsSimpleTextItem* text = new QGraphicsSimpleTextItem(initial, sprite);

    text->setBrush(Qt::white);
    text->setFont(QFont("Arial", 11, QFont::Bold));

    QRectF textBounds = text->boundingRect();
    qreal textX = (_tileSize - 10 - textBounds.width()) / 2.0;
    qreal textY = (_tileSize - 10 - textBounds.height()) / 2.0;
    text->setPos(textX, textY);

    // Move it to the correct position (centered by adding 5px)
    sprite->setPos(unit->GetX() * _tileSize + 5, unit->GetY() * _tileSize + 5);

    // Store the pointer to the sprite using the raw pointer to the unit
    _unitSprites[unit.get()] = sprite;
  }
}

void QtVisualizer::DisplayLoop()
{
  // 1. Update the positions of the units
  for (const auto& unit : _allUnits)
  {
    if (auto it = _unitSprites.find(unit.get()); it != _unitSprites.end())
    {
      if (unit->IsAlive())
      {
        // If the unit is alive, update its position on the scene
        it->second->setPos(unit->GetX() * _tileSize + 5, unit->GetY() * _tileSize + 5);
      }
      else
      {
        // If the unit is dead, hide its sprite from the scene
        it->second->setVisible(false);
      }
    }
  }

  // 2. Update the statistics view to reflect the current state of all units.
  UpdateStats();

  // 3. Introduce a delay to allow the user to see the changes before the next turn.
  DelaySimulation(DELAY_MS);
}

void QtVisualizer::ParseEvent(const std::string& event)
{
  _eventLog->append(QString::fromStdString(event));
}

void QtVisualizer::EndGame(Team team)
{
  // Show a message box indicating which team has won the game.
  QString winner = (team == Team::Red) ? "Red" : "Blue";
  QMessageBox::information(_mainWindow, "Game Over", winner + " team wins!");
}

void QtVisualizer::UpdateStats()
{
  std::stringstream blueStats, redStats;

  for (const auto& unit : _allUnits)
  {
    std::stringstream* targetStream = nullptr;
    if (unit->GetTeam() == Team::Blue) targetStream = &blueStats;
    else if (unit->GetTeam() == Team::Red) targetStream = &redStats;

    if (targetStream)
    {
      // Add a marker for dead units
      std::string status = unit->IsAlive() ? "" : "(DEAD) ";
      *targetStream << "<li> " << status << unit->GetName()
        << " [HP: " << unit->GetHealth() << "]"
        << " [ATK: " << unit->GetAttack() << "]"
        << " [Pos: (" << unit->GetX() << ", " << unit->GetY() << ")]</li>";
    }
  }

  QString statsStr = "<h3 style='color:blue;'>Blue Team</h3>" + QString::fromStdString(blueStats.str()) +
    "<br><h3 style='color:red;'>Red Team</h3>" + QString::fromStdString(redStats.str());

  _statsView->setHtml(statsStr);
}

void QtVisualizer::DelaySimulation(int milliseconds)
{
  // This function blocks the execution of the application logic,
  // but the GUI will remain fully responsive.
  QEventLoop loop;
  QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
  loop.exec();
}