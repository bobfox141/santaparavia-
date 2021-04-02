/*
 ***************************************
 * INCLUDE files for :menu.cpp
 * 
 ***************************************

 **************************************
 Name: menu.cpp
 Description:This is a port of the original TRS-80 BASIC code for
 Santa Paravia and Fiumaccio, (C) 1979 George Blank (used with
 permission).

 By: Thomas Knox
 Inputs:N/A
 Returns:N/A
 Assumes:Should compile and run on any system with an ANSI-C compiler.
 Side Effects:N/A
 This code is copyrighted and has limited warranties.
 Please see http://www.Planet-Source-Code.com/xq/ASP/txtCodeId.7183/lngWId.3/qx/vb/scripts/ShowCode.htm
 for details.

      ***********************************************
      ** ** ** Santa Paravia & Fiumaccio. Translated from the original TRS-80 BASIC
      ** ** source code into C by Thomas Knox <tknox@mac.com>.
      ** **
      ** ** Original program (C) 1979 by George Blank
      ** ** <gwblank@postoffice.worldnet.att.net>
      ** ** **
      *****************************************************************************
*/


/* Copyright (C) 2000 Thomas Knox Portions Copyright (C) 1979 by
   George Blank, used with permission. This program is free software;
   you can redistribute it and/or modify it under the terms of the GNU
   General Public License as published by the Free Software
   Foundation; either version 2 of the License, or (at your option)
   any later version. This program is distributed in the hope that it
   will be useful, but WITHOUT ANY WARRANTY; without even the implied
   warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
   PURPOSE. See the GNU General Public License for more details. You
   should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA. Thomas Knox tknox@mac.com */

/* Declare our standard CPP headers. */

// Change language to c++ cause reasons. 

#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <cstring>

#include "typedefs.h"
#include "paravia.h"



/* begin main */
int main(void) {
    Paravia p;
    player MyPlayers[6];
    int NumOfPlayers, i, level;
    char string[255], name[25];
    boolean MorF;
    /* Initialize the random number generator seed. */
    srand(time(NULL));
    /* Start the game. */
    printf("Santa Paravia and Fiumaccio\n");
    printf("\nDo you wish instructions (Y or N)? ");
    fgets(string, 254, stdin);
    if (string[0] == 'y' || string[0] == 'Y') p.PrintInstructions();
    printf("How many people want to play (1 to 6)? ");
    fgets(string, 254, stdin);
    NumOfPlayers = (int)atoi(string);
    if (NumOfPlayers < 1 || NumOfPlayers > 6) {
        printf("Thanks for playing.\n");
        return(0);
    }
    printf("What will be the difficulty of this game:\n1. Apprentice\n");
    printf("2. Journeyman\n3. Master\n4. Grand Master\n\nChoose: ");
    fgets(string, 254, stdin);
    level = (int)atoi(string);
    if (level < 1) level = 1;
    if (level > 4) level = 4;
    for (i = 0;
            i < NumOfPlayers;
            i++) {
        printf("Who is the ruler of %s? ", CityList[i]);
        fgets(name, 24, stdin);
        /* Strip off the trailing \n. */
        name[strlen(name) - 1] = '\0';
        printf("Is %s a man or a woman (M or F)? ", name);
        fgets(string, 3, stdin);
        if (string[0] == 'm' || string[0] == 'M') MorF = True;
        else MorF = False;
        p.InitializePlayer(&MyPlayers[i], 1400, i, level, name, MorF);
    }
    /* Enter the main game loop. */
    p.PlayGame(MyPlayers, NumOfPlayers);
    /* We're finished. */
    system("pause");
    return(0);
}

