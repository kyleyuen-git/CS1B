#include "CruiseShip.h"

// initializer list must pass actual values, not types like Ship(string name, string year)
CruiseShip::CruiseShip(string name, string year, int maxPassengers) : Ship(name, year)
{
    this->maxPassengers = maxPassengers;
}

void CruiseShip::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

int CruiseShip::getMaxPassengers()const
{
    return maxPassengers;
}

void CruiseShip::display()const
{
    cout << "Name: " << getName() << "\n" << "Maximum passengers: " << maxPassengers << "\n";
}