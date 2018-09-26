// SwitchGrade.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

char	finalGrade(int);		// function prototype

int main()
{
	int		score;
	char	grade;

	cout << endl << "Enter score [0 - 100]  ";
	cin  >> score;

	while (cin && (score >= 0 && score <= 100))
	{
		grade = finalGrade(score);

		cout << endl << "       Final grade is  " << grade << endl;
	
		cout << endl << "Enter score [0 - 100]  ";
		cin  >> score;
	}

	cout << endl;
	system("pause");
	return 0;
}

char	finalGrade(int points)
{
	switch (points / 10)
	{
	case 10:
	case  9:
		return 'A';				// break not needed when return used
	case  8:
		return 'B';
	case  7:
		return 'C';
	case  6:
		return 'D';
	case  5:
	case  4:
	case  3:
	case  2:
	case  1:
	case  0:
		return 'F';
	}
}
