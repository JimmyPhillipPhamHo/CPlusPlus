#include <iostream>
#include <string>
#include <math.h>
#include "TriangleFunction.h"

using namespace std;

double areaEquCal(double aSide)
{
	double areaResult;
	areaResult = (sqrt(3) / 4)* pow(aSide, 2);
	return areaResult;
}

double perimeterEquCal(double aSide)
{
	double perResult;
	perResult = 3 * aSide;
	return perResult;
}

void equilateralTriangle()
{

	//declare variables
	int continueSolve;
	int chooseSolve;
	double Solution;
	double aSide;

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
			cout << "Type the number for side A of the triangle to get the area." << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;

			Solution = areaEquCal(aSide);
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
			cout << "Type the number for side A of the triangle to get the perimeter." << endl;
			cout << "Please enter side A here: ";
			cin >> aSide;
		
			Solution = perimeterEquCal(aSide);
			cout << "The Perimeter of Triangle is: " << Solution << endl;

			cout << "Would you like to continue solving perimeter for isosceles Triangle?" << endl;
			cout << "Type 1 for yes or 2 for no" << endl;
			cout << "Please enter your choice here: ";
			cin >> continueSolve;

		} while (continueSolve == 1);

		Options();
	}
}// end of equilateral function