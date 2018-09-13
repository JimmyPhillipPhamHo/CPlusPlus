//Auther Jimmy Pham H0
//Date 9/13/2018
#include <iostream>
#include <string>

using namespace std;

double perimeterCalculate(double aSide, double bSide, double cSide)
{
	double result;
	result = aSide + bSide + cSide;
	return result;
}


int rightTriangle()
{ 
	//declare variables
	int chooseSolve;
	int chooseOptions;
	double allSide;
	double twoSide;
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

		input = perimeterCalculate(aSide, bSide, cSide);
		cout << "The Perimeter of Triangle = " << input << endl;

		cout << "Would you like to return to the main menu or solve more right triangles or leave" << endl;
		cout << "Main Menu = 1, Right Triangle = 2, Leave = 3" << endl;
		cout << "Enter your choice here: ";
		cin >> chooseOptions;

		if (true)
		{

		}
		else
		{

		}
		



		
	}
	else if (chooseSolve == 3)
	{
		cout << "Coming Soon Premeter" << endl;
	}
	return 0;
}


/*int areaCalculate()
{

}*/




/*int isosceles()
{

}*/

/*int equilateral()
{

}*/




int main()
{
	int chooseTriangle;

	cout << "Welcome to the Triangle Calculator" << endl;
	cout << "Choose what to solve for: Solve for rightTriangle = 1, isosceles = 2, equilateral = 3" << endl;
	cout << "Enter your choice here: ";
	cin >> chooseTriangle;
	do
	{
		if (chooseTriangle = 1)
		{
			rightTriangle();
		}
		else if (chooseTriangle = 2)
		{
			//isosceles();
			cout << "Coming Soon" << endl;
		}
		else if (chooseTriangle = 3)
		{
			//equilateral();
			cout << "Coming Soon" << endl;
		}
		else 
		{
			cout << "That is not an Option" << endl;
		}
	} while (chooseTriangle != 4);
	
	system("pause");
	return 0;
}
