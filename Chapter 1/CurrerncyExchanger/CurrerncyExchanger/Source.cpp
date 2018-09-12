//Author Jimmy Pham Ho
//Date 08/29/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare variables
	int americanDollars;
	int britishPounds;
	int mexicanPeos;
	int japaneseYen;

	//enter input items
	cout << "Please enter the amount of American dollar: ";
	cin >> americanDollars;

	//calculate americanDoller by multiplying with three other country's currerncy exchange rates
	britishPounds = americanDollars * .6318;
	mexicanPeos = americanDollars * 12.8863;
	japaneseYen = americanDollars * 82.34;

	//display the output item
	cout << "The Exchange of American Dollar to British Pounds is: " << britishPounds << endl;
	cout << "The Exchange of American Dollar to Mexican Peos is: " << mexicanPeos << endl;
	cout << "The Exchange of American Dollar to Japanese Yen is: " << japaneseYen << endl;

	system("pause");
	return 0;
}// end of main function