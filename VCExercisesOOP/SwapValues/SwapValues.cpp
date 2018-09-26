// SwapValues.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void	swap(int first, int second)		// pass argument by value (copied values)
{
	int hold;

	cout << "Swap routine ..." << endl;

	cout << " Initial values:  " << setw(8) << first << setw(8) << second << endl;

	hold   = first;
	first  = second;
	second = hold;

	cout << " Swapped values:  " << setw(8) << first << setw(8) << second << endl; 
}

int		main( )
{
	int	alpha, beta;

	alpha = 17;
	beta  = 4096;

	cout << endl;
	cout << "Original values:  " << setw(8) << alpha << setw(8) << beta << endl << endl;

	swap(alpha, beta);					// call swap() routine to exchange values

	cout << endl << endl;
	cout << "   Final values:  " << setw(8) << alpha << setw(8) << beta << endl << endl; 

	cout << endl;
	system("pause");
	return 0;
}

