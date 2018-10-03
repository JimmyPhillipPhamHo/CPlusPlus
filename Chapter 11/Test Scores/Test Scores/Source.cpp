//Auther Jimmy Pham Ho
//Date 10/1/2018
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;


int main()
{
	//declare variables
	string result;
	double average;
	double sum = 0.0;
	double highScore = 0.0;
	double lowScore = 0.0;
	double testScore = 0.0;
	//declare array
	double scoreArray[10] = { 0.0 };

	//adds user inputs to the score array
	for (int i = 0; i < size(scoreArray); i++)
	{
		cout << "Enter a test score: ";
		cin >> scoreArray[i];
	}

	//find the highest number in score array
	for (int i = 0; i < size(scoreArray); ++i)
	{
		if (scoreArray[0] <= scoreArray[i])
		{
			highScore = scoreArray[i];
		}
	}
	
	//find the lowest number in score array
	for (int i = 0; i < size(scoreArray); ++i)
	{
		if (scoreArray[0] >= scoreArray [i])
		{
			lowScore = scoreArray[i];
		}

	}

	//sort the score array
	int n = sizeof(scoreArray) / sizeof(scoreArray[10]);
	sort(scoreArray, scoreArray + n);

	//displays the sorted score array and get the sum of the array
	for (int i = 0; i < n; ++i) 
	{
		cout << scoreArray[i] << " " << endl;
		sum += scoreArray[i];
	}
	average = sum / 10;

	cout << "Here is the highest test score: " << highScore << endl;
	cout << "Here is the lowest test score: " << lowScore << endl;
	cout << "Here is the aveage test score: " << average << endl;



	/*if (testScore <= lowScore)
	{
		lowScore = testScore;
	}
	else if (testScore >= highScore)
	{
		highScore = testScore;
	}
	else if (testScore > 100 || testScore < 0)
	{
		result = "Incorrect, try again";
	}*/


	

	system("pause");
	return 0;

}
