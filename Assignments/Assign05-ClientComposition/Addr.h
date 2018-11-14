#pragma once
#include <iostream>
#include <string>

using namespace std;

class Addr
{
public:
	Addr();
	Addr(string a, string c, string s, string z);

	void	setAddr(string a, string c, string s, string z);
	void	displayAddr()	const;
private:
	string streetAddr;
	string city;
	string state;
	string zip;
};

