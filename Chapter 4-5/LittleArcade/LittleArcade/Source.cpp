//Auther Jimmy Pham Ho
//Date 9/11/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>

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
int randomGame()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	secret = rand() % 10 + 1;
	cout << "Pick a random 1 out 10" << endl;
	cout << "Enter your number here: ";
	cin >> numChoice;

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
int main()
{
	//declare variable
	int pickGame;

	cout << "         --------------------------" << endl;
	cout << "         ---Welcome to my Arcade---" << endl;
	cout << "         --------------------------" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "---     Please chose a game to play     ---" << endl;
	cout << "---Door game = 1, Randow Number Game = 2---" << endl;
	cout << "-------------------------------------------" << endl;

	do
	{
		cout << "Enter the your choice Here: ";
		cin >> pickGame;

		if (pickGame == 1)
		{
			doorgame();

		}
		else if (pickGame == 2)
		{
			randomGame();
		}
	} while (pickGame != 4);

	system("pause");
	return 0;

} // end of main function