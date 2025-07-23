#include "CargoShip.h"

CargoShip::CargoShip(string name, string year, int cargoCapacity) : Ship(name, year)
{
    this->cargoCapacity = cargoCapacity;
}

void CargoShip::setCargoCapacity(int cargoCapacity)
{
    this->cargoCapacity = cargoCapacity;
}

int CargoShip::getCargoCapacity() const
{
    return cargoCapacity;
}

void CargoShip::display() const
{
    cout << "Name: " << getName() << "\n" << "Cargo capacity: " << cargoCapacity << " tons\n";
}