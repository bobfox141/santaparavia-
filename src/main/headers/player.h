/* 
file: player.h
description: player file attributes. 
*/
#ifndef PLAYER_H
#define PLAYER_H

#include "typedefs.h"

class player {
public: 
    
    int Cathedral;
    int Clergy;
    int CustomsDuty;
    int CustomsDutyRevenue;
    int DeadSerfs;
    int Difficulty;
    int FleeingSerfs;
    int Granaries;   // reduce losses by 5-10% 
    int GrainDemand;
    int GrainPrice;
    int GrainReserve; // this is an integer because stupid. 
    int Harvest;
    int IncomeTax;
    int IncomeTaxRevenue;
    int RatsAte;
    int Justice;
    int JusticeRevenue;
    int Land;
    int Marketplaces;
    int MarketRevenue;
    int Merchants;
    int MillRevenue;
    int Mills;
    int NewSerfs;
    int Nobles;
    int OldTitle;
    int Palace;
    int Rats;
    int SalesTax;
    int SalesTaxRevenue;
    int Serfs;
    int SoldierPay;
    int Soldiers;
    int TitleNum;
    int TransplantedSerfs, Treasury, WhichPlayer, Year, YearOfDeath;
    char City[15], Name[25], Title[15];
    float PublicWorks, LandPrice;
    boolean InvadeMe, IsBankrupt, IsDead, IWon, MaleOrFemale, NewTitle;
    
    // constructor
    player();
    
    // destructor
    ~player();
    
};


#endif
