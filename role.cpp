/**
 * @file role.cpp
 * @author @1chooo
 * @brief 
 * @version 0.1
 * @date 2023-04-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "role.h"
#include <ncurses.h>

Role::Role(const char **body, int height, int width)
    : myBody(body), myHeight(height), myWidth(width) {}

void Role::draw(int y, int x) const {
    for (int i = 0; i < myHeight; i++) {
        mvprintw(y + i, x, "%s", myBody[i]);
    }
}

const char *tankBody[7] = {
  "       \\                ",
  "       _\\______         ",
  "      /        \\=======D",
  " ____|_HUA_TANK_\\_____  ",
  "/ ___WHERE_ARE_YOU?__ \\ ",
  "\\/ _===============_ \\/ ",
  "  \\-===============-/   ",
};