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
	string result;
	double average;
	double sum = 0.0;
	double highScore = 100;
	double lowScore = 0.0;
	double testScore = 0.0;
	double resultLowScore = 0.0;
	double resultHighScore = 0.0;
	double scoreArray[10] = { 0.0 };


	for (int i = 0; i < size(scoreArray); i++)
	{
		cout << "Please enter scores here: ";
		cin >> scoreArray[i];
	}

	int n = sizeof(scoreArray) / sizeof(scoreArray[10]);
	sort(scoreArray, scoreArray + n);

	
	cout << "Enter a test score: ";
	cin >> testScore;

	for (int i = 0; i < size(scoreArray); i++)
	{
		if (scoreArray[i] <= lowScore)
		{
			scoreArray[i] = resultLowScore;
		}
		else if (scoreArray[i] >= highScore)
		{
			scoreArray[i] = resultHighScore;
		}
		
	}


	for (int i = 0; i < size(scoreArray); ++i)
	{
		sum += scoreArray[i];
	}

	average = sum / 10;

	for (int i = 0; i < n; ++i)
		cout << scoreArray[i] << " " << endl;

	cout << "Here is the lowest test score: " << resultLowScore << endl;
	cout << "Here is the highest test score: " << resultHighScore << endl;
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
