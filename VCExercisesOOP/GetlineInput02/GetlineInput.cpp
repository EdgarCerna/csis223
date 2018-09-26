// GetlineInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream	inputFile;
	string		inputRecord;

	string		stateCode;
	string		stateName;

	inputFile.open("States.txt");
	
	if (!inputFile)
	{
		cout << endl;
		system("pause");
		return -1;
	}
		
	getline(inputFile, inputRecord);						// input entire first record (up to newline)
	
	while (!inputFile.eof())
	{
		stateCode = inputRecord.substr(0,2);				// extract 2-character state code from input line
		stateName = inputRecord.substr(4,100);				// extract full state name from input line
		
		cout << ' ' << stateCode << "     " << stateName << endl;

		getline(inputFile, inputRecord);					// input entire next  record (up to newline)
	}

	inputFile.close();

	cout << endl;
	system("pause");
	return 0;
}
