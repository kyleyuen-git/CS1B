// ===========================================================
// File: CruiseShip.cpp - Implements the CruiseShip class
// which extends Ship to include max passenger capacity.
// ===========================================================

#include "CruiseShip.h"

// ===========================================================
// Constructor: Initializes name, year, and maxPassengers
// using the Ship constructor and member initializer list.
// Input: name, year, maxPassengers
// Output: none
// ===========================================================
// initializer list must pass actual values, not types like Ship(string name, string year)
CruiseShip::CruiseShip(string name, string year, int maxPassengers) : Ship(name, year)
{
    this->maxPassengers = maxPassengers;
}

// ===========================================================
// setMaxPassengers: Sets the max passenger capacity.
// Input: maxPassengers
// Output: none
// ===========================================================
void CruiseShip::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

// ===========================================================
// getMaxPassengers: Returns the max passenger capacity.
// Output: maxPassengers
// ===========================================================
int CruiseShip::getMaxPassengers()const
{
    return maxPassengers;
}

// ===========================================================
// display: Prints name and maximum passengers to console.
// Overrides Ship::display()
// Output: printed name and passenger capacity
// ===========================================================
void CruiseShip::display()const
{
    cout << "Name: " << getName() << "\n" << "Maximum passengers: " << maxPassengers << "\n";
}
// ===========================================================