// ClassPointer.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student		studentX("James Holt", 3254489, 2.4, 'C');
	Student	   *studentPtr;		// pointer to Student class object
	Student	   *stuPtr[5];		// array of pointers to Student class object

	studentPtr = &studentX;
	(*studentPtr).displayStudent();

	(*studentPtr).setGPA(3.1);
	studentPtr->setGrade('B');
	studentPtr->displayStudent();

	studentPtr = new Student("Jeff Simms", 4765190, 2.5, 'C');
	studentPtr->displayStudent();

	cout << endl << endl;

	stuPtr[0] = new Student("John Smith", 9654489, 3.5, 'A');
	stuPtr[1] = new Student("Daryl Mays", 3197671, 2.2, 'C');
	stuPtr[2] = new Student("Martha Bly", 7002134, 2.9, 'B');
	stuPtr[3] = new Student("Martin Roe", 6645014, 3.4, 'A');
	stuPtr[4] = new Student("Harry Bolt", 2175439, 3.8, 'A');

	for (int i = 0; i < 5; i++)
	{
		stuPtr[i]->displayStudent();
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

