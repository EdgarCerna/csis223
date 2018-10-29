#pragma once
#include "NameStr.h"
#include "BirthDate.h"

class Person
{
public:
	Person();
	Person(string identifier, string pName, int mm, int dd, int yyyy);

	void displayPerson();
private:
	string id;
	NameStr personName;
	BirthDate personDOB;
};

