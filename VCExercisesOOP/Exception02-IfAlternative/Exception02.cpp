// Exception02.cpp : Defines the entry point for the console application.
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

	quotient = dividend / divisor;

	if (divisor != 0)
		cout << "   The quotient:  " << quotient; 
	else
		cout << " Cannot divide by zero.  Result is undefined.";
	cout << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}

