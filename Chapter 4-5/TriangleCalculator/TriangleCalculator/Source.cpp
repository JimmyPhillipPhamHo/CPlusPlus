//Auther Jimmy Pham H0
//Date 9/13/2018
#include <iostream>
#include <string>
#include "TriangleFunction.h"

using namespace std;

int main()
{
	int chooseTriangle;

	cout << "Welcome to the Triangle Calculator" << endl;
	cout << "Choose what to solve for: Solve for rightTriangle = 1, isosceles = 2, equilateral = 3" << endl;
	cout << "Enter your choice here: ";
	cin >> chooseTriangle;
	do
	{
		if (chooseTriangle == 1)
		{
			rightTriangle();
		}
		else if (chooseTriangle == 2)
		{
			isoscelesTriangle();
		}
		else if (chooseTriangle == 3)
		{
			equilateralTriangle();
		}
	} while (chooseTriangle != 4);

	cout << "That is not an Option" << endl;
	
	system("pause");
	return 0;
}
