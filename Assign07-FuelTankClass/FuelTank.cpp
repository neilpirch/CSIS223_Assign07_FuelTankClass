#include "stdafx.h"
#include "FuelTank.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

FuelTank::FuelTank()					// default constructor (capacity = 0.0, level = 0.0)
{
	capacity = 0.0;
	level = 0.0;
}
						
FuelTank::FuelTank(double cap)			// construct setting fuel capacity (level = 0.0)
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
}

double	FuelTank::addFuel(double amt)			// add to level - return amount added
{
	if (amt > getUnusedCapacity())
	{
		double temp = getUnusedCapacity();
		level += temp;
		return temp;
	}
	else
	{
		level += amt;
		return amt;
	}
	
}

double	FuelTank::useFuel(double amt)			// subtract from level - return amount used
{
	if (amt > level)
	{
		double temp = level;
		level = 0;
		return temp;
	}
	else
	{
		level -= amt;
		return amt;
	}
}

double	FuelTank::fillUp()						// return amount used
{
	double temp;
	temp = (capacity - level);
	level = capacity;
	return temp;
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
	return (capacity - level);
}

void	FuelTank::displayFuelTankInfo()		const	// show capacity, current level, unused capacity
{
	cout << endl << " fuel capacity: " << fixed << setprecision(1) << setw(5) << getCapacity() << "  fuel on hand:" << setw(5) << getLevel()
		<< "  remaining capacity:" << setw(5) << getUnusedCapacity() << "   ";
	if (isEmpty())
	{
		cout << "EMPTY";
	}
	else if (isFull())
		{
			cout << "FULL";
		}
		
		
		cout << endl;
}

bool	FuelTank::isFull()					const	// return true if tank is full, else false
{
	return(level == capacity);
}

bool	FuelTank::isEmpty()					const	// return true if tank is empty, else false	
{
	return(level == 0.0);
}