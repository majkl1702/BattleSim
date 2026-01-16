// Created in 2025 by Michal Strièko.
#pragma once
#include "../Include/Application.h"

#pragma warning(push)
#pragma warning(disable: 4251)
#include "antlr4-runtime.h"
#pragma warning(pop)

#include "../Antlr/Generated/BattleSimLexer.h";
#include "../Antlr/Generated/BattleSimParser.h";

#include <fstream>
#include <iostream>

int32_t Application::Run()
{
  std::cout << "Application::Run()" << std::endl;

  // Read the game configuration from file.
  std::ifstream stream;
  stream.open("Examples/Example2.txt");
  if (!stream.good())
  {
    std::cerr << "Error opening file. Currently in dir" << system("dir") << std::endl;
    return 1;
  }

  // ANTL parsing.
  antlr4::ANTLRInputStream input(stream);
  BattleSimLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  BattleSimParser parser(&tokens);

  BattleSimParser::BattleSimContext* tree = parser.battleSim();

  if (!tree)
  {
    std::cerr << "Error parsing given game configuration." << std::endl;
    return 1;
  }

  std::cout << "\nParsed successfully: " << tree->toStringTree(&parser) << std::endl;

  // Instantiate game simulator with the parse tree.
  GameSimulator gameSimulator(tree);

  // Run the game simulation.
  return gameSimulator.SimulateGame();
}
