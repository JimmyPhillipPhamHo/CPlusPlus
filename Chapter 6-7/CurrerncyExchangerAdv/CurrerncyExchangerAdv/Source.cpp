//Author Jimmy Pham Ho
//Date 09/26/2018
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables
	int numChoice;
	string error;
	int americanDollars;
	int canadianDollars = 0;
	int euro = 0;
	int indianRupee = 0;
	int southAfricanRand = 0;
	int britishPounds = 0;
	int mexicanPeos = 0;
	int japaneseYen = 0;
	
	cout << "Welcome to Bank of Jimmy the best bank in the world" << endl;
	cout << "Here are the available currerncy, you can exchange with American currerncy" << endl;
	cout << "///Currency/////////////Exchange rate///Input Number//" << endl;
	cout << "|| Canadian Doller    || .9813       ||      1      ||" << endl;
	cout << "|| Euro               || .757        ||      2      ||" << endl;
	cout << "|| Indian Rupee       || 52.53       ||      3      ||" << endl;
	cout << "|| Japanese Yen       || 80.92       ||      4      ||" << endl;
	cout << "|| Mexican Peso       || 13.1544     ||      5      ||" << endl;
	cout << "|| South African Rand || 7.7522      ||      6      ||" << endl;
	cout << "|| British Pound      || .6178       ||      7      ||" << endl;
	cout << "//////////////////////////////////////////////////////" << endl;

	//enter input items
	cout << "What currerncy would you like to exchange today" << endl;
	cout << "Please enter the currerncy input number here: ";
	cin >> numChoice;

	cout << "Please enter the amount of American dollar: ";
	cin >> americanDollars;

	switch (numChoice)
	{
	case 1:
		canadianDollars = americanDollars * .9813;
		cout << "The Exchange of American Dollar to Canadian Dollars is: " << canadianDollars << endl;
		break;
	case 2:
		euro = americanDollars * .757;
		cout << "The Exchange of American Dollar to Euro is: " << euro << endl;
		break;
	case 3:
		indianRupee = americanDollars * 52.53;
		cout << "The Exchange of American Dollar to Indian Rupee is: " << indianRupee << endl;
		break;
	case 4:
		japaneseYen = americanDollars * 80.92;
		cout << "The Exchange of American Dollar to Japanese Yen is: " << japaneseYen << endl;
		break;
	case 5:
		mexicanPeos = americanDollars * 13.1544;
		cout << "The Exchange of American Dollar to Mexican Peos is: " << mexicanPeos << endl;
		break;
	case 6:
		southAfricanRand = americanDollars * 7.7522;
		cout << "The Exchange of American Dollar to British Pounds is: " << britishPounds << endl;
		break;
	case 7:
		britishPounds = americanDollars * .6178;
		cout << "The Exchange of American Dollar to South African Rand is: " << southAfricanRand << endl;
		break;
	default:
		error = "Not Valid\n";
		break;
	}

	system("pause");
	return 0;
}// end of main function