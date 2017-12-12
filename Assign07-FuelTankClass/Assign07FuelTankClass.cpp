// Assign05-FuelTank.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "FuelTank.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void displayActualAdded(double actualAdded);
void displayActualUsed(double actualAdded);

int main()
{
	double	actualAmount;

	FuelTank	tank01;
	FuelTank	tank02(25.0);
	FuelTank	tank03(20.0, 12.0);

	tank01.displayFuelTankInfo();
	tank01.setCapacity(30.0);
	tank01.displayFuelTankInfo();
	tank01.addFuel(11.8);
	tank01.useFuel(5.5);
	tank01.displayFuelTankInfo();
	actualAmount = tank01.fillUp();
	displayActualAdded(actualAmount);
	tank01.displayFuelTankInfo();

	cout << endl << "===============" << endl;

	tank02.displayFuelTankInfo();
	actualAmount = tank02.addFuel(500.0);
	displayActualAdded(actualAmount);
	tank02.displayFuelTankInfo();
	actualAmount = tank02.useFuel(200.0);
	displayActualUsed(actualAmount);
	tank02.displayFuelTankInfo();

	cout << endl << "===============" << endl;

	tank03.displayFuelTankInfo();
	tank03.addFuel(6.3);
	tank03.displayFuelTankInfo();
	tank03.useFuel(11.2);
	tank03.displayFuelTankInfo();
	tank03.addFuel(12.8);
	tank03.displayFuelTankInfo();
	tank03.useFuel(19.5);
	tank03.displayFuelTankInfo();
	actualAmount = tank03.fillUp();
	displayActualAdded(actualAmount);
	tank03.displayFuelTankInfo();

	cout << endl << endl;
	system("pause");
	return 0;
}

void displayActualAdded(double actualAdded)
{
	cout << fixed << setprecision(1);
	cout << endl << " amount  added:" << setw(6) << actualAdded << endl;
}

void displayActualUsed(double actualUsed)
{
	cout << fixed << setprecision(1);
	cout << endl << " amount   used:" << setw(6) << actualUsed << endl;
}
