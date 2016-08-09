#include "stdafx.h"
#include "Dice.h"
#include "time.h"
#include <iostream>
using namespace std;


Dice::Dice()
{
}


Dice::~Dice()
{
}

//roll the dice and return the integer
int Dice::RollDice()
{
	//make sure our dice rolls randomly based on the time
	srand(time(0));
	return rand() % 6 + 1;
}