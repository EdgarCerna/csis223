#include "stdafx.h"
#include "Addr.h"


Addr::Addr()
{
	streetAddr = "no address";
	city = "no city";
	state = "no state";
	zip = "";
}
Addr::Addr(string a, string c, string s, string z)
{
	streetAddr = a;
	city = c;
	state = s;
	zip = z;
}

void	Addr::setAddr(string a, string c, string s, string z)
{
	streetAddr = a;
	city = c;
	state = s;
	zip = z;
}
void	Addr::displayAddr()	const
{
	cout << streetAddr << endl
		<< city << ", " << state << "  " << zip;
}