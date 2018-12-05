#include "stdafx.h"
#include "FuelTank.h"


FuelTank::FuelTank()							// default constructor (capacity = 0.0, level = 0.0)
{
	capacity = 0.0;
	level = 0.0;
}
FuelTank::FuelTank(double cap)					// construct setting fuel capacity (level = 0.0)
{
	capacity = cap;
	level = 0.0;
}
FuelTank::FuelTank(double cap, double lvl)		// construct setting fuel capacity and level 
{
	capacity = cap;
	level = lvl;
}

void	FuelTank::setCapacity(double amt)		// set or change capacity
{
	capacity = amt;
	if (level > capacity)
		level = capacity;
}
double	FuelTank::addFuel(double amt)			// add to level - return amount added
{
	if (amt > capacity)
		amt = capacity;
	level += amt;
	return amt;
}
double	FuelTank::useFuel(double amt)			// subtract from level - return amount used
{
	if (amt > capacity)
		amt = capacity;
	level -= amt;
	return amt;
}
double	FuelTank::fillUp()						// return amount used
{
	double unused;
	unused = capacity - level;
	level += unused;
	return unused;
}

double	FuelTank::getCapacity()				const	// return fuel tank capacity
{
	return capacity;
}
double	FuelTank::getLevel()				const	// return current fuel level in tank
{
	return level;
}
double	FuelTank::getUnusedCapacity()		const	// return available (unused) fuel capacity
{
	return capacity - level;
}

void	FuelTank::displayFuelTankInfo()		const	// show capacity, current level, unused capacity
{
	cout << fixed << setprecision(1);
	cout << " fuel capacity:" << right << setw(6) << getCapacity() << "  fuel on hand:" << setw(6) << getLevel() << "  remaining capacity:" << setw(6) << getUnusedCapacity();
	if (isFull())
		cout << "   FULL";
	else if (isEmpty())
		cout << "   EMPTY";
	cout << endl;
}

bool	FuelTank::isFull()					const	// return true if tank is full, else false
{
	if (level == capacity)
		return true;
	else
		return false;
}
bool	FuelTank::isEmpty()					const	// return true if tank is empty, else false	
{
	if (level == 0)
		return true;
	else
		return false;
}