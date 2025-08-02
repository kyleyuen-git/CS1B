// ===========================================================
// File: CargoShip.h - Defines the CargoShip class, which is
// a subclass of Ship that adds a cargo capacity attribute.
// ===========================================================

#pragma once
#include "Ship.h"

class CargoShip : public Ship
{
private:
    // cargo capacity in tons
    int cargoCapacity;
public:
    // Constructor Initializes name, year, and cargo capacity
    CargoShip(string name, string year, int cargoCapacity);

    // Sets the ship's cargo capacity
    void setCargoCapacity(int cargoCapacity);

    // Gets the ship's cargo capacity
    int getCargoCapacity() const;

    // Prints ship's name and cargo capacity
    void display() const override;  // override base
};
// ===========================================================