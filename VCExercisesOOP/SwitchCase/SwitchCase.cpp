// SwitchCase.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int		satisfaction;
	string	satisfactionLabel;
	
	char	direction;
	string	directionLabel;
	
	char	color;
	string	colorLabel;

	cout << endl << "Enter a satisfaction level [0-10]:  ";
	cin  >> satisfaction;

	switch(satisfaction)
	{
	case 10:
	case  9:
		satisfactionLabel = "very satisfied";
		break;
	case 8:
	case 7:
		satisfactionLabel = "satisfied";
		break;
	case 6:
	case 5:
	case 4:
		satisfactionLabel = "neutral";
		break;
	case 3:
	case 2:
		satisfactionLabel = "dissatisfied";
		break;
	case 1:
	case 0:
		satisfactionLabel = "very dissatisfied";
		break;
	default:
		satisfactionLabel = "out of range";
	}
	
	cout << endl << satisfactionLabel << endl << endl;

	cout << endl << "Enter a direction [ N E S W ]:  ";
	cin  >> direction;

	switch(direction)
	{
	case 'N':
	case 'n':
		directionLabel = "North";
		break;
	case 'E':
	case 'e':
		directionLabel = "East";
		break;
	case 'S':
	case 's':
		directionLabel = "South";
		break;
	case 'W':
	case 'w':
		directionLabel = "West";
		break;
	default:
		directionLabel = "invalid";
	}

	cout << endl << directionLabel << endl << endl;

	cout << endl << "Enter a color code:  ";
	cin  >> color;
		
	switch(color)
	{
	case 'R':
		colorLabel = "red";
		break;
	case 'G':
		colorLabel = "green";
		break;
	case 'B':
	case 'L':
	case 'U':
		colorLabel = "blue";
		break;
	case 'N':
		colorLabel = "brown";
		break;
	case 'K':
		colorLabel = "black";
		break;
	case 'Y':
		colorLabel = "yellow";
		break;
	case 'W':
		colorLabel = "white";
		break;
	default:
		colorLabel = "unknown";
	}

	cout << endl << colorLabel << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}

