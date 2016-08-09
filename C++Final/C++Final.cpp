// C++Final.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dice.h"
#include "Verify.h"
#include "Story.h"
#include <iostream>
#include <string>
#include "time.h"
using namespace std;

int main()
{
	//set up the variables
	int roll, response; 
	string Intro = "Welcome to the story! You will follow an adventure path, making selections with your number keys.";
	string ReIntro = "By selecting a choice with the numbers on your keypad, you will forge your own path through an adventure story. Will you live? Or will you die? Only playing the game will tell.";
	
	//invoke our classes
	Dice newDie;
	Verify check;
	Story storytime;

	//Time to begin!
	cout << Intro << endl;
	cout << "Do you understand?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "3. Exit" << endl;

	//check the input is valid
	response = check.VerifyResponse();

	//switch to find out what we do!
	switch (response)
	{
	case 1:
		storytime.Beginning();
		break;
	case 2:
		//play an alternate introduction and try again!
		cout << ReIntro << endl;
		cout << "Are you ready to begin?" << endl;
		cout << "1. Begin Quest!" << endl;
		cout << "2. Exit" << endl;
		cout << "3. Replay Intro" << endl;
		response = check.VerifyResponse();

		//check what they chose and continue accordingly
		switch (response)
		{
		case 1:
			//time to tell the story
			storytime.Beginning();
			break;
		case 2:
			//exit
			return 0;
			break;
		case 3:
			//heeere we go again
			cout << Intro << endl;
			cout << "Do you understand?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. Maybe?" << endl;
			cout << "3. I surrender, let me out." << endl;
			response = check.VerifyResponse();

			switch (response)
			{
			case 1:
				storytime.Beginning();
				break;
			case 2:
				return 0;
				break;
			case 3:
				return 0;
				break;
			}

			break;
		}
		break;
	case 3:
		return 0;
		break;
	};

	system("PAUSE");
    return 0;
}

