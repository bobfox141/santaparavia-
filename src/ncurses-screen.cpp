// ncurses.cpp

#include <ncurses.h>
#include <unistd.h>

#include "ncurses-demo.h"


ncurses_demo::ncurses_demo() {
    direction = 1;
    max_y = 0;
    max_y = 0;
}
void ncurses_demo::ncurses_init() {
    initscr();
    noecho();
    curs_set(FALSE);
    
    
}

void ncurses_demo::ncurses_end() {
    sleep(1);
    endwin();
}

int ncurses_demo::toggle_direction() {
    if (direction == 1)
        return -1;
    else 
        return 1;
}



void ncurses_demo::ncurses_mvball() {
    const int DELAY = 30000;
    getmaxyx(stdscr,max_y,max_x);
    int x = 1;
    int y = 0;
    while(1) {    
        mvprintw(y ,x, "o");
        refresh();
        usleep(DELAY);
        mvprintw(y,x, " ");
        if (x >=  max_x || x <= 0 ) { 
            direction = toggle_direction();
        }
        x += direction;
        }
}
