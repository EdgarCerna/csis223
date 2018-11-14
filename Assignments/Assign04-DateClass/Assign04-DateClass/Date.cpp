#include "stdafx.h"
#include "Date.h"

Date::Date()
{
	setDefaultDate();
}
Date::Date(int mm, int dd, int yyyy)		// constructor with month day year parameters - check for validity
{
	setDate(mm, dd, yyyy);
}

void	Date::setDate(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;

	if (!validDate())
		setDefaultDate();
}
void	Date::setDefaultDate()				// set month day year values to default date ( 1/01/1970)
{
	month = 1;
	day = 1;
	year = 1970;
}

int		Date::getMonth()	const			// return current month value
{
	return month;
}
int		Date::getDay()		const			// return current day   value
{
	return day;
}
int		Date::getYear()		const			// return current 4-digit year value
{
	return year;
}

void	Date::displayDate()					// display current date  value in mm/dd/yyyy format
{
	if (!validDate())
	{
		setDefaultDate();
	}
	if (day < 10)
		cout << endl << month << "/0" << day << '/' << year;
	else
		cout << endl << month << '/' << day << '/' << year;
}

bool	Date::validMonth()	const
{
	if (month >= 1 && month <= 12)
		return true;
	else
		return false;
}
bool	Date::validDay()	const
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day >= 1 && day <= 30)
			return true;
		else
			return false;
	}
	else if (month == 2)
	{
		if (year % 4 != 0)
		{
			if (day >= 1 && day <= 28)
				return true;
			else
				return false;
		}
		else
		{
			if (day >= 1 && day <= 29)
				return true;
			else
				return false;
		}
	}
	else
	{
		if (day >= 1 && day <= 31)
			return true;
		else
			return false;
	}
}
bool	Date::validYear()
{
	if (year >= 0)
	{
		if (year < 100)
		{
			if (year >= 0 && year <= 30)
			{
				year += 2000;
			}
			else if (year >= 31 && year <= 99)
			{
				year += 1900;
			}
		}
		return true;
	}
	else
		return false;
}
bool	Date::validDate()
{
	if (validMonth() == true && validDay() == true && validYear() == true)
		return true;
	else
		return false;
}