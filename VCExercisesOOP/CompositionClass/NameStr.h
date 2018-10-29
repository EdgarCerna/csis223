#pragma once
#include <string>

using namespace std;

class NameStr
{
public:
	NameStr();
	NameStr(string name);
	string getNameStr();
private:
	string nameString;
};

