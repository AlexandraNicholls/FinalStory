#include "stdafx.h"
#include "Story.h"
#include "Verify.h"
#include "Dice.h"
#include <iostream>
using namespace std;

//set up the classes to be used
Verify check;
Dice newDie;
int choice, roll;

Story::Story()
{
	
}


Story::~Story()
{
}

void Story::Beginning()
{
	
	//start the story
	cout << "You are standing on a winding path, at a crossroads. You can see three paths. Which path do you take?" << endl;
	cout << "1. To the forest!" << endl;
	cout << "2. To the creepy house!" << endl;
	cout << "3. To the swamp!" << endl;
	choice = check.VerifyResponse();
	
	//where will our story take us?
	switch (choice)
	{
	case 1:
		Forest();
		break;
	case 2:
		House();
		break;
	case 3:
		Swamp();
		break;
	}

}

void Story::House()
{
	cout << "You try the door. " << endl;

	//roll for success!
	roll = newDie.RollDice();
}

void Story::Swamp()
{

}

void Story::Forest()
{

}
