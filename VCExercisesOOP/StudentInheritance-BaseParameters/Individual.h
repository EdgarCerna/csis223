#pragma once
#include <string>

using namespace std;

class Individual
{
public:
	Individual();
	Individual(string iName, int iYear);

	void	setName(string iName);
	void	setYearOfBirth(int iYear);

	string	getName()			const;
	int		getYearOfBirth()	const;
	
	void	display()			const;
private:
	string	name;
	int		yearOfBirth;
};

