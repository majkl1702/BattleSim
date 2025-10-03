#pragma once
#include "../Include/BattleSimVisitorImpl.h"

#include "../Include/Map.h"
#include "../Include/Unit.h"

std::any BattleSimVisitorImpl::visitBattleSim(BattleSimParser::BattleSimContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitMap(BattleSimParser::MapContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitTeamDef(BattleSimParser::TeamDefContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitDef(BattleSimParser::UnitDefContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitStats(BattleSimParser::UnitStatsContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitUnitLogicSequence(BattleSimParser::UnitLogicSequenceContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitLogicCommand(BattleSimParser::LogicCommandContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitMoveCmd(BattleSimParser::MoveCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitTurnCmd(BattleSimParser::TurnCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitIfCondition(BattleSimParser::IfConditionContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitWhileCycle(BattleSimParser::WhileCycleContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitAttackCmd(BattleSimParser::AttackCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitSkipCmd(BattleSimParser::SkipCmdContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitBoolexp(BattleSimParser::BoolexpContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrExpr(BattleSimParser::OrExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitAndExpr(BattleSimParser::AndExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitNotExpr(BattleSimParser::NotExprContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitPrimaryBool(BattleSimParser::PrimaryBoolContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitBlockCheck(BattleSimParser::BlockCheckContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrientationCheck(BattleSimParser::OrientationCheckContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitOrientation(BattleSimParser::OrientationContext* ctx)
{
  return visitChildren(ctx);
}

std::any BattleSimVisitorImpl::visitExp(BattleSimParser::ExpContext* ctx) 
{
  return visitChildren(ctx);
}

Map BattleSimVisitorImpl::CreateGameMap(BattleSimParser::BattleSimContext* context)
{
  auto* mapCtx = context->map();
  if (!mapCtx)
    throw std::runtime_error("No map defined in the battle simulation context.");

  auto widthToken = mapCtx->NUMBER(0u);
  auto heightToken = mapCtx->NUMBER(1u);

  if (!widthToken || !heightToken)
    throw std::runtime_error("Map dimensions are not properly defined.");

  int width = std::stoi(widthToken->getText());
  int height = std::stoi(heightToken->getText());

  if (width <= 0 || height <= 0)
    throw std::runtime_error("Map dimensions must be positive integers.");

  return Map(width, height);
}

std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> 
BattleSimVisitorImpl::CreateUnits(
  BattleSimParser::BattleSimContext* context,
  Map& map)
{
  auto teamDefs = context->teamDef();

  if (teamDefs.size() != 2)
    throw std::runtime_error("There must be exactly two teams defined.");

  std::pair<std::vector<std::shared_ptr<Unit>>, std::vector<std::shared_ptr<Unit>>> teams;

  const auto prepareTeam = [this, &map](BattleSimParser::TeamDefContext* teamDefContext, std::vector<std::shared_ptr<Unit>>& team)
    {
      if (!teamDefContext)
        throw std::runtime_error("Invalid team definition.");

      auto unitDefs = teamDefContext->unitDef();

      if (unitDefs.empty())
        throw std::runtime_error("Each team must have at least one unit defined.");

      for (auto* unitDef : unitDefs)
      {
        team.push_back(CreateUnit(unitDef, map));
      }

      team.shrink_to_fit();
    };

  // Prepare both teams.
  prepareTeam(teamDefs[0], teams.first);
  prepareTeam(teamDefs[1], teams.second);
  return teams;
}

std::shared_ptr<Unit> BattleSimVisitorImpl::CreateUnit(BattleSimParser::UnitDefContext* context, Map& map)
{
  if (!context)
    throw std::runtime_error("Invalid unit definition context.");

  auto* statsCtx = context->unitStats();
  if (!statsCtx || statsCtx->NUMBER().size() < 2)
    throw std::runtime_error("Unit stats are not properly defined.");

  int health = std::stoi(statsCtx->NUMBER(0u)->getText());
  int attack = std::stoi(statsCtx->NUMBER(1u)->getText());

  auto unit = std::make_shared<Unit>(
    context->NAME()->getText(),
    health,
    attack,
    context->unitLogicSequence(),
    map
  );

  uint32_t x = static_cast<uint32_t>(std::stoi(context->NUMBER(0u)->getText()));
  uint32_t y = static_cast<uint32_t>(std::stoi(context->NUMBER(1u)->getText()));
  unit->SetPosition(x, y);

  if (!map.PlaceUnit(x, y, unit))
    throw std::runtime_error("Failed to place unit on the map at the specified coordinates.");

  return unit;
}

std::vector<std::shared_ptr<Unit>> BattleSimVisitorImpl::SimulateUnitTurn(std::shared_ptr<Unit> unit, Map& map)
{
  std::vector<std::shared_ptr<Unit>> deadUnits;

  const auto commands = unit->GetUnitLogic()->logicCommand();

  // Evaluate each command.
  for (auto* command : commands)
  {
    if (command->moveCmd())
    {
      ExecuteMoveCommand(unit, command->moveCmd(), map);
      continue;
    }
    else if (command->turnCmd())
    {
      // Handle turn command.
    }
    else if (command->ifCondition())
    {
      // Handle if condition.
    }
    else if (command->whileCycle())
    {
      // Handle while cycle.
    }
    else if (command->attackCmd())
    {
      // Handle attack command.
    }
    else if (command->skipCmd())
    {

    }
    else
    {
      throw std::runtime_error("Unknown command in unit logic.");
    }
  }
  
  return deadUnits;
}

void BattleSimVisitorImpl::ExecuteMoveCommand(
  std::shared_ptr<Unit> unit, 
  BattleSimParser::MoveCmdContext* ctx, 
  Map& map) const
{
  //todo implement get orientation in unit and execute move forward if possible
}
