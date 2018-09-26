// HighLowMachineGuess.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	const	int UPPER_BOUND = 1000;
	int		guess;			// store machine guess
	int		lowerLimit;		// upper bound of current range
	int		upperLimit;		// upper bound of current range
	int		tries;			// store number of tries
	char	hint;
	char	answ = 'Y';

	while (static_cast<char>(toupper(answ)) != 'N')
	{
		lowerLimit = 1;
		upperLimit = UPPER_BOUND;
		tries =  0;
		hint  = 'X';

		cout << endl << "Select a number from 1 to " << UPPER_BOUND << " ... " << endl << endl;
		system("pause");
		cout << endl;

		while (hint != 'M' && hint != 'Q')
		{
			guess = lowerLimit + (upperLimit - lowerLimit) / 2;

			cout << endl << "The computer guesses " << guess << endl;

			cout << endl << "Guess is too High, too Low, or exact Match - H L or M:  ";
			cin  >> hint;
			cout << endl;
			hint = static_cast<char>(toupper(hint));

			tries++;

			if  (hint == 'H')
			{
				cout << "Guess is too High" << endl;
				upperLimit = guess - 1;
			}
			else if (hint == 'L')
			{
				cout << "Guess is too Low" << endl;
				lowerLimit = guess + 1;
			}
			else if (hint == 'M')
			{
				cout << endl << "Number is " << guess << ".  Guessed in " << tries << " tries." << endl;
			}
			else if (hint == 'Q')
			{
				tries--;			// nothing else needs to be done in this case
			}
			else
			{
				cout << "incorrect entry - H L or M only" << endl;
				tries--;
			}
		}

		cout << endl << endl << "Play again? - Y or N  ";
		cin  >> answ;
		cout << endl;
	}

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}