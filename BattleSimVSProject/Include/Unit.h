#pragma once
#include "../Common.h"
#include "../Antlr/Generated/BattleSimParser.h"

#include <string>

class Map;

enum Team : uint8_t
{
  Red,
  Blue
};

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
  explicit Unit(const std::string& name, int health, int attack, Team team, BattleSimParser::UnitLogicSequenceContext* unitLogic, Map& map);

  //! Get unit name.
  [[nodiscard]] const std::string& GetName() const { return _name; }

  //! Get unit health.
  [[nodiscard]] int GetHealth() const { return _health; }

  //! Get unit attack power.
  [[nodiscard]] int GetAttack() const { return _attack; }

  //! Get unit logic parse tree context.
  [[nodiscard]] auto GetUnitLogic() { return _unitLogic; }

  void SetPosition(uint32_t x, uint32_t y) { _x = x; _y = y; }
  [[nodiscard]] uint32_t GetX() const { return _x; }
  [[nodiscard]] uint32_t GetY() const { return _y; }

  void SetOrientation(Orientation orientation) { _orientation = orientation; }
  [[nodiscard]] Orientation GetOrientation() const { return _orientation; }

  bool IsUnitFrontBlocked() const;

  bool IsAlive() const { return _health > 0; }

  //! Returns true if damage was applied and unit is still alive, false if unit is dead.
  bool SetDamage(int damage);

  Team GetTeam() const { return _team;  }

private:

  //! Unit properties.
  std::string _name;
  int _health = 0;
  int _attack = 0;
  BattleSimParser::UnitLogicSequenceContext* _unitLogic;

  //! Unit coordinates on the map.
  uint32_t _x = 0;
  uint32_t _y = 0;
  Orientation _orientation = Orientation::N;

  Team _team = Team::Red;

  // ! Reference to the game map for unit interactions.
  Map& _map;
};

