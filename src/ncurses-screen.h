// ncurses.h
#ifndef NCURSES_H
#define NCURSES_H

class ncurses_demo {
public:
   
    int max_x;
    int max_y;
    int direction;  // 1 = left -1 = right
    ncurses_demo();
    int toggle_direction();
    
   void ncurses_mvball(); 
   void ncurses_end();
   void ncurses_init();
};


#endif
