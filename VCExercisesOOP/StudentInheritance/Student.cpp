#include "pch.h"
#include "Student.h"


Student::Student()
{
	gpa = 0.0;
	college = "no college";
	cout << endl << "Student derived class:  default constructor activated" << endl;
}
Student::Student(string studentName, int studentYOB, double studentGPA, string studentCollege)
		: Individual(studentName, studentYOB)
{
	gpa = studentGPA;
	college = studentCollege;
	cout << endl << "Student derived class:  parameterized constructor activated" << endl;
}

void Student::display()		const
{
	cout << endl << getName() << "     " << getYearOfBirth() << "     " << gpa << "     " << college << endl;
}