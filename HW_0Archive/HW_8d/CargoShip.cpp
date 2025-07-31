// ===========================================================
// File: CargoShip.cpp - Implements the CargoShip class,
// derived from Ship, with a cargo capacity attribute.
// ===========================================================

#include "CargoShip.h"

// ===========================================================
// Constructor: Initializes the name, year, and cargo capacity.
// Input: name, year, cargoCapacity
// ===========================================================
CargoShip::CargoShip(string name, string year, int cargoCapacity) : Ship(name, year)
{
    this->cargoCapacity = cargoCapacity;
}

// ===========================================================
// setCargoCapacity: Sets the ship's cargo capacity.
// Input: cargoCapacity
// ===========================================================
void CargoShip::setCargoCapacity(int cargoCapacity)
{
    this->cargoCapacity = cargoCapacity;
}

// ===========================================================
// getCargoCapacity: Gets the ship's cargo capacity.
// Output: cargoCapacity
// ===========================================================
int CargoShip::getCargoCapacity() const
{
    return cargoCapacity;
}

// ===========================================================
// display: Prints the ship's name and cargo capacity.
// Output: Printed name and cargo capacity
// ===========================================================
void CargoShip::display() const
{
    cout << "Name: " << getName() << "\n" << "Cargo capacity: " << cargoCapacity << " tons\n";
}
// ===========================================================