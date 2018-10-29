#include "pch.h"
#include "Person.h"

Person::Person()
{
	id = "xxxxxx";
}
Person::Person(string identifier, string pName, int mm, int dd, int yyyy)
	:	personName(pName),
		personDOB(mm, dd, yyyy)
{
	id = identifier;
}
void Person::displayPerson()
{
	cout << endl << id << "  " << personName.getNameStr() << "  ";
	personDOB.displayBirthDate();
	cout << endl;
}