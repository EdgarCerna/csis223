// HighLowGuessingGame.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	const	int UPPER_BOUND = 1000;
	int		number;			// random number in range
	int		guess;			// store user guess
	int		tries;			// store number of tries
	char	answ = 'Y';

	srand(int(time(0)));	// seed random number generator

	while (char(toupper(answ)) != 'N')
	{
		number = rand() % UPPER_BOUND + 1;	// select random number

	//	cout << number << endl;

		guess = UPPER_BOUND + 1;
		tries = 0;

		while (guess != number)
		{
			cout << endl << "Guess a number from 1 to " << UPPER_BOUND << "  >>  ";
			cin >> guess;
			cout << endl;

			tries++;

			if (guess > number)
			{
				cout << "Too high. Try again." << endl;
			}
			else if (guess < number)
			{
				cout << "Too low.  Try again." << endl;
			}
			else
			{
				cout << "Correct! " << endl;
				cout << "You guessed the number in " << tries << " tries." << endl;
			}
		}
		cout << endl << "Play again? - Y or N  ";
		cin >> answ;
		cout << endl;
	}

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}