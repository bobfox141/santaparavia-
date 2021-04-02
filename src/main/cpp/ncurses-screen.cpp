// ncurses.cpp



#include "ncurses-screen.h"



ncurses_screen::ncurses_screen() {
    direction = 1;
    max_y = 0;
    max_y = 0;
}
void ncurses_screen::ncurses_init() {
    initscr();
    noecho();
    curs_set(FALSE);
    
    
}

void ncurses_screen::ncurses_end() {
    sleep(1);
    endwin();
}

int ncurses_screen::toggle_direction() {
    if (direction == 1)
        return -1;
    else 
        return 1;
}



void ncurses_screen::ncurses_mvball() {
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


void ncurses_screen::sp_write_status(int nobles, int soldiers, int clergy, int merchants, int serfs, int land, int treasury) {
    
    return;
}
void ncurses_screen::sp_write_grain(int reserve, int harvest, int grainmin, int grainmax) {
    return;
}

void ncurses_screen::sp_state_purchases() {
    return;
}

