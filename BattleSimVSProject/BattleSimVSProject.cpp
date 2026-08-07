// Created in 2025-2026 by Michal Strièko.

#include "Include/Application.h"

#include <QApplication>

#include <iostream>

int main(int argc, char* argv[])
{
  QApplication QApp(argc, argv);

  if (argc != 2)
  {
    std::cerr << "Invalid number of arguments" << std::endl;
    return 1;
  }

  Application app;

  return app.Run(argv[1]);
}
