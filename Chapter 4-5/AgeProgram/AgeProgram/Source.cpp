//Auther Jimmy Pham Ho
//Date 9/10/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare functions
	int userAge;
	string stringAnswer;
	string college;
	int phone;

	//enter input items
	cout << "Please enter your name here: ";
	cin >> userAge;

	if (userAge <= 12)
	{
		stringAnswer = "Eew buggers";
	}
	else if (userAge > 13 && userAge <= 18)
	{
		stringAnswer = "Good luck with high school, you will need it.";
	}
	else if (userAge > 20 && userAge <= 30)
	{
		cout << "Did you go to college? Yes or No >>>";
		cin >> college;
		if (college == "Yes")
		{
			stringAnswer = "How's your college debt?";
		}
		else if (true)
		{
			stringAnswer = "Then get a job you freeloader!";
		}

	}
	else if (userAge > 30 && userAge <= 40)
	{
		stringAnswer = "How's your boring Job, must be fun.";
	}
	else if (userAge > 40 && userAge <= 50)
	{
		stringAnswer = "How's life, it must be bad you";
	}
	else if (userAge > 50 && userAge <= 60)
	{
		stringAnswer = "You're a living fossil.";
	}
	else if (userAge > 60)
	{
		cout << "Do you have a flip phone or a Smart Phone" << endl;
		cout << "Enter 1 for flip phone or 2 for Smart Phone" << endl;
		cout << "Please enter your answer here: ";
		cin >> phone;

		if (phone == 1)
		{
			stringAnswer = "You're need to be in a museum.";
		}
		else if (phone == 2)
		{
			stringAnswer = "You probably are using the very first iPhone, just to be cool with the kids";
		}
	}

	cout << stringAnswer << endl;

	system("pause");
	return 0;
} // end of main function