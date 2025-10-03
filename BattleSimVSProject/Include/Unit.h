#pragma once
#include <string>
#include "../Antlr/Generated/BattleSimParser.h"

class Map;

class Unit
{
public:
  Unit() = delete;
  ~Unit() = default;
  Unit(const Unit&) = default;
  Unit& operator=(const Unit&) = default;
  Unit(Unit&&) = default;
  Unit& operator=(Unit&&) = default;

  //! Constructor with unit properties.
  explicit Unit(const std::string& name, int health, int attack, BattleSimParser::UnitLogicSequenceContext* unitLogic, Map& map);

  //! Get unit name.
  [[nodiscard]] const std::string& GetName() const { return _name; }

  //! Get unit health.
  [[nodiscard]] int GetHealth() const { return _health; }

  //! Get unit attack power.
  [[nodiscard]] int GetAttack() const { return _attack; }

  //! Get unit logic parse tree context.
  [[nodiscard]] auto GetUnitLogic() { return _unitLogic; }

  void SetPosition(int x, int y) { _x = x; _y = y; }
  [[nodiscard]] int GetX() const { return _x; }
  [[nodiscard]] int GetY() const { return _y; }

private:

  //! Unit properties.
  std::string _name;
  int _health = 0;
  int _attack = 0;
  BattleSimParser::UnitLogicSequenceContext* _unitLogic;

  //! Unit coordinates on the map.
  int _x = 0;
  int _y = 0;

  // ! Reference to the game map for unit interactions.
  Map& _map; //todo remove?
};

