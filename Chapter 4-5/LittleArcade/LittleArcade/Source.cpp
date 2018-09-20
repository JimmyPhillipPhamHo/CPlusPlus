//Auther Jimmy Pham Ho
//Date 9/11/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
#include "LittleArcadeFunction.h"

using namespace std;



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

	cout << "Enter the your choice Here: ";
	cin >> pickGame;
	do
	{
		
		if (pickGame == 1)
		{
			doorgame();

		}
		else if (pickGame == 2)
		{
			randomGame();
		}

		cout << "Would you like to play again or choose a different game" << endl;
		cout << "Again your choices are Door game = 1, Randow Number Game = 2" << endl;
		cout << "Enter the your choice Here: ";
		cin >> pickGame;

	} while (pickGame != 4);

	system("pause");
	return 0;

} // end of main function