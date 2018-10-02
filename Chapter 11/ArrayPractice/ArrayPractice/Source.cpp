//Auther Jimmy Pham Ho
//Data 09/27/2018
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare array
	int valuesArray[7] = { 50, 10, 5, 25, 30, 15, 23 };
	int total = 0;

	for (int i = 0; i < size(valuesArray); i++)
	{
		cout << valuesArray[i] << endl;
		total = total + valuesArray[i];
	}
	cout << total << endl;

	int sales[4] = { 0.0 };

	
	system("pause");
	return 0;
}
