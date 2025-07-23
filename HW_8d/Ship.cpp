// ===========================================================
// File: Ship.cpp - Defines the Ship class methods
// ===========================================================

#include "Ship.h"

// ===========================================================
// Constructor: Initializes the ship's name and year.
// Input: name, year
// Output: none
// ===========================================================
Ship::Ship(string name, string year) 
{
    this->name = name;
    this->year = year;
}

// ===========================================================
// Destructor: Virtual and defaulted (needed for base class).
// ===========================================================
Ship::~Ship() = default;


// ===========================================================
// setName: Sets the name of the ship.
// Input: name
// Output: none
// ===========================================================
void Ship::setName(string name)
{
    this->name = name;
}

// ===========================================================
// setYear: Sets the year the ship was built.
// Input: year
// Output: none
// ===========================================================
void Ship::setYear(string year)
{
    this->year = year;
}

// ===========================================================
// getName: Retrieves the name of the ship.
// Output: name
// ===========================================================
string Ship::getName()const
{
    return name;
}

// ===========================================================
// getYear: Retrieves the year of the ship.
// Output: year
// ===========================================================
string Ship::getYear()const
{
    return year;
}

// virtual function to print ship's name and year
void Ship::display()const
{
    cout << "Name: " << getName() << endl;
    cout << "Year: " << getYear() << endl;
}
// ===========================================================