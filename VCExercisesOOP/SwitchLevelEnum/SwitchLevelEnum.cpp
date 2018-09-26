// SwitchLevelEnum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		gradeLevel;
	enum	grade {KINDERGARTEN, ELEMENTARY, MIDDLE, HIGH};
	grade	gradeSet;                           // gradeSet declared with DataType grade
	string	gradeLabel;

	cout << endl << "Enter grade level [0 - 12]  ";
	cin  >> gradeLevel;

	while (cin && (gradeLevel >= 0 && gradeLevel <= 12))
	{
		switch (gradeLevel)
		{
		case  0:
			gradeSet = KINDERGARTEN;
			break;
		case  1:
		case  2:
		case  3:
		case  4:
		case  5:
		case  6:
			gradeSet = ELEMENTARY;
			break;
		case  7:
		case  8:
		case  9:
			gradeSet = MIDDLE;
			break;
		case 10:
		case 11:
		case 12:
			gradeSet = HIGH;
		}

		switch (gradeSet)
		{
		case KINDERGARTEN:
			gradeLabel = "Kindergarten";
			break;
		case ELEMENTARY:
			gradeLabel = "Elementary";
			break;
		case MIDDLE:
			gradeLabel = "Middle School";
			break;
		case HIGH:
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

