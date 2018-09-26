// DefaultParameters.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

double		accumValue(double amt, double rate = 0.05, int period = 1);	   // rate as fraction (0.05 = 5%)   period as years

int main()
{
	cout << endl << fixed << setprecision(2);

	cout << "Accumulated value is  $" << setw(9) << accumValue(1000, 0.04, 2) << endl << endl;
	cout << "Accumulated value is  $" << setw(9) << accumValue(1000, 0.06)	  << endl << endl;
	cout << "Accumulated value is  $" << setw(9) << accumValue(1000)		  << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}

double		accumValue(double amt, double rate, int period)			       // rate as fraction (0.05 = 5%)   period as years
{
	for (int i = 0; i < period; i++)
	{							// amt = amt + (amt * rate)		amt += (amt * rate)
		amt *= (1 + rate);		// amt = amt * (1 + rate)		amt *= (1 + rate)
	}

	return amt;
}