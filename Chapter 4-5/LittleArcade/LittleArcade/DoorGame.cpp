//Auther Jimmy Pham Ho
//Date 9/11/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
#include "LittleArcadeFunction.h"

using namespace std;

int doorgame()
{
	int userDoorChoice;

	cout << "Pick one of the three doors\nDoor1\nDoor2\nDoor3";
	cin >> userDoorChoice;

	if (userDoorChoice == 1)
	{
		cout << "You win a free trip to North Korea." << endl;
	}
	else if (userDoorChoice == 2)
	{
		cout << "You win a Broken down used Jeep that is also on fire" << endl;
	}
	else if (userDoorChoice == 3)
	{
		cout << "You win a Master degree in gender studys" << endl;
	}

	return 0;
}