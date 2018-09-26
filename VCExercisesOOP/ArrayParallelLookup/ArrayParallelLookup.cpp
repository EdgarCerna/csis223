// ArrayParallelLookup.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string	stateCode[60];	// declare 2-letter state code array
	string	stateName[60];	// declare state name array
	string	codeInput;
	int		cnt = 0;
	int		pos;

	ifstream	stateInput;

	stateInput.open("States.txt");
	if (!stateInput)
	{
		cout << endl << "Error opening States input file." << endl << endl;
		system("pause");
		return -1;
	}

	stateInput >> stateCode[cnt] >> stateName[cnt];						// read first record	
	while (!stateInput.eof())
	{
		cnt++;															// count records
		stateInput >> stateCode[cnt] >> stateName[cnt];					// read next record
	}
	stateInput.close();													// close file after array has been loaded with data
	cout << endl << cnt << "  state records loaded." << endl << endl;	// display count of state lookup records

	cout << endl << endl << "Enter state code [Q to quit]:  ";			// prompt for first state code
	cin >> codeInput; 													// first state code input

	while (codeInput != "Q" && codeInput != "q")
	{
		pos = 0;														// initialize array position to first element in stateCode array
		while (codeInput != stateCode[pos] && pos < cnt)				// continue to next array element while  pos < count
		{
			pos++; 														// increment value to next position in array
		}

		if (codeInput == stateCode[pos])
			cout << endl << "Selected state is " << stateName[pos] << endl;
		else
			cout << endl << "State code  " << codeInput << "  not found in list." << endl;

		cout << endl << endl << "Enter state code [Q to quit]:  "; 		// prompt for next state code
		cin >> codeInput;												// next state code input (or Q to quit)
	}

	cout << endl << endl;
	system("pause");
	return 0;
}