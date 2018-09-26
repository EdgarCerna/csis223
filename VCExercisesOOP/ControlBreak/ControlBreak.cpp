// ControlBreak.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	int		  emplID;
	string	  lastName;
	string	  firstName;
	string	  ssn;
	int		  deptNum;
	string	  salaryCode;

	ifstream  deptEmpl;					// declare input file stream object

	int		  deptHold = 0;				// hold variable for dept number

	deptEmpl.open("DeptEmpl.txt");		// open input file object

	if (!deptEmpl)
	{
		cout << endl << "Error opening input file."  << endl << endl;
		system("pause");
		return -1;
	}

	deptEmpl >> emplID >> lastName >> firstName >> ssn >> deptNum >> salaryCode;		// input first record

	while (!deptEmpl.eof())					
	{
		if (deptNum != deptHold)		// initiate control-break when dept number changes
		{
			deptHold = deptNum;			// set hold variable to new dept number
			cout << endl << "Dept  " << deptNum;
			cout << endl << "----  ---" << endl;
		}

		cout << emplID   << "  " << deptNum   << "  " << ssn << "  ";
		cout << lastName << ", " << firstName << endl;
		deptEmpl >> emplID >> lastName >> firstName >> ssn >> deptNum >> salaryCode;	// input next record
	}

	deptEmpl.close();					// close input file object

	cout << endl;
	system("pause");
	return 0;
}

