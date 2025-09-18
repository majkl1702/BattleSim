#include "../Include/Unit.h"

Unit::Unit(const std::string& name, int health, int attack, const std::string& unitLogic)
  : _name(name)
  , _health(health)
  , _attack(attack)
  , _unitLogic(unitLogic)
{
}
