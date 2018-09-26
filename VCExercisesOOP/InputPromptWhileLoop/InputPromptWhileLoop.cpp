// InputPromptWhileLoop.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char	inputVal;

	cout << endl << "Enter gender code [M, F, or Q to quit]:  ";
	cin >> inputVal;

	while (inputVal != 'M' && inputVal != 'm' && inputVal != 'F' && inputVal != 'f' && inputVal != 'Q' && inputVal != 'q')
	{
		cout << endl << "Invalid entry  " << inputVal << endl;
		cout << endl << "Enter gender code [M, F, or Q to quit]:  ";
		cin >> inputVal;
	}

	if (inputVal == 'm')
		inputVal = 'M';						// set lowercase value to M
	else if (inputVal == 'f')
		inputVal = 'F';						// set lowercase value to F
	else if (inputVal == 'q')
		inputVal = 'Q';						// set lowercase value to Q

	cout << endl << endl << "The input value is  " << inputVal << endl;

	cout << endl;
	system("pause");
	return 0;
}

