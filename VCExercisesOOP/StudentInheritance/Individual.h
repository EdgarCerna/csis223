#pragma once
#include <string>
#include <iostream>

using namespace std;

class Individual
{
public:
	Individual();
	Individual(string name, int iYear);

	void	setName(string name);
	void	setYearOfBirth(int iYear);
	string	getName()				const;
	int		getYearOfBirth()		const;
	virtual void	display()		const;		//pure virtual function 
private:
	string name;
	int yearOfBirth;
};

