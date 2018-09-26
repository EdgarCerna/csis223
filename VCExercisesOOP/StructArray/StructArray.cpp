// StructArray.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct emplType
{
	int		deptID;
	string	lastName;
	string	firstName;
	double	amt;
};

void	emplDisplayRecord(emplType emplData);				// receive one single struct (record) and display
void	emplDisplayArray(emplType emplInfo[], int emplNum);	// receive entire array  (with count) and display

int main()
{
	emplType	emplRec[25];		// array of emplRec records
	int			emplCnt = 0;
	int			pos;

	ifstream	emplFile;

	emplFile.open("FileProcess.txt");

	if (!emplFile)
	{
		cout << endl << "Input file not found." << endl << endl;
		system("pause");
		return -1;
	}

	cout << endl << endl;

	emplFile >> emplRec[emplCnt].deptID;

	while (!emplFile.eof())
	{
		emplFile >> emplRec[emplCnt].lastName 
				 >> emplRec[emplCnt].firstName 
				 >> emplRec[emplCnt].amt;
		
		emplDisplayRecord(emplRec[emplCnt]);				// pass single struct (record) from array to function

		emplCnt++;

		emplFile >> emplRec[emplCnt].deptID;
	}

	emplFile.close();

	cout << endl << ' ' << emplCnt << " records loaded into array." << endl;

	emplDisplayArray(emplRec, emplCnt);						// pass array name and array count to function

	cout << endl << endl;
	system("pause");
	return 0;
}

void	emplDisplayRecord(emplType emplData)				// receive one single struct (record) and display
{
	cout << emplData.deptID   << "  " << setw(8) << emplData.amt << "    "
		 << emplData.lastName << ", " << emplData.firstName << endl;
}

void	emplDisplayArray(emplType emplInfo[], int emplNum)	// receive entire array  (with count) and display
{
	cout << fixed << setprecision(2) << endl;

	for (int i = 0; i < emplNum; i++)
	{
		cout << emplInfo[i].deptID   << "  " << setw(8) << emplInfo[i].amt << "    "
			 << emplInfo[i].lastName << ", " << emplInfo[i].firstName << endl;
	}
}