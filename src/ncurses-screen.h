// ncurses.h
// basic framework for writing simple text to a screen location.

#ifndef NCURSES_SCREEN_H
#define NCURSES_SCREEN_H

#include <ncurses.h>
#include <unistd.h>

class ncurses_screen {
public:
   
    int max_x;
    int max_y;
    int direction;  // 1 = left -1 = right
    
    // constructor minimal style
    ncurses_screen();
    
    // destructor
    ~ncurses_screen();
    
    int toggle_direction();
    
   void ncurses_mvball(); 
   void ncurses_end();
   void ncurses_init();
   
   // game functions 
   void sp_write_status(int nobles, int soldiers, int clergy, int merchants, int serfs, int land, int treasury);
   void sp_write_grain(int reserve, int harvest, int grainmin, int grainmax);
   void sp_state_purchases();
   
};


#endif
