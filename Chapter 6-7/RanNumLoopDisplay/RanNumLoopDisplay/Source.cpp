//Auther Jimmy Pham Ho
//Date 9/25/2018
#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int ranNum;
	srand(time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		ranNum = rand() % 10 + 1;
		cout << ranNum << endl;
	}
	system("pause");
	return 0;
}