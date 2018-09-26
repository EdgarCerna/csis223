// RecursiveFibonacci.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int	  recursiveFibNumber(int x, int y, int n);

int main()
{
	int	  firstFibNum;
	int	  secondFibNum;
	int	  nthNum;

	cout << endl;
	cout << "    First Fibonacci number:  ";
	cin  >> firstFibNum;
	cout << endl;
	cout << "   Second Fibonacci number:  ";
	cin  >> secondFibNum;
	cout << endl;
	cout << "Fibonacci number  position:  ";
	cin  >> nthNum;

	cout << endl;
	cout << "Fibonacci number at position " << nthNum << " is "
		 << recursiveFibNumber(firstFibNum, secondFibNum, nthNum) << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

int	  recursiveFibNumber(int x, int y, int n)
{
	if (n == 1)
	{
		return x;
	}
	else if (n == 2)
	{
		return y;
	}
	else
		return recursiveFibNumber(x, y, n - 1) + recursiveFibNumber(x, y, n - 2);

}


