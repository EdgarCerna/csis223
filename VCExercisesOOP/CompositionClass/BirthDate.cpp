#include "pch.h"
#include "BirthDate.h"

BirthDate::BirthDate()
{
	month = 1;
	day = 1;
	year = 1900;
}
BirthDate::BirthDate(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void BirthDate::displayBirthDate()
{
	cout << month << '/' << day << '/' << year;
}
