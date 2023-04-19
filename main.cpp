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

typedef enum DIRECTION {
  STOP = 0, 
  LEFT, 
  RIGHT, 
  UP, 
  DOWN
} DIRECTION;


int main(void) {
    initscr();
    box(stdscr, '*', '*');

    // 取得螢幕的行數和列數
    int maxY, maxX;
    getmaxyx(stdscr, maxY, maxX);

    // 計算正中央的座標
    int y = (maxY - 7) / 2;  // 7 是 *tank 的行數
    int x = (maxX - 23) / 2; // 23 是 *tank 中最長的一行的長度

    // 在正中央印出 *tank
    Role tank(tankBody, 7, 23);
    tank.draw(y, x);

    // 刷新螢幕以顯示訊息
    refresh();
    while (getch() != 'q');

    endwin();
    return 0;
}
