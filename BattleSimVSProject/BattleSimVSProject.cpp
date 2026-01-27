// Created in 2025 by Michal Strièko.

#include "Include/Application.h"

#include <iostream>

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    std::cerr << "Invalid number of arguments" << std::endl;
    return 1;
  }

  Application app;

  return app.Run(argv[1]);
}
