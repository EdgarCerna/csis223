#include "stdafx.h"
#include "Client.h"


Client::Client()
{
	clientID = ++clientNumber;
}
Client::Client(string l, string f, string m, string a, string c, string s, string z)
	: clientName(l, f, m),
	  clientAddr(a, c, s, z)
{
	clientID = ++clientNumber;
}

void Client::displayClient()	const
{
	cout << endl << clientID << endl, clientName.displayName(), cout << endl, clientAddr.displayAddr(), cout << endl;
}