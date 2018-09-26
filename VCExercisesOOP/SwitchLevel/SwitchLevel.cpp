// SwitchLevel.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		gradeLevel;
	string	gradeLabel;

	cout << endl << "Enter grade level [0 - 12]  ";
	cin  >> gradeLevel;

	while (cin && (gradeLevel >= 0 && gradeLevel <= 12))
	{
		switch (gradeLevel)
		{
		case  0:
			gradeLabel = "Kindergarten";
			break;
		case  1:
		case  2:
		case  3:
		case  4:
		case  5:
		case  6:
			gradeLabel = "Elementary";
			break;
		case  7:
		case  8:
		case  9:
			gradeLabel = "Middle School";
			break;
		case 10:
		case 11:
		case 12:
			gradeLabel = "High School";
		}

		cout << endl << "                            " << gradeLabel << endl;

		cout << endl << "Enter grade level [0 - 12]  ";
		cin  >> gradeLevel;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

