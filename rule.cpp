/**
 * @file rule.cpp
 * @author @1chooo
 * @brief 
 * @version 0.1
 * @date 2023-04-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "role.h"
#include "welcome.h"
#include "rule.h"
#include <ncurses.h>

void clearWelcomeScene() {
  clear();

  wresize(stdscr, MAX_Y, MAX_X);
  box(stdscr, '*', '*');
}

void drawRuleScene() {

  clearWelcomeScene();
  
  mvprintw(MAX_Y / 2, MAX_X / 2 - 5, "RULE");
  refresh();

  while (true) {
    int ch = getch();

    if (ch == 'q') 
      break;
  }
  endwin();
}