#pragma once
#include "Ship.h"

class CargoShip : public Ship
{
private:
    int cargoCapacity;
public:
    CargoShip(string name, string year, int cargoCapacity);

    void setCargoCapacity(int cargoCapacity);
    int getCargoCapacity() const;
    void display() const override;  // override base
};