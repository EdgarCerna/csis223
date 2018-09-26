#pragma once
#include <string>

using namespace std;

class Student
{
public:
	Student(string name, int sID, double gp, char gr);
	string	getName();
	double	getGPA();
	int		getStudentID();
	char	getGrade();
	void	setName(string sName);
	void	setStudentID(int sID);
	void	setGPA(double gp);
	void	setGrade(char gr);
	void	displayStudent();
private:
	string	studentName;
	int		studentID;
	double	gpa;
	char	grade;
};
