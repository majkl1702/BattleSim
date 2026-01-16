#include "../Include/Unit.h"

#include "../Include/Map.h"

Unit::Unit(const std::string& name, int health, int attack, Team team, BattleSimParser::UnitLogicSequenceContext* unitLogic, Map& map)
  : _name(name)
  , _health(health)
  , _attack(attack)
  , _unitLogic(unitLogic)
  , _team(team)
  , _map(map)
{
}

bool Unit::IsUnitFrontBlocked() const
{
  // Find the position in front of the unit based on current orientation.
  int targetX = static_cast<int>(_x);
  int targetY = static_cast<int>(_y);
  switch (_orientation)
  {
  case Orientation::N:
    targetY -= 1;
    break;
  case Orientation::E:
    targetX += 1;
    break;
  case Orientation::S:
    targetY += 1;
    break;
  case Orientation::W:
    targetX -= 1;
    break;
  default:
    break;
  }

  // Check if the target position is within map bounds
  if (targetX < 0 || targetX >= _map.GetWidth() || targetY < 0 || targetY >= _map.GetHeight())
  {
    return true; // Out of bounds is considered blocked
  }

  const auto* mapPoint = _map.GetMapPoint(static_cast<uint32_t>(targetX), static_cast<uint32_t>(targetY));

  // Unit is blocked when the map point was not found, has another unit, or is not empty.
  return !mapPoint || mapPoint->unit != nullptr || mapPoint->content != ' ';
}

bool Unit::SetDamage(int damage)
{
  _health -= damage;
  return _health > 0;
}
