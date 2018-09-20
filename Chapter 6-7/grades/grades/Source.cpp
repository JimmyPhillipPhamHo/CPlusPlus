//Auther Jimmy Pham Ho
//Date 9/19/2018
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char grade = ' ';
	string result;
	//enter grade to tell you what type of student you are 

	cout << "Enter your letter grade so we can judge you ";
	cin >> grade;

	grade + toupper(grade);

	switch (grade)
	{
	case 'A':
		result = "Excellent now you can be a Docter.";
		break;
	case 'B':
		result = "You have dishonorded your family.";
		break;
	case 'C':
		result = "your family disowned you and kicked you out of the house";
		break;
	case 'D':
	case 'F':
		result = "Your family forgot about you and you don't exist go away";
	default:
		result = "Not Valid/n";
	}// end switch
	cout << result;
	system("pause");
	return 0;
}