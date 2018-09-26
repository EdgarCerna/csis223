#include "stdafx.h"
#include "Money.h"
#include <iostream>
#include <iomanip>

using namespace std;

Money::Money()
{
	setDollars(0);
	setCents(0);
}

Money::Money(int d)
{
	setDollars(d);
	setCents(0);
}

Money::Money(int d, int c)
{
	setDollars(d);
	setCents(c);
}

Money::Money(double a)
{
	setAmount(a);
}

void	Money::setDollars(int d)
{
	dollars = d;
}

void	Money::setCents(int c)
{
	cents = c;
}

void	Money::setAmount(double a)
{
	setDollars(static_cast<int>(a));
	setCents(a * 100 - getDollars() * 100);
}

int		Money::getDollars()		const
{
	return dollars;
}

int		Money::getCents()		const
{
	return cents;
}

double	Money::getAmount()		const
{
	return static_cast<double>(getDollars()) + (getCents() / 100.0);
}

void	Money::displayAmount()	const
{
	cout << fixed << setprecision(2);
	cout << "$ " << getAmount() << endl;
}
