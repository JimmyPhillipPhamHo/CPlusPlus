//Advanced29.cpp - displays the number of students
//earning a specific score
//Created/revised by <Jimmy Pham Ho> on <10/3/2018>

#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//declare array
	int scores[20] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < size(scores); i++)
		scores[i] = rand() % 100 + 1;
	//end for

	//declare variables
	int total = 0;
	int minScores = 0;
	int maxScores = 0;


	cout << "Enter a minimum score and a maximum from 0 through 100 (Enter -1 for both inputs to end)" << endl;
	cout << "Enter a minimum score here: ";
	cin >> minScores;
	cout << "Enter a maximum score here: ";
	cin >> maxScores;


	while (minScores >= 0 || maxScores >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] >= minScores && scores[x] <= maxScores)
				total += 1;
		//end if    
		//end for

		//display total
		cout << "Number of students earning a score from " << minScores << " through " << maxScores 
			<< ": "
			<< total << endl << endl;
		
		cout << "Enter a minimum score and a maximum from 0 through 100 (Enter -1 for both inputs to end)" << endl;
		cout << "Enter a minimum score here: ";
		cin >> minScores;
		cout << "Enter a maximum score here: ";
		cin >> maxScores;

	}  //end while

	system("pause");
	return 0;
}	//end of main function