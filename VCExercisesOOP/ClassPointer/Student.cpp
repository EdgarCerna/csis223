#include "stdafx.h"
#include "Student.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int sID, double gp, char gr)
{
	studentName = name;
	studentID = sID;
	gpa = gp;
	grade = gr;
}
string	Student::getName()
{
	return studentName;
}
double	Student::getGPA()
{
	return gpa;
}
int		Student::getStudentID()
{
	return studentID;
}
char	Student::getGrade()
{
	return grade;
}
void	Student::setName(string name)
{
	studentName = name;
}
void	Student::setStudentID(int sID)
{
	studentID = sID;
}
void	Student::setGPA(double gp)
{
	gpa = gp;
}
void	Student::setGrade(char gr)
{
	grade = gr;
}
void	Student::displayStudent()
{
	cout << endl << getName() << "  " << getStudentID() << "  " << getGPA() << "  " << getGrade() << endl;
}

