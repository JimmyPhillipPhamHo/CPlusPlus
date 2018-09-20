//Auther Jimmy Pham Ho
//Date 9/20/2018
#include <iostream>
#include <time.h> // time
// #include <random>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;

int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	srand(time(NULL));
	secretBook = rand() % 57 + 1;

	do
	{
		cout << "Welcome to my chamber of knowledge that is in my garage and here with my lamborghini\nalso with these 3 bookshelf just install with 3000 Books.\n";
		cout << "But you know what is important KNOWLEDGE that why I read a book a Day.\n";
		cout << "Otherwise known as KLRBD which mean (KNOWLEDGE, lamborghini, and read a book a day)" << endl;
		cout << "There is a magic book of KNOWLEDGE, but only one out of my 57 book of knowledge. You get two tries to find it.\n";
		

		while (pickBook != secretBook && count != 2)
		{
			cout << "Enter a number book here: ";
			cin >> pickBook;
			if (pickBook < secretBook)
			{
				cout << "The number was too low\n";
			}
			else if (pickBook > secretBook)
			{
				cout << "The number was to high\n";
			}
			else if (pickBook == secretBook)
			{
				cout << "You have the book of KNOWLEDGE, now you can get your free 3 bookshelf with 3000 Book and one lamborghini in your garage.";
				srand(time(NULL));
				secretBook = rand() % 57 + 1;
			}
			//count = count +
			count++;
		}
		if (count == 2)
		{
			cout << "you die by a lamborghini crashing on top of you.";
		}
		else
		{
			cout << "Hey Nice Book";
		}
		cout << "Would like to play again? 1 for 2 for no >>>";
		cin >> again;
		pickBook = 0;
		count = 0;
	} while (again != 2);
	system("pause");
	return 0;
}