//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by <Jimmy Pham Ho> on <10/2/2018>

#include <iostream>
using namespace std;

int main()
{
	int points[5] = { 62, 75, 100, 83, 85 };
	char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

	int x = 0;

	cout << points[x] << "->" << grades[x] << endl;
	x += 1;

	cout << "Points:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << points[i] << " ";
	}
	cout << "\nGrades:" << endl;

	for (int x = 0; x <5; x++)
	{
		cout << grades[x] << " ";
	}

	system("pause");
	return 0;
}	//end of main function