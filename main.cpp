/**
 * @file main.cpp
 * @author @1chooo @RobinHsieh
 * @brief
 * @version 1.0.0
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 * @category Savage Tank Assault for MacOS
 * If you want to compile this file, you need to use Command
 * > g++ -o main.out main.cpp -lncurses
 */

#include <cstdlib>
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "role.h"
#include "direction.h"

extern void drawWelcomeScene();

int main(void) {

  drawWelcomeScene();
  return 0;
}
