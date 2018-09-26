// Exception01.cpp : Defines the entry point for the console application.
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

	quotient = dividend / divisor;

	cout << endl;
	cout << endl << "   The quotient:  " << quotient << endl << endl; 
	
	cout << endl;
	system("pause");
	return 0;
}

