//Advanced30.ccp - displays 6 unique random integers 
//from 1 throght 54
//Created/revised by <Jimmy Pham Ho> on <10/3/2018>

#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	// declare array
	int lotteryNum[6] = { 0 };

	srand(time(NULL));

	cout << "Here is your lottery number: ";
	for (int i = 0; i < size(lotteryNum); i++)
	{
		lotteryNum[i] = rand() % 54 + 1;
		cout << lotteryNum[i] << " ";
	}//end for

	system("pause");
	return 0;

}//end of main function
