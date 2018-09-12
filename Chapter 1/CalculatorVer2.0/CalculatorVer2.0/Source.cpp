//Auther Jimmy Pham Ho
//Date 08/25/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	string nameString;
	int firstNum;
	int secondNum;
	int add;
	int substract;
	int multiply;
	int divide;
	int remainder;

	//enter input items
	cout << "What is your name? ";
	cin >> nameString;

	cout << "Please enter your first number: ";
	cin >> firstNum;

	cout << "Please enter a second number: ";
	cin >> secondNum;

	//calculate the firstNum and secondNum with five math operators
	add = firstNum + secondNum;
	substract = firstNum - secondNum;
	multiply = firstNum * secondNum;
	divide = firstNum / secondNum;
	remainder = firstNum % secondNum;

	//display the output items
	cout << "The sum of " << firstNum << " and " << secondNum << " = " << add << endl;
	cout << "The difference of " << firstNum << " and " << secondNum << " = " << substract << endl;
	cout << "The product of " << firstNum << " and " << secondNum << " = " << multiply << endl;
	cout << "The quotient of " << firstNum << " and " << secondNum << " = " << divide << endl;
	cout << "The remainder of " << firstNum << " and " << secondNum << " = " << remainder << endl;

	system("pause");
	return 0;
} // end of main function 
