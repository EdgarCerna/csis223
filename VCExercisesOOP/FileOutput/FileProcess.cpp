// FileProcess.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int		deptNumber;
	string	lastName;
	string	firstName;
	double	amount;

	char	dollarSign = '$';

	int		recordCnt = 0;				// initialize record  count
	double	totalAmount = 0;			// initialize running total

	ifstream inputFile;					// define  input file stream object
	ofstream outputFile;				// define output file stream object

	inputFile.open("FileProcess.txt");	// open  input file object
	outputFile.open("FileOutput.txt");	// open output file object
	if (!inputFile || !outputFile)
	{
		cout << endl << "Error opening data file." << endl << endl;
		system("pause");
		return -1;
	}

	cout << fixed << setprecision(2);			// set output stream properties for floating point values
	cout << endl << "Dept        Amount    Name" << endl;
	cout << "----        ------    ------------------" << endl;
	outputFile << fixed << setprecision(2);		// set output file stream properties for floating point values

	inputFile >> deptNumber;				// read first field of first record

	while (!inputFile.eof())
	{
		inputFile >> lastName >> firstName >> amount;	// read rest of fields in record
		recordCnt++;						// count each record read
		totalAmount += amount;				// running sum of amounts

		outputFile  << deptNumber
			<< "  " << setw(8) << amount
			<< "  " << lastName << ", " << firstName << endl;
		
		cout << setw(4) << deptNumber
			 << "    "  << dollarSign << " " << setw(8) << amount
			 << "    "  << lastName << ", " << firstName << endl;

		dollarSign = ' ';					// set dollar sign character blank after first line of output

		inputFile >> deptNumber;			// read first field of next record
	}

	inputFile.close();						// close  input file object
	outputFile.close();						// close output file object

	cout << endl << " Total  $ " << setw(8) << totalAmount;
	cout << setw(6) << recordCnt << " records processed." << endl << endl;

	cout << endl;
	system("pause");
	return 0;
}