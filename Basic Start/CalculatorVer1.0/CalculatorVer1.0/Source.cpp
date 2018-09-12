//Auther Jimmy Pham Ho
//Date 08/23/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	int firstNum;
	int secondNum;
	int total;
	int subTotal;
	int multTotal;
	int divTotal;

	cout << "The first number 2 plus 5 = " << 2 + 5 << endl;

	//enter input items
	cout << "Enter a number: ";
	cin >> firstNum;

	cout << "Enter another number: ";
	cin >> secondNum;

	total = firstNum + secondNum;
	cout << "The sum of " << firstNum << " and " << secondNum << " = " << total << endl;

	subTotal = firstNum - secondNum;
	cout << "The subtotal of " << firstNum << " and " << secondNum << " = " << subTotal << endl;

	multTotal = firstNum * secondNum;
	cout << "The multTotal of " << firstNum << " and " << secondNum << " = " << multTotal << endl;

	divTotal = firstNum / secondNum;
	cout << "The divTotal of " << firstNum << " and " << secondNum << " = " << divTotal << endl;

	system("pause");
	return 0;
} // end of main function