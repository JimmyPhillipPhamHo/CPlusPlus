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