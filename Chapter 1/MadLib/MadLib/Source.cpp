//Auther Jimmy Pham Ho
//Date 08/27/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{ 
	//declare variables
	int firstNum;
	int secondNum;
	int sum;
	string color;
	string estWord;
	string bodyPartPlural;
	string noun;
	string animal;
	string pluralNoun;

	cout << "Madlibs" << endl; //display titles

	//enter input items
	cout << "Please enter a color: ";
	cin >> color;

	cout << "Please enter a Word ending in est: ";
	cin >> estWord;

	cout << "Please enter a number: ";
	cin >> firstNum;

	cout << "Please enter a second number: ";
	cin >> secondNum;

	cout << "Please enter a body part plueral: ";
	cin >> bodyPartPlural;

	cout << "Please enter a animal: ";
	cin >> animal;

	cout << "Please enter a noun: ";
	cin >> noun;

	cout << "Please enter a plural noun: ";
	cin >> pluralNoun;

	//calculate sum by subtracting firstNum and secondNum
	sum = firstNum - secondNum;

	//display the output items
	cout << "The " << color << " Dragon is the " << estWord << " Dragon of all. " << "It has " << sum << " " << bodyPartPlural << ", and a " << animal
		<< " shaped like a " << noun << ". It loves to eat " << pluralNoun << ", although it will feast on nearly anything " << endl;

	system("pause");
	return 0;
} // end of main function