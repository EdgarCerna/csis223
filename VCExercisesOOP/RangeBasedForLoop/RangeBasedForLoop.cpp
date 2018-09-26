// RangeBasedForLoop.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int		intArray[] = { 10, 20, 30, 40, 50, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 101, 102, 103, 104, 105 };

	for (auto n : intArray)
	{
		cout << endl << "  " << n;
	}

	cout << endl << endl;
	system("pause");
    return 0;
}

