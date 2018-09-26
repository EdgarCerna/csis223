#include "stdafx.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	gpa = 0.0;
	college = "no college";
//	cout << endl << "Student DERIVED class:  default constructor activated" << endl;
}

Student::Student(string studentName, int studentYOB, double studentGPA, string studentCollege)
	   : Individual(studentName, studentYOB)
{
	gpa = studentGPA;
	college = studentCollege;
//	cout << endl << "Student DERIVED class:  parameterized constructor activated" << endl;
}

void	Student::display()		const
{
	cout << endl  << getName() << "   " << getYearOfBirth() 
		 << "   " << gpa  << "   "      << college << endl;
}