//Auther Jimmy Pham Ho
//Date 08/30/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	string userName;
	double dayStayed = 0.0;
	double roomCharge = 5000;
	double internet = 6.99;
	double travelingFees = 10000;
	double totalBill;

	//enter input items
	cout << "***Welcome to Jimmy's Hotal in space on the international Jimmy's Spacestasion.***" << endl;

	cout << "Please enter your name: ";
	cin >> userName;

	cout << "Please enter the amount of days you would be staying with us: ";
	cin >> dayStayed;

	//Calculate the totalBill
	totalBill = ((roomCharge + internet) * dayStayed) + travelingFees;

	//display the output item
	cout << "Here is your total cost for your stay: " << totalBill << endl;
	cout << "Thank you for stay and enjoy being here " << userName << "." << endl;

	system("pause");
	return 0;
} // end of main function