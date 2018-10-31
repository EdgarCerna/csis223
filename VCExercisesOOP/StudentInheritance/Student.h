#pragma once
#include "Individual.h"

class Student : public Individual
{
public:
	Student();
	Student(string studentName, int studentYOB, double studentGPA, string studentCollege);

	void display()		const;
private:
	double gpa;
	string college;
};

