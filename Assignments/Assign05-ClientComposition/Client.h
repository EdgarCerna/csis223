#pragma once
#include "Name.h"
#include "Addr.h"
#include <string>

using namespace std;

static int clientNumber = 1000;

class Client
{
public:
	Client();
	Client(string l, string f, string m, string a, string c, string s, string z);

	void displayClient()	const;
private:
	int clientID;
	Name clientName;
	Addr clientAddr;
};

