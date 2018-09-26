// Exception04.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double	dividend;
	double	divisor;
	double	quotient;

	cout << fixed << endl;
	cout << endl << " Enter dividend:  ";
	cin  >> dividend;
	cout << endl << " Enter  divisor:  ";
	cin  >> divisor;
	cout << endl << endl;

	try
	{
		if (divisor == 0)
			throw 0;

		quotient = dividend / divisor;
		cout << "   The quotient:  " << quotient; 
	}
	catch (int)
	{
		cout << " Cannot divide by zero.  Result is undefined.";
	}

	cout << endl << endl << endl;
	system("pause");
	return 0;
}
