// FileInputOptions.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	long	emplID;
	char	status;
	string	lastName;
	string	firstName;

	string	fileName = "EmplFile.txt";

	ifstream	emplFile;

	emplFile.open(fileName);
	if (!emplFile)
	{
		cout << "Error opening input file." << endl;
		system("pause");
		return -1;
	}

	cout << endl << "Priming read of entire record ..." << endl << endl;

	emplFile >> emplID >> status >> lastName >> firstName;				// priming read - read first record

	while (!emplFile.eof())
	{
		cout << emplID << "  " << status << "  " << lastName << ", " << firstName << endl;

		emplFile >> emplID >> status >> lastName >> firstName;			// read next record
	}

	emplFile.close();

	cout << endl << "End of priming read of entire record." << endl;;
	system("pause");

	//

	cout << endl << "Priming read of first field in record ..." << endl << endl;

	emplFile.open(fileName);

	emplFile >> emplID;				// priming read - read first field of first record

	while (!emplFile.eof())
	{
		emplFile >> status >> lastName >> firstName;		// read rest of fields in record

		cout << emplID << "  " << status << "  " << lastName << ", " << firstName << endl;

		emplFile >> emplID;			// read first field of next record
	}

	emplFile.close();

	cout << endl << "End of priming read of first field in record." << endl;
	system("pause");

	//

	cout << endl << "Read of fields in record at top of loop ..." << endl << endl;

	emplFile.open(fileName);

	while (!emplFile.eof())
	{
		emplFile >> emplID >> status >> lastName >> firstName;		// read each record and process

		cout << emplID << "  " << status << "  " << lastName << ", " << firstName << endl;
	}

	emplFile.close();

	cout << endl << "End of read of fields in record at top of loop ...";

	cout << endl;
	system("pause");
	return 0;
}
