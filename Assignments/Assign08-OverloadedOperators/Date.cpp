#include "pch.h"
#include "Date.h"

istream&	operator>>(istream& newIstream, Date& newDate)			// overloaded extraction operator - friend to Date class
{
	return newIstream >> newDate.month, newIstream >> newDate.day, newIstream >> newDate.year;
}
ostream&	operator<<(ostream& newOstream, const Date& newDate)		// overloaded insertion  operator - friend to Date class
{
	if (newDate.day < 10 && newDate.month < 10)
		cout << '0' << newDate.month << "/0" << newDate.day << '/' << newDate.year;
	else if (newDate.day < 10)
		cout << newDate.month << "/0" << newDate.day << '/' << newDate.year;
	 else if (newDate.day < 10)
		return newOstream << newDate.month << "/0" << newDate.day << '/' << newDate.year;
	else
		return newOstream << newDate.month << '/' << newDate.day << '/' << newDate.year;
}

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
Date::Date(int m, int d, int y)					// constructor with month day year parameters
{
	month = m;
	day = d;
	year = y;
}
void	Date::setDate(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;
}
void	Date::displayDate()	const
{
	if (day < 10 && month < 10)
		cout << '0' << month << "/0" << day << '/' << year;
	else if (day < 10)
		cout << month << "/0" << day << '/' << year;
	else if (month < 10)
		cout << '0' << month << "/" << day << '/' << year;
	else
		cout << month << '/' << day << '/' << year;
}

bool	Date::operator==(const Date& otherDate) const		// overloaded equals operator       ==
{
	bool result = false;

	if (year == otherDate.year)
		if (month == otherDate.month)
			if (day == otherDate.day)
				result = true;

	return result;
}
bool	Date::operator!=(const Date& otherDate) const		// overloaded not equal operator    !=
{
	bool result = false;

	if (year != otherDate.year || month != otherDate.month || day != otherDate.day)
		result = true;

	return result;
}
bool	Date::operator<(const  Date& otherDate) const		// overloaded less than operator    <
{
	bool result = false;

	if (year < otherDate.year)
		result = true;
	else if (year == otherDate.year)
		if (month < otherDate.month)
			result = true;
		else if (month == otherDate.month)
			if (day < otherDate.day)
				result = true;

	return result;
}
bool	Date::operator>(const  Date& otherDate) const		// overloaded greater than operator >
{
	bool result = false;

	if (year > otherDate.year)
		result = true;
	else if (year == otherDate.year)
		if (month > otherDate.month)
			result = true;
		else if (month == otherDate.month)
			if (day > otherDate.day)
				result = true;

	return result;
}
bool	Date::operator<=(const Date& otherDate) const		// overloaded less than or equal operator    <=
{
	bool result = false;

	if (year < otherDate.year) 
	{
		result = true;
	}
	else if (year == otherDate.year)
	{
		if (month < otherDate.month)
		{
			result = true;
		}
		else if (month == otherDate.month)
		{
			if (day <= otherDate.day)
				result = true;
		}
	}
	
	return result;
}
bool	Date::operator>=(const Date& otherDate) const		// overloaded greater than or equal operator =>
{
	bool result = false;

	if (year > otherDate.year)
	{
		result = true;
	}
	else if (year == otherDate.year)
	{
		if (month > otherDate.month)
		{
			result = true;
		}
		else if (month == otherDate.month)
		{
			if (day >= otherDate.day)
				result = true;
		}
	}

	return result;
}

void	Date::setDefaultDate()					// set default date - 1/01/1970
{
	month = 1;
	day = 01;
	year = 1970;
}