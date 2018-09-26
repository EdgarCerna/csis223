// FileProcess.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int		deptNumber;
	string	lastName;
	string	firstName;
	double	amount;

	char	dollarSign = '$';

	int		recordCnt   = 0;				// initialize record count
	double	totalAmount = 0.00;				// initialize running total

	ifstream	inputFile;					// define input file stream object

	inputFile.open("FileProcess.txt");		// open input file object
	if (!inputFile)
	{
		cout << endl << "Error opening input file." << endl << endl;
		system("pause");
		return -1;
	}

	cout << fixed << setprecision(2);		// set output stream properties for floating point values
	cout << endl << "Dept        Amount    Name" << endl;
	cout         << "----        ------    ------------------" << endl;

	inputFile >> deptNumber;				// read first field of FIRST record

	while (!inputFile.eof())
	{
		inputFile >> lastName >> firstName >> amount;	// read rest of record fields
		recordCnt++;						// count each input record read
		totalAmount += amount;				// total running sum of amounts

		cout << setw(4) << deptNumber;
		cout << "    "  << dollarSign << ' '  << setw(8)   << amount;
		cout << "    "  << lastName   << ", " << firstName << endl;

		dollarSign = ' ';					// set dollar sign character to blank space after first line of output

		inputFile >> deptNumber;			// read first field of NEXT record
	}

	inputFile.close();						// close input file object

	cout << endl    << " Total  $ " << setw(8) << totalAmount;
	cout << setw(6) << recordCnt    << " records processed." << endl;

	cout << endl;
	system("pause");
	return 0;
}

