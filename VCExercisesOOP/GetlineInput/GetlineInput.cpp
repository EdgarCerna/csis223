// GetlineInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream	inputFile;
	string	inputRecord;

	inputFile.open("ClientInfo.txt");
	
	if (!inputFile)
	{
		cout << endl;
		system("pause");
		return -1;
	}
		
	getline(inputFile, inputRecord);				      // input entire first record
	
	while (!inputFile.eof())
	{
		cout << inputRecord << endl;

		getline(inputFile, inputRecord);			      // input entire next  record
	}

	inputFile.close();

	cout << endl;
	system("pause");

/////////////  second part of program  //////////////

   cout << left << endl << endl;
   
   inputFile.open("ClientInfo.txt");
	
	getline(inputFile, inputRecord);				      // input entire first record
	
	while (!inputFile.eof())
	{
		cout << inputRecord.substr(0,4) << " ";
      cout << inputRecord.substr(4,24)  << " ";
      cout << inputRecord.substr(28,20) << " ";
      cout << inputRecord.substr(48,16) << " ";
      cout << inputRecord.substr(64,2)  << " ";
      cout << inputRecord.substr(66,5)  << " " << endl;

		getline(inputFile, inputRecord);			      // input entire next  record
	}

	inputFile.close();

	cout << endl;
    cout << endl << "Press <Enter> to end program...";
	system("pause");

	return 0;
}
