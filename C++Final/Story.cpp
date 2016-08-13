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

//play the story of the spooky house!
void Story::House()
{
	cout << "You try the door. Roll for success!" << endl;

	//roll for success!
	roll = newDie.RollDice();
	
	//does the door open?
	if (roll == 1 || roll == 3 || roll == 5)
	{
		cout << "You roll a " << roll << endl;
		cout << "The door is locked. Vandalism ensues. Step inside!" << endl;
	}
	else if (roll == 2 || roll == 4)
	{
		cout << "You roll a " << roll << endl;
		cout << "The door is unlocked! Step inside." << endl;
	}
	else
	{
		cout << "You roll a " << roll << endl;
		cout << "There is a squid lying on the doorstep! You slip on it and break your neck. " << endl;

		//goodbye!
		system("PAUSE");
		exit(0);
	}
}

//play the story of the swamp
void Story::Swamp()
{
	//time for some questionable decisions!
	cout << "As you arrive at the swamp, a bear attacks! Some lunatic has strapped rusty forks to its arms!" << endl;
	cout << "What do you wish to do?" << endl;
	cout << "1. Ride the bear!" << endl;
	cout << "2. Run away!!" << endl;
	cout << "3. Throw your lunch!" << endl;
	choice = check.VerifyResponse();

	//what happened? 
	switch (choice)
	{
	case 1: 
		cout << "Why would you think this was a good idea? The bear mauls you and leaves your feebly twitching body on the path." << endl;

		//goodbye!
		system("PAUSE");
			exit(0);
		break;
	case 2:
		cout << "Roll for success!" << endl;
		roll = newDie.RollDice();

		cout << "You rolled a " << roll << endl;
		
		//what happens now?
		if (roll == 1 || roll == 3 || roll == 5)
		{
			cout << "The bear is distracted by something in the bushes! You escape back up the road." << endl;
			Beginning();
		}
		else if (roll == 2 || roll == 4)
		{
			cout << "The bear knocks aside all in its path, preferring instead to chase you through the swamp." << endl;
			cout << "You lose." << endl;
			system("PAUSE");
			exit(0);
		}
		else
		{
			cout << "Losing your way in the mist, you trip into a water hole in the swamp. Can you swim?" << endl;
			system("PAUSE");
			exit(0);
		}
		break;
	case 3: 
		cout << "The bear gobbles down your honey chicken, then sinks to its paws. Your generous gift of food has touched its' heart. It would like you to ride it. You win!" << endl;

		//goodbye, winner!
		system("PAUSE");
		exit(0);
		break;
	}

}

//play the story of the forest
void Story::Forest()
{
	//time to set the scene
	cout << "As you approach the forest, you realise that something is hanging from the trees. A low, ominous creek sounds and the fruits sway in a gentle breeze. Except... those aren't fruits... " << endl;
	cout << "1. They're corpses! This is the hanging forest!" << endl;
	cout << "2. They look like... giant pomegranates?" << endl;
	cout << "3. There's nothing there. You're imagining it!" << endl;
	choice = check.VerifyResponse();

	//where will the story go?
	switch (choice)
	{
	case 1:  
		cout << "Fear grips your soul, but something draws you inexplicably onwards... Roll to break free!" << endl;
		roll = newDie.RollDice();

		//can you get away?
		if (roll == 1 || roll == 3 || roll == 5)
		{
			cout << "As you run, stumbling down the path away from the woods, you get lost. The road seems to fall away in front of your feet... and you're back before the trees." << endl;
			cout << "Panic grips you! You run again... again... again... but can never get far enough to lose track of the creak, creak of hanging bodies. " << endl;
		}
		else if (roll == 2 || roll == 4)
		{
			cout << "Curious, you begin to approach. You get closer, tentatively reaching out to touch... and snatch your hand back. No way. But you can't stop walking into the forest." << endl;
		}
		else
		{

		}
		break;
	case 2: 
		break;
	case 3: 
		break; 
	}
}
