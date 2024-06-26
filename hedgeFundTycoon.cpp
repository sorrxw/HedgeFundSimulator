#include <iostream>

// include header files
#include "introduction.h"
#include "menu.h"

using namespace std;

// player variables
double player_balance;

// fund variables
double fund_balance;

// project-wide variables
int week = 1;
int year = 2024;
int intro_question1_answer;

// array for stocks held by player
double player_stocks[] = {};

int main()
{

    introduction(); // call the intro function from the header file

    menu(); // call the menu function from the header file

    return 0;
}