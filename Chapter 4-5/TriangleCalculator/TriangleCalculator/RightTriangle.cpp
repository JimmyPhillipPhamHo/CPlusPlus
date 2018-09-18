#include <iostream>
#include <string>
#include "TriangleFunction.h"

using namespace std;

double areaCalculate(double aSide, double bSide)
{
	double areaResult;
	areaResult = (aSide * bSide) / 2;
	return areaResult;

}

double perimeterCalculate(double aSide, double bSide, double cSide)
{
	double perResult;
	perResult = aSide + bSide + cSide;
	return perResult;
}

double missingSideA(double bSide, double cSide)
{
	double side_A_Result;
	
	return side_A_Result;
}

double missingSideB(double aSide, double cSide)
{
	double side_B_Result;

	return side_B_Result;
}

double missingSideC(double aSide, double bSide)
{
	double side_C_Result;

	return side_C_Result;
}

void rightTriangle()
{
	//declare variables
	int continueSolve;
	int chooseSolve;
	double solution;
	double aSide;
	double bSide;
	double cSide;
	cout << "What do you what to solve for" << endl;
	cout << "Solve for Area = 1, Solve for Preimeter = 2, Solve for Missing Side = 3" << endl;
	cout << "Enter your choose here: ";
	cin >> chooseSolve;

	if (chooseSolve == 1)
	{
		//areaCalculate();
		do
		{
			cout << "You have choice Area" << endl;
			cout << "Type the number for side A and side B of the triangle to get the area." << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;
			cout << "Please enter side B here: ";
			cin >> bSide;

			solution = areaCalculate(aSide, bSide);
			cout << "The Area of Triangle is: " << solution << endl;

			cout << "Would you like to continue solving area for right Triangle?" << endl;
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
			cout << "Please enter side C here: ";
			cin >> cSide;

			solution = perimeterCalculate(aSide, bSide, cSide);
			cout << "The Perimeter of Triangle is: " << solution << endl;

			cout << "Would you like to continue solving perimeter for right Triangle?" << endl;
			cout << "Type 1 for yes or 2 for no" << endl;
			cout << "Please enter your choice here: ";
			cin >> continueSolve;

		} while (continueSolve == 1);

		Options();
	}
	else if (chooseSolve == 3)
	{
		cout << "You have choice Missing Side" << endl;
		cout << "Enter what side you are missing for your triangle" << endl;
		cout << "Type 1 for Side A or 2 for Side B or 3 for Side C" << endl;
		cout << "Please enter your side here;";
		cin >> chooseSolve;

		if (chooseSolve = 1)
		{

		}
		else if (chooseSolve = 2)
		{

		}
		else if (chooseSolve = 3)
		{

		}
			

	}

}