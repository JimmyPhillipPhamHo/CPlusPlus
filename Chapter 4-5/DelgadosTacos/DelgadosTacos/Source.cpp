//Auther Jimmy Pham Ho
//9/12/2018
#include <iostream>
#include <string>

using namespace std;

/*int delgadosTacosMenu()
{


}*/

int main()
{
	//declare variables
	int choice;
	int endOrder;
	string error;
	double orders;
	double tacosOrder = .99;
	double burritoOrder = .99;
	double enchiladaOrder = 1.99;
	double quesadillaOrder = 1.99;
	double tostadaOrder = 1.99;
	double chipAndSalsaOrder = .99;
	double cornOrder = .99;
	double spicyGuacamoleWithChipOrder = .99;
	double fishTacoNachosOrder = .99;
	double chickenFlautasWithAvocadoCreamOrder = .99;
	double churroOrder = .99;
	double sodeOrder = 1.50;
	double waterOrder = .99;
	double totalBill = 0.0;
	double tax = 0.07;

	cout << "                                       Welcome to delgados Tacos" << endl;
	cout << "                                             Today's Menu" << endl;
	cout << "//Main Dishs////////////////////Appetizer/////////////////////////////////////////////Drinks///////////////////////////" << endl;
	cout << "||1: Tacos price: $ .99       ||6: Chip and Salsa: price: $ .99                     ||11: Water price: $.99          ||" << endl;
	cout << "||2: Burrito price: $ .99     ||7: Churro: price: $ .99                             ||12: Coca-Cola price: $1.50     ||" << endl;
	cout << "||3: Enchilada price: $ 1.99  ||8: Spicy Guacamole with chips price: $ .99          ||13: Sprite price: $1.50        ||" << endl;
	cout << "||4: Quesadilla price: $ 1.99 ||9: Fish Taco Nachos price: $ .99                    ||14: Fanta Orange price: $1.50  ||" << endl;
	cout << "||5: Tostada price: $ 1.99    ||10: Chicken Flautas with Avocado Cream price: $ .99 ||15: A&W Cream Soda price: $1.50||" << endl;
	cout << "///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;


	//cout << "\nDo you want Tacos than enter the amount you want or you don't want any than type the number 0." << endl;
	//cout << "Please enter here: ";
	//cin >> orders;
	//totalBill = totalBill + (orders * tacosOrder);

	cout << "Pick any number on the Main for your order and you can order multiply time." << endl;
	do
	{
		cout << "Please enter your order here: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "How many tacos would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * tacosOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 2:
			cout << "How many burritos would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * burritoOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 3:
			cout << "How many enchiladas would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * enchiladaOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 4:
			cout << "How many quesadillas would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * quesadillaOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 5:
			cout << "How many tostadas would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * tostadaOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 6:
			cout << "How many chip and salsas would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * chipAndSalsaOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 7:
			cout << "How many churros would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders *  churroOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 8:
			cout << "How many spicy guacamole with chips would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * spicyGuacamoleWithChipOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 9:
			cout << "How many Fish Taco Nachos would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * fishTacoNachosOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 10:
			cout << "How many chicken flautas with avocado creams would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * chickenFlautasWithAvocadoCreamOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 11:
			cout << "How many water drinks would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * waterOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 12:
			cout << "How many Coca-Cola drinks would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * sodeOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 13:
			cout << "How many Sprite drinks would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * sodeOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 14:
			cout << "How many Fanta Orange drinks would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * sodeOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		case 15:
			cout << "How many A&W Cream Soda drinks would you like: ";
			cin >> orders;
			totalBill = totalBill + (orders * sodeOrder);
			cout << "Do you want to continue ordering type 1 or end your order than type 2: ";
			cin >> endOrder;
			break;
		default:
			error = "Not Valid\n";
			break;
		}
	} while (endOrder == 1);

	totalBill = totalBill + (totalBill * tax);
	cout << "Your total bill for whole order is: $" << totalBill << endl;
	 
	system("pause");
	return 0;
} // end of main functions