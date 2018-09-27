//Auther Jimmy Pham Ho
//Date 9/25/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int comNumChoice;
	int userSecret;
	int countGuess = 0;

	cout << "Pick a random number 1 out 100 for the computer to guess" << endl;
	cout << "Enter your number here: ";
	cin >> userSecret;


	srand((unsigned int)time(NULL));
	comNumChoice = rand() % 100 + 1;
	countGuess++;

		while (comNumChoice != userSecret)
		{
			if (comNumChoice > userSecret)
			{
				comNumChoice = rand() % ((comNumChoice /2) - userSecret) + 1;
				cout << "Computer guess was greater then your secret" << endl;
				cout << comNumChoice << endl;
			}
			else if (comNumChoice < userSecret)
			{
				comNumChoice = rand() % ((comNumChoice / 2) + userSecret) + 1;
				cout << "Computer guess was less then your secret" << endl;
				cout << comNumChoice << endl;
			} 
			//else
			//{
			//	comNumChoice = rand() % 10 + 1;
			//	cout << comNumChoice << endl;
			//}
			countGuess++;
		}

		//cout << comNumChoice << endl;
	cout << "Computer has guess your number" << endl;
	cout << "Here are number of trie for computer to guess your number: " << countGuess << endl;


	system("pause");
	return 0;
}