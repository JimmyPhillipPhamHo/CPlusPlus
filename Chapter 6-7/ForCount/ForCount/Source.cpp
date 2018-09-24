//Auther Jimmy Pham Ho
//Date 9/21/2018
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "First Loop" << endl;
	for (int i = 0; i <=5 ; i++) // A loop that count to 5 and than ends
	{
		cout << i << endl; // displays i each time of the loop runs
	}// end of the first loop

	cout << "Second Loop" << endl;
	for (int x = 10; x >= 0; x--)
	{
		cout << x << endl;
		if (x == 0)
		{
			cout << "Lift off" << endl;
		}
	}

	cout << "Third Loop" << endl;
	for (int z = 0; z <= 99; z = z + 5)
	{
		cout << z << endl;
	}

	cout << "forth Loop" << endl;
	for (int b = 0; b <= 100; b = b + 3)
	{
		cout << b << endl;
		if (b == 48)
		{
			cout << "/50/" << endl;
		}
	}

	system("pause");
	return 0;

}// end of main function