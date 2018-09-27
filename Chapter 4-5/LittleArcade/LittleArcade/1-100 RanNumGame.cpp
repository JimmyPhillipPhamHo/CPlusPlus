//Auther Jimmy Pham Ho
//Date 9/11/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
#include "LittleArcadeFunction.h"

using namespace std;

int OneHundredRanNumGame ()
{
	int numChoice;
	int secret;
	int count = 1;
	srand(time(NULL));
	secret = rand() % 100 + 1;
	cout << "Pick a random 1 out 10" << endl;
	cout << "Enter your number here: ";
	cin >> numChoice;

}