#include <iostream>
#include <string>
#include "TriangleFunction.h"

using namespace std;

double perimeterCalculate(double aSide, double bSide, double cSide)
{
	double result;
	result = aSide + bSide + cSide;
	return result;
}

void rightTriangle()
{
	//declare variables
	int chooseSolve;
	double allSide;
	//double twoSide;
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
		cout << "Coming Soon area" << endl;
	}
	else if (chooseSolve == 2)
	{
		cout << "You have choice Perimeter" << endl;
		cout << "Please enter side a here: ";
		cin >> aSide;
		cout << "Please enter side b here: ";
		cin >> bSide;
		cout << "Please enter side c here: ";
		cin >> cSide;

		allSide = perimeterCalculate(aSide, bSide, cSide);
		cout << "The Perimeter of Triangle = " << allSide << endl;

		Options();
	}
	else if (chooseSolve == 3)
	{
		cout << "Coming Soon Premeter" << endl;

	}

}