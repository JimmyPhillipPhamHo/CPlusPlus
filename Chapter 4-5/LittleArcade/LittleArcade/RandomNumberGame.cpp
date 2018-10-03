//Auther Jimmy Pham Ho
//Date 9/11/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
#include "LittleArcadeFunction.h"

using namespace std;

int randomGame()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	cout << "Pick a random 1 out 10" << endl;
	cout << "Enter your number here: ";
	cin >> numChoice;

	cout << secret << endl;

	if (numChoice == secret)
	{
		cout << "You chose the right number, You Win a life Supply\nFreeze Dried Smoky BBQ Roasted Crickets" << endl;
	}
	else
	{
		cout << "You chose poorly, You lose" << endl;
	}

	return 0;
}