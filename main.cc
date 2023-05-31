#include <ncurses.h>
#include <iostream>
#include <random>
using namespace std;

int main() {

  int board[23][10] = {{0}};
  char piece[7] = {'o', 'j', 'l', 'z', 's', 'i', 't'};
  random_device rd;
  mt19937 rng(rd());
  uniform_int_distribution<int> uni(0, 6);
  vector<char> next_list = {piece[uni(rng)], piece[uni(rng)], piece[uni(rng)], piece[uni(rng)]};
  
    // initscr();  // Initialize the ncurses library
    // // cbreak();   // Disable line buffering and allow key presses to be processed immediately
    // // noecho();   // Don't echo user input to the terminal

    // keypad(stdscr, TRUE);  // Enable keypad mode for special keys like arrow keys
    // int ch;


    // while (true) {
    //   ch = getch();
    //   refresh();
    //   switch (ch) {
    //     case KEY_LEFT:
    //       addstr("left\n");
    //       break;
    //     case KEY_RIGHT:
    //       addstr("right\n");
    //       break;
    //     case KEY_UP:
    //       addstr("up\n");
    //       break;
    //     case KEY_DOWN:
    //       addstr("down\n");
    //       break;
    //     case ' ':
    //       addstr("space\n");
    //       break;
    //   }
    // }

    // endwin();  // Clean up the ncurses library


    return 0;
}

