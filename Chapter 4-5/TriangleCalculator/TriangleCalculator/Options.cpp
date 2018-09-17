#include <iostream>
#include <string>
#include "TriangleFunction.h"

using namespace std;

void Options()
{
	int chooseOptions;
	cout << "Would you like to return to the main menu or solve more right triangles or leave" << endl;
	cout << "Main Menu = 1, Right Triangle = 2, Leave = 3" << endl;
	cout << "Enter your choice here: ";
	cin >> chooseOptions;

	if (chooseOptions == 1)
	{
		main();
	}
	else if (chooseOptions == 2)
	{
		rightTriangle();
	}
	else if (chooseOptions == 3)
	{
		
	}
}