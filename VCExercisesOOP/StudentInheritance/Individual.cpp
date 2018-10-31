#include "pch.h"
#include "Individual.h"


Individual::Individual()
{
	name = "no name";
	yearOfBirth = 1900;
	cout << "Individual base class:  default constructor activated" << endl;
}
Individual::Individual(string iName, int iYear)
{
	name = iName;
	yearOfBirth = iYear;
}
void	Individual::setName(string iName)
{
	name = iName;
}
void	Individual::setYearOfBirth(int iYear)
{
	yearOfBirth = iYear;
}
string	Individual::getName()			const
{
	return name;
}
int		Individual::getYearOfBirth()	const
{
	return yearOfBirth;
}
void	Individual::display()			const
{
	cout << endl << getName() << "     " << getYearOfBirth() << endl;
}