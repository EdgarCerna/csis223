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


	inputFile >> deptNumber >> lastName >> firstName >> amount;			// read first record

	while (!inputFile.eof())
	{
		recordCnt++;						// count each input record read
		totalAmount += amount;				// total running sum of amounts



		inputFile >> deptNumber >> lastName >> firstName >> amount;		// read next record
	}

	inputFile.close();						// close input file object

	cout << endl;
	system("pause");
	return 0;
}

