#include <iostream>
#include <string>
#include <stdio.h>      
#include <math.h> 
#include "TriangleFunction.h"

using namespace std;

double areaIsoscelesCal(double aSide, double baseSide)
{
	double areaResult;
	double height;
	double basehalf;
	basehalf = baseSide /2;

	height = (aSide * aSide) - (basehalf * basehalf) ;
	height = sqrt(height);
	
	areaResult = 0.5 * baseSide * height;
	return areaResult;

}


double perimeterIsoscelesCal(double aSide, double bSide)
{
	double perResult;
	perResult = (2 * aSide) + bSide;
	return perResult;
}

double MissingSideA(double bSide, double cSide)
{
	double side_A_Result;
	side_A_Result = (bSide * bSide) + (cSide * cSide);
	side_A_Result = sqrt(side_A_Result);
	return side_A_Result;
}

double MissingSideB(double aSide, double cSide)
{
	double side_B_Result;
	side_B_Result = (aSide * aSide) + (cSide * cSide);
	side_B_Result = sqrt(side_B_Result);
	return side_B_Result;
}

double MissingSideC(double aSide, double bSide)
{
	double side_C_Result;
	side_C_Result = (aSide * aSide) + (bSide * bSide);
	side_C_Result = sqrt(side_C_Result);
	return side_C_Result;
}

void isoscelesTriangle()
{
	double test;
	//declare variables
	int continueSolve;
	int chooseSolve;
	double Solution;
	double baseSide;
	double aSide;
	double bSide;
	double cSide;
	cout << "You have choice Isosceles Trinagle" << endl;
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
			cout << "Please enter side baseSide here: ";
			cin >> baseSide;

			Solution = areaIsoscelesCal(aSide, baseSide);
			cout << "The Area of Isosceles Triangle is: " << Solution << endl;

			

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
	else if (chooseSolve == 3)
	{
		cout << "You have choice Missing Side" << endl;
		cout << "Enter what side you are missing for your triangle" << endl;
		cout << "Type 1 for Side A or 2 for Side B or 3 for Side C" << endl;
		cout << "Please enter your side here:";
		cin >> chooseSolve;

		if (chooseSolve == 1)
		{
			cout << "You have choice Side A" << endl;
			cout << "Please enter side B here: ";
			cin >> bSide;
			cout << "Please enter side C here: ";
			cin >> cSide;
			Solution = MissingSideA(bSide, cSide);
			cout << "Missing Side A for the right Triangle is: " << Solution << endl;
		}
		else if (chooseSolve == 2)
		{
			cout << "You have choice Side B" << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;
			cout << "Please enter side C here: ";
			cin >> cSide;
			Solution = MissingSideA(aSide, cSide);
			cout << "Missing Side B for the right Triangle is: " << Solution << endl;
		}
		else if (chooseSolve == 3)
		{
			cout << "You have choice Side C" << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;
			cout << "Please enter side B here: ";
			cin >> bSide;
			Solution = MissingSideA(aSide, bSide);
			cout << "Missing Side C for the right Triangle is: " << Solution << endl;
		}


	}

}
