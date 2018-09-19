#include <iostream>
#include <string>     
#include <math.h> 
#include "TriangleFunction.h"

using namespace std;

double areaIsoscelesCal1(double aSide, double bSide) //get the area using the user inputs of side A and the base of the isosceles
{
	double areaResult;
	double height;
	double basehalf;
	basehalf = bSide / 2; //divides the base by 2

	height = (aSide * aSide) - (basehalf * basehalf);
	height = sqrt(height);

	areaResult = 0.5 * bSide * height;
	return areaResult;
}

double areaIsoscelesCal2(double bSide, double height) //get the are the user inputs of base and the height of the isosceles
{
	double areaResult;
	areaResult = (height * bSide) / 2;
	return areaResult;
}

double perimeterIsoscelesCal(double aSide, double bSide)
{
	double perResult;
	perResult = (2 * aSide) + bSide;
	return perResult;
}

void isoscelesTriangle()
{

	//declare variables
	int continueSolve;
	int chooseSolve;
	double Solution;
	double aSide;
	double bSide;
	double height;

	cout << "You have choice Isosceles Trinagle" << endl;
	cout << "What do you what to solve for" << endl;
	cout << "Solve for Area = 1, Solve for Preimeter = 2" << endl;
	cout << "Enter your choose here: ";
	cin >> chooseSolve;

	if (chooseSolve == 1)
	{
		//areaCalculate();
		do
		{
			cout << "You have choice Area" << endl;
			cout << "Does your isosceles triangle have A and B side with no height then type 1" << endl;
			cout << "Does your isosceles triangle have the base and height then type 2" << endl;
			cout << "Please enter your choice here: ";
			cin >> chooseSolve;

			if (chooseSolve == 1)
			{
				cout << "Type the number for side A and side B of the triangle to get the area." << endl;
				cout << "Please enter side A here: ";
				cin >> aSide;
				cout << "Please enter side base Side here: ";
				cin >> bSide;

				Solution = areaIsoscelesCal1(aSide, bSide);
				cout << "The Area of Isosceles Triangle is: " << Solution << endl;

			}
			else if (chooseSolve == 2 )
			{
				cout << "Type the number for side A and side B of the triangle to get the area." << endl;
				cout << "Please enter the base here: ";
				cin >> bSide;
				cout << "Please enter the height here: ";
				cin >> height;

				Solution = areaIsoscelesCal2(bSide, height);
				cout << "The Area of Isosceles Triangle is: " << Solution << endl;
			}
			
			cout << "Would you like to continue solving area for isosceles Triangle?" << endl;
			cout << "Type 1 for yes or 2 for no" << endl;
			cout << "Please enter your choice here: ";
			cin >> continueSolve;

		} while (continueSolve == 1);

		Options();
	}
	else if (chooseSolve == 2)
	{
		//perimeterCalculate();
		do
		{
			cout << "You have choice Perimeter" << endl;
			cout << "Type the number for each side of the triangle to get the perimeter." << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;
			cout << "Please enter side B here: ";
			cin >> bSide;

			Solution = perimeterIsoscelesCal(aSide, bSide);
			cout << "The Perimeter of Triangle is: " << Solution << endl;

			cout << "Would you like to continue solving perimeter for isosceles Triangle?" << endl;
			cout << "Type 1 for yes or 2 for no" << endl;
			cout << "Please enter your choice here: ";
			cin >> continueSolve;

		} while (continueSolve == 1);

		Options();
	}
}// end of isosceles function


