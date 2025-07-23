#include "Ship.h"

Ship::Ship(string name, string year) // default constructor
{
    this->name = name;
    this->year = year;
}

Ship::~Ship() = default;

void Ship::setName(string name)
{
    this->name = name;
}

void Ship::setYear(string year)
{
    this->year = year;
}

string Ship::getName()const
{
    return name;
}

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