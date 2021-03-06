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

		//this house is now full of vampires. Hooray!
		cout << "No one seems to have heard you. The house is quiet, but opulent. Red velvet drapes hang from the bannisters and over the doors of the rooms." << endl;
		cout << "" << endl;
	}
	else if (roll == 2 || roll == 4)
	{
		cout << "You roll a " << roll << endl;
		cout << "The door is unlocked! Step inside." << endl;
		cout << "The interior of the house is dark and dusty. Cobwebs hang from the walls and ceiling, almost low enough that you have to duck to avoid them!" << endl;
		cout << "Do you continue?" << endl;
		cout << "1. Yeah, you're gonna explore." << endl;
		cout << "2. No, this is gross. Bye bye!" << endl;
		cout << "3. Keep going. There might be something you could sell." << endl;
	}
	else
	{
		cout << "You roll a " << roll << endl;
		cout << "There is a squid lying on the doorstep! You slip on it and break your neck. " << endl;

		//goodbye!
		system("PAUSE");
		exit(0);
	}
	//goodbye
	system("PAUSE");
	exit(0);
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
		//ride the bear
	case 1: 
		cout << "Why would you think this was a good idea? The bear mauls you and leaves your feebly twitching body on the path." << endl;

		//goodbye!
		system("PAUSE");
			exit(0);
		break;
		//run away!
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
		//feed the bear
	case 3: 
		cout << "The bear gobbles down your honey chicken, then sinks to its paws. Your generous gift of food has touched its' heart. It would like you to ride it. You win!" << endl;

		//goodbye, winner!
		system("PAUSE");
		exit(0);
		break;
	}
	//goodbye
	system("PAUSE");
	exit(0);
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
		//hanging forest aww yeah
	case 1:  
		cout << "Fear grips your soul, but something draws you inexplicably onwards... Roll to break free!" << endl;
		roll = newDie.RollDice();

		//can you get away?
		if (roll == 1 || roll == 3 || roll == 5)
		{
			cout << "Turning from the compulsion, you break away, running as hard as you can away from the swamp." << endl;
			cout << "A figure looms through the mist ahead of you. Do you: " << endl;
			cout << "1. Keep running. You gotta get out!" << endl;
			cout << "2. Pause... what if it's dangerous?" << endl;
			cout << "3. Go straight to ninja spin-kick mode." << endl;
			choice = check.VerifyResponse();

			switch (choice)
			{
				//run away!
			case 1:
				break;
				//pause
			case 2:
				break;
				//fight
			case 3:
				cout << "Spin for success." << endl;
				roll = newDie.RollDice();

				if (roll == 1 || roll == 3 || roll == 5)
				{

				}
				else if (roll == 2 || roll == 4)
				{

				}
				else
				{
					cout << "You strike the figure directly! They fall to the ground... And disappears into the mist." << endl;
					cout << "Reaching the road, you find your way back to the crossroads... and just keep going." << endl;
					cout << "Is this a win? Is it really? That's up to you." << endl;
					system("PAUSE");
					exit(0);
				}
				break;
			}
		}
		else if (roll == 2 || roll == 4)
		{
			cout << "Curious, you begin to approach. You get closer, tentatively reaching out to touch... they can't be real... and snatch your hand back. No way. But you can't stop walking into the forest." << endl;
			cout << "Soon you lose sight of the path between the branches. What do you do?" << endl;
			cout << "1. Keep walking. You're bound to find an exit somewhere." << endl;
			cout << "2. Try going back. You're WAAAAY too close to this gross forest." << endl;
			cout << "3. Climb a tree and look around?" << endl;
			choice = check.VerifyResponse();

			switch (choice)
			{
				//keep walking
			case 1:
				cout << "I have bad news for you about the human ability to walk in straight lines." << endl;
				cout << "You wander in the forest, avoiding the hanging bodies, flinching at shadows, until you lose your mind. You lose." << endl;
				system("PAUSE");
				exit(0);
				break;
				//go back
			case 2:
				cout << "You turn around, trying to decide which way you came from. They all look the same..." << endl;
				cout << "To your own disgust, you recognize one of the corpses hanging from the tree. You head back that way." << endl;
				break;
				//climb
			case 3:
				cout << "You choose a tree. Can you climb it?" << endl;
				roll = newDie.RollDice();

				if (roll == 3 || roll == 5 || roll == 1)
				{
					cout << "To your dismay, once you've climbed the tree you are close to the middle of the wood!" << endl;
					cout << "" << endl;
				}
				else if (roll == 2 || roll == 4)
				{
					cout << "The branches are sturdy and strong, and soon you're above the treeline! You're not far from the edge of the forest!" << endl;
					cout << "You win!" << endl;
					system("PAUSE");
					exit(0);
				}
				else
				{
					cout << "As you begin to climb, a branch snaps! You fall and land on your head." << endl;
					system("PAUSE");
					exit(0);
				}
				break;
			}
		}
		else
		{
			cout << "As you run, stumbling down the path away from the woods, you get lost. The road seems to fall away in front of your feet... and you're back before the trees." << endl;
			cout << "Panic grips you! You run again... again... again... but can never get far enough to lose track of the creak, creak of hanging bodies. " << endl;
			system("PAUSE");
			exit(0);
		}
		break;
		//pomegranates
	case 2: 
		cout << "Getting closer, you realise that the pomegranates are pulsing... glowing..." << endl;
		cout << "With your curiosity piqued, you draw closer and reach out to touch." << endl;
		break;
		//nothing there
	case 3: 
		cout << "You begin to walk, getting closer to the forest. It's actually rather pretty." << endl;
		break; 
	}

	//goodbye
	system("PAUSE");
	exit(0);
}
