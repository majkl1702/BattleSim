#pragma once

#include <string>

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
  explicit Unit(const std::string& name, int health, int attack, const std::string& unitLogic);

private:

  //! Unit properties.
  std::string _name;
  int _health = 0;
  int _attack = 0;
  std::string _unitLogic;
};

