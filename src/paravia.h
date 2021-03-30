/*********************************************************************
 file:paravia.h
 description:  header for santa paravia et fumaccio. 
 
*/

#ifndef PARAVIA_H
#define PARAVIA_H


#include "ncurses-screen.h"
#include "player.h"

class Paravia {
public: 
    
    Paravia();
    ~Paravia();
    
    ncurses_screen * n;
    bool curses_on; 
    
    char str[256];            // generic message string 
    char stath[256];          // stats header
    char statl[256];          // stats line. 
    
    const double magicsoldierratio;
    
    
    // methods
    int Random(int);
    void InitializePlayer(player*, int, int, int, char*, boolean);
    void AddRevenue(player *);
    int AttackNeighbor(player *, player *);
    void BuyCathedral(player *);
    void BuyGrain(player *);
    void BuyLand(player *);
    void BuyMarket(player *);
    void BuyMill(player *);
    void BuyPalace(player *);
    void BuySoldiers(player *);
    void BuyGranary(player *);
    int limit10(int, int);
    boolean CheckNewTitle(player *);
    void GenerateHarvest(player *);
    void GenerateIncome(player *);
    void ChangeTitle(player *);
    void NewLandAndGrainPrices(player *);
    void PrintGrain(player *);
    int ReleaseGrain(player *);
    void SeizeAssets(player *);
    void SellGrain(player *);
    void SellLand(player *);
    void SerfsDecomposing(player *, float);
    void SerfsProcreating(player *, float);
    void PrintInstructions(void);
    void PlayGame(player [], int);
    void NewTurn(player *, int, player [], player *);
    void BuySellGrain(player *);
    void AdjustTax(player *);
    void DrawMap(player *);
    void StatePurchases(player *, int, player []);
    void ShowStats(player [], int);
    void ImDead(player *);
    
    bool isDefenseSufficient();
    void printPurchases(player *, bool);
    int calcGrainReserve( int g, int r, int s);
    
};

#endif
