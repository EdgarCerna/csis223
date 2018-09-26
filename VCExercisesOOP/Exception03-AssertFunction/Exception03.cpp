// Exception03.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
// #define NDEBUG
#include <cassert>

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
	cout << endl;

	assert(divisor != 0);				     // assert(divisor);
	quotient = dividend / divisor;

	cout << endl << "   The quotient:  " << quotient << endl << endl; 
	
	cout << endl;
	system("pause");
	return 0;
}

