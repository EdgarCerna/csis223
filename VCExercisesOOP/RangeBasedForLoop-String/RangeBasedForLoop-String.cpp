// RangeBasedForLoop-String.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	string	strLabel = "This is a string literal.";

	for (auto ch : strLabel)
	{
		cout << endl << "  " << ch;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

