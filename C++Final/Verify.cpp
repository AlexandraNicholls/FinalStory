#include "stdafx.h"
#include "Verify.h"
#include <iostream>
using namespace std;


Verify::Verify()
{
}


Verify::~Verify()
{
}

//make sure the user gives a valid response
int Verify::VerifyResponse()
{
	//variable that will be returned!
	int response;

	do {
		cout << "Enter choice: ";
		cin >> response;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	} while (response != 1 && response != 2 && response != 3);

	return response;
}
