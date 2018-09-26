// SwapStrings.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void	swap(string first, string second)	// pass arguments by value (copied value)
{
	string hold;

	cout << "Swap routine ..." << endl;

	cout << " Initial values:  " << first << "   " << second << endl;

	hold = first;
	first = second;
	second = hold;

	cout << " Swapped values:  " << first << "   " << second << endl; 
}

int		main()
{
	string	alpha, beta;

	alpha = "Jones";
	beta  = "Smith";

	cout << endl;
	cout << "Original values:  " << alpha << "   " << beta << endl << endl;

	swap(alpha, beta);						// call swap() routine to exchange values

	cout << endl << endl;
	cout << "   Final values:  " << alpha << "   " << beta << endl << endl; 

	cout << endl;
	system("pause");
	return 0;
}

