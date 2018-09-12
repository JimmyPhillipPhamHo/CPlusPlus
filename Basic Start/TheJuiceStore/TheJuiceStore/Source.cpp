// Example page 91
//Auther Jimmy Pham Ho
//Date 08/30/2018
#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double totalBill = 0.0;
	double liquor = 0.0;
	double tipPercent = 0.0;
	double totalNoLiquor = 0.0;
	double tip = 0.0;

	//enter input items 
	cout << "Enter the total bill: ";
	cin >> totalBill;

	cout << "Enter the Liqour charge: ";
	cin >> liquor;

	cout << "Enter the tip percentage in decimal format: ";
	cin >> tipPercent;

	//calculate the total without liquor and the tip
	totalNoLiquor = totalBill - liquor;
	tip = totalNoLiquor * tipPercent;

	//display the output item
	cout << "Tip: $" << tip << endl;

	system("pause");
	return 0;
} // end of main function