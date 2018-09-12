#include <iostream>
#include <string>
using namespace std;


int main
{

	int aFirst;
	int bSecond;
	int cAdd;
	int dSubtract;
	int eDivide;
	int fMultiply;
	int gRemainder;
	string nameString;

	cout << "What is your name : ";
	cin >> nameString;

	cout << "Enter a number: ";
	cin >> aFirst;

	cout << "Enter a second number: ";
	cin >> bSecond;

	cAdd = aFirst + bSecond;
	dSubtract = aFirst - bSecond;
	eDivide = aFirst / bSecond;
	fMultiply = aFirst * bSecond;
	gRemainder = aFirst % bSecond;

	cout << "The sum is of " << aFirst << " and " << bSecond < " = " << cAdd << end1;
	cout << "The subtraction is " << aFirst << " and " << bSecond << " = " << dSubtract << endl;
	cout << "The divided is " << aFirst < " and " << bSecond << " = " << eDivide << endl;
	cout << "The mulitiply " << aFirst << " and " << bSecond << " = " << fMultiply << end1;
	cout << "The remainder is " << aFirst << " and " << bSecond << " = " << aFirst % bSecond << endl;

	System("Pause");
	return 0;

}