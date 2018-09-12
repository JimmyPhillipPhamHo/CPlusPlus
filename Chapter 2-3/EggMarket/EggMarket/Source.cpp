//Auther Jimmy Pham Ho
//Date 09/4/2018
#include <iostream>
#include <string>
using namespace std;

int eggDozenCal(int eggs)  //function for calculating dozen of eggs
{
	int eggsDozen;
	eggsDozen = eggs / 12;
	return eggsDozen;

} // end of eggDozenCal function

int eggsRemainderCal(int eggs) //function for calculating remainder of eggs
{
	int eggsLeft;
	eggsLeft = eggs % 12;
	return eggsLeft;

} // end of eggsRemainderCal function

int main()
{
	//declare variable
	int eggs1;
	int eggsD;
	int eggsR;

	//enter input items
	cout << "Enter the amount of eggs you would like to purchase: ";
	cin >> eggs1;

	//Calls two functions
	eggsD = eggDozenCal(eggs1);
	eggsR = eggsRemainderCal(eggs1);

	//Display output items
	cout << "You have purchase " << eggsD << " Dozen" << "and " << eggsR << " egg left" << endl;


	system("pause");
	return 0;
} // end of main function
