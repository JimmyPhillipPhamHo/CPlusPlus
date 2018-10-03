//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <Jimmy Pham Ho> on <10/3/2018>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int sub = 0;    //keeps track of subscripts
	int points = 0;

	//declare arrays and fill with data
	int minPoints[5] = { 0, 300, 350, 400, 450 };
	int maxPoints[5] = { 299, 349, 399, 449, 500 };
	char grades[5] = { 'F', 'D', 'C' , 'B', 'A' };


	//get total points
	cout << "Enter points earned (negative number to stop program): ";
	cin >> points;


	for (sub = 0; sub < 5; sub++)
	{
		if (points >= minPoints[sub] && points <= maxPoints[sub])
		{
			cout << "Grade: " << grades[sub] << endl;
		}
	}


    system("pause");
	return 0;
}	//end of main function