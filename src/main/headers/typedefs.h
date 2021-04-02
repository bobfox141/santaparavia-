// file: typedefs.h
// description: typedefs to be included in all files. 
// -*- mode: c++; linum:on ; -*-



#ifndef TYPEDEF_H
#define TYPEDEF_H

/* Declare an enum to emulate a Boolean. */
enum TrueFalse {True, False};

typedef enum TrueFalse boolean;
/* Declare our player definition. */


/* Declare our list of cities. */
const char CityList[7][15] = {
    "Santa Paravia",
    "Fiumaccio",
    "Torricella",
    "Molinetto",
    "Fontanile",
    "Romanga",
    "Monterana"
};
/* Declare our male titles. */
const char MaleTitles[8][15] = {
    "Sir",
    "Baron",
    "Count",
    "Marquis",
    "Duke",
    "Grand Duke",
    "Prince",
    "* H.R.H. King"
};
/* Declare our female titles. */
const char FemaleTitles[8][15] = {
    "Lady",
    "Baroness",
    "Countess",
    "Marquise",
    "Duchess",
    "Grand Duchess",
    "Princess",
    "* H.R.H. Queen"
};


#endif
