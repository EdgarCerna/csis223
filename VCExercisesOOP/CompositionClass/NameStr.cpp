#include "pch.h"
#include "NameStr.h"


NameStr::NameStr()
{
	nameString = "no name";
}
NameStr::NameStr(string name)
{
	nameString = name;
}
string NameStr::getNameStr()
{
	return nameString;
}