// StringCompare.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		intVal;
	string  str1;
	string	str2;
	string	state;
	
	if ("Jones" > "Johnson")
		cout << endl << "True " << endl;
	else
		cout << endl << "False" << endl;

	str1 = "Jones";
	str2 = "Johnson";

	intVal = str1.compare(str2);
	
	cout << endl << intVal << endl;

	switch(str1.compare(str2))
	{
	case -1:
		state = "lower";
		break;
	case 0:
		state = "equal";
		break;
	case 1:
		state = "higher";
		break;
	default:
		state = "invalid";
	}

	cout << endl << state << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

