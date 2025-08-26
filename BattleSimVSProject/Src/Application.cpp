// Created in 2025 by Michal Strièko.
#pragma once
#include "../Include/Application.h"

#include "antlr4-runtime.h"
#include "../Antlr/Generated/BattleSimLexer.h";
#include "../Antlr/Generated/BattleSimParser.h";

#include <fstream>
#include <iostream>

int32_t Application::Run()
{
  std::cout << "Application::Run()" << std::endl;

  std::ifstream stream;
  stream.open("Examples/Example1.txt");
  if (!stream.good())
  {
    std::cerr << "Error opening file. Currently in dir" << system("dir") << std::endl;
    return 1;
  }

  antlr4::ANTLRInputStream input(stream);
  BattleSimLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  BattleSimParser parser(&tokens);

  antlr4::tree::ParseTree* tree = parser.battleSim();

  std::cout << "\nParsed successfully: " << tree->toStringTree(&parser) << std::endl;

  return 0;
}
