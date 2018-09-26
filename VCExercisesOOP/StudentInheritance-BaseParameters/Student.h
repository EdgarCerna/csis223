#pragma once
#include "Individual.h"
#include <string>

using namespace std;

class Student : public Individual
{
public:
	Student();
	Student(string studentName, int studentYOB, double studentGPA, string studentCollege);

	void	display()		const;
private:
	double	gpa;
	string	college;
};

