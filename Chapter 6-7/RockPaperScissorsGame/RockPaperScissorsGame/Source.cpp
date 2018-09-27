//Auther Jimmy Pham Ho
//Date 9/26/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int playerChoice;
	int computerChoice;
	int countWins = 0;
	int countLose = 0;
	int countTies = 0;
	int again;

	srand(time(NULL));
	cout << "Welcome to Rock, Paper, and Scissors Game" << endl;
	cout << "Play against with a computer, Can you beat the machine" << endl;
	cout << "There is secret ending in this game trie to find it" << endl;
	do
	{
		cout << "Type 1 for Rock, 2 for Paper, and 3 for Scissors" << endl;
		cout << "Please enter your answer here: ";
		cin >> playerChoice;
		computerChoice = rand() % 3 + 1;

		if (playerChoice == 1)
		{
			cout << "You have choice Rock" << endl;
			if (playerChoice = 1 && computerChoice == 3)
			{
				cout << "Rock beats Scissors // Player Wins // -- Computer lose --" << endl;
				countWins++;
			}
			else if (playerChoice = 1 && computerChoice == 2)
			{
				cout << "Paper beats Rock // Computer Wins // -- Player lose --" << endl;
				countLose++;
			}
			else if (playerChoice = 1 && computerChoice == 1)
			{
				cout << "Rock cannot beats Rock // It's a tie //" << endl;
				countTies++;
			}

		}
		else if (playerChoice == 2)
		{
			cout << "You have choice Paper" << endl;
			if (playerChoice = 2 && computerChoice == 1)
			{
				cout << "Paper beats Rock // Player Wins // -- Computer lose --" << endl;
				countWins++;
			}
			else if (playerChoice = 2 && computerChoice == 3)
			{
				cout << "Scissors beats Paper // Computer Wins // -- Player lose --" << endl;
				countLose++;
			}
			else if (playerChoice = 2 && computerChoice == 2)
			{
				cout << "Paper cannot beats Paper // It's a tie //" << endl;
				countTies++;
			}
		}
		else if (playerChoice == 3)
		{
			cout << "You have choice Scissors" << endl;
			if (playerChoice = 3 && computerChoice == 2)
			{
				cout << "Scissors beats Paper // Player Wins // -- Computer lose --" << endl;
				countWins++;
			}
			else if (playerChoice = 3 && computerChoice == 1)
			{
				cout << "Rock beats Scissors // Computer Wins // -- Player lose --" << endl;
				countLose++;
			}
			else if (playerChoice = 3 && computerChoice == 3)
			{
				cout << "Scissors cannot beats Scissors // It's a tie //" << endl;
				countTies++;
			}
		}

		cout << "Would you like to play again // no = 2, yes = 1 //." << endl;
		cout << "Please enter your choice here: ";
		cin >> again;
	} while (again == 1);

	cout << "            LeaderBoard" << endl;
	cout << "// Player Wins: " << countWins << " // Computer Wins: " << countLose << " //" << endl;
	cout << "// Player lose: " << countLose << " // Computer lose: " << countWins << " //" << endl;
	cout << "// Player ties: " << countTies << " // Computer ties: " << countTies << " //" << endl;


	if (countWins > countLose)
	{
		cout << "You have more wins than the computer, you show those computers that you are the master" << endl;
		cout << "Good Ending for humanity and Bad for machine" << endl;
	}
	else if (countWins < countLose)
	{
		cout << "You have more loses than the computer, you have doom the human race and\nnow humanity is under the control of our supreme robolords!!!" << endl;
		cout << "Bad Ending for humanity and Good for machine" << endl;
	}
	else if (countWins < countTies && countLose < countTies || countWins == countLose)
	{
		cout << "You have more tie than wins and loses, It look like man and machine can coexist and work together as one united nation" << endl;
		cout << "Great Ending for all" << endl;
	}

	system("pause");
	return 0;
}





