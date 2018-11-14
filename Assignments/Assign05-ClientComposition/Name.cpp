#include "stdafx.h"
#include "Name.h"


Name::Name()
{
	first = "no name";
	middle = "";
	last = "";
}
Name::Name(string l, string f, string m)
{
	last = l;
	first = f;
	middle = m;
}


void	Name::setName(string lName, string fName, string mid)
{
	last = lName;
	first = fName;
	middle = mid;
}
void	Name::displayName()	const
{
	cout << first << ' ' << middle << ' ' << last;
}
