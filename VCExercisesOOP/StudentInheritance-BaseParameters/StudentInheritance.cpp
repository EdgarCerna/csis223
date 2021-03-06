// StudentInheritance.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <fstream>

using namespace std;

void	displayInfo(Individual& indvParm);									// function prototypes
void	displayInfoStream(ostream& strmOut, Individual& indvParm);
void	displayInfoParm(Individual& indvParm);

int main()
{
	Individual		indv01;
	Individual		indv02("Melvin Gilbert", 1989);
	Individual		indv03("Helen Robinson", 1987);

	Student			studentA;
	Student			studentB("Graham Herbert Rogers", 1995, 2.9, "Penn Valley CC");
	Student			studentC("Marianne B. Mansfield", 1987, 3.4, "Longview CC");

	Individual*		person[6];

	cout << endl << "=== Individual and Student objects shown using native .display() function ===" << endl;

	indv01.display();
	indv02.display();
	indv03.display();

	studentA.display();
	studentB.display();
	studentC.display();

	studentA.setName("Henry Williamson");
	studentA.setYearOfBirth(1982);
	studentA.display();

	person[0] = &indv01;
	person[1] = &indv02;
	person[2] = &indv03;
	person[3] = &studentA;
	person[4] = &studentB;
	person[5] = &studentC;

	cout << endl << "=== indv and student objects shown using Individual pointers - .display() ===" << endl;

	for (int i = 0; i < 6; i++)
	{
		person[i]->display();
	}

	cout << endl << "=== indv and student dereferenced Individual pointers passed as parameters ===" << endl;

	for (int i = 0; i < 6; i++)
	{
		displayInfo(*person[i]);
	}

	cout << endl << "=== indv and student dereferenced Individual pointers - cout display ===" << endl;

	for (int i = 0; i < 6; i++)
	{
		displayInfoStream(cout, *person[i]);
	}

	cout << endl << "=== indv and sudent dereferenced Individual pointers - ofstream file ===" << endl;

	ofstream		fileOut;
	fileOut.open("OutputFile.txt");

	for (int i = 0; i < 6; i++)
	{
		displayInfoStream(fileOut, *person[i]);
	}
	fileOut.close();

	cout << endl << "--> output written to OutputFile.txt" << endl;

	cout << endl << "=== indv and student objects passed as Individual parameters to .display() ===" << endl;

	displayInfoParm(indv03);									// Individual object passed to function with Individual parameter
	displayInfoParm(studentC);									// Student object passed to function with Individual parameter
																// note changes when display() member function in Individual.h changed to virtual
	cout << endl << endl;
	system("pause");
	return 0;
}

void	displayInfo(Individual& indvParm)
{
	indvParm.display();
}

void	displayInfoStream(ostream& streamOut, Individual& indvParm)
{
	streamOut << endl << indvParm.getName() << "   " << indvParm.getYearOfBirth() << endl;
}

void	displayInfoParm(Individual& indvParm)
{
	indvParm.display();
}
