#include "../Include/Unit.h"

#include "../Include/Map.h"

Unit::Unit(const std::string& name, int health, int attack, BattleSimParser::UnitLogicSequenceContext* unitLogic, Map& map)
  : _name(name)
  , _health(health)
  , _attack(attack)
  , _unitLogic(unitLogic)
  , _map(map)
{
}
