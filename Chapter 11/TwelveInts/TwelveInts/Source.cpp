//Auther Jimmy Pham Ho 
//Date 09//28/2018
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <functional>


using namespace std;

int main()
{
	//declare array
	int twelveArray[12] = {0};

	//loop for input number in array
	for (int i = 0; i < size(twelveArray); i++)
	{
		cout << "Enter a number here: ";
		cin >> twelveArray[i];
	}

	int n = sizeof(twelveArray) / sizeof(twelveArray[12]);
	sort(twelveArray, twelveArray + n);

	cout << "Ascending order" << endl;

	for (int i = 0; i < n; ++i) {
		cout << twelveArray[i] << " ";
	}

	cout << "\nDescending order" << endl;

	sort(twelveArray, twelveArray + n, greater<int>());

	for (int i = 0; i < n; ++i)
		cout << twelveArray[i] << " ";

	
	/*for (int i = 0; i < size(twelveArray); i++)
	{
		cout << twelveArray << endl;
	}
*/
	system("pause");
	return 0;
}