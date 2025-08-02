// ===========================================================
// File: CruiseShip.h - Specification of the CruiseShip class
// ===========================================================
#pragma once
#include "Ship.h"

class CruiseShip : public Ship {
private:
    // Maximum number of passengers the ship can carry
    int maxPassengers;
public:
    // Constructor Initializes name, year, and maxPassengers
    CruiseShip(string name, string year, int maxPassengers);

    // Sets the ship's max passenger capacity
    void setMaxPassengers(int maxPassengers);

    // Returns the max passenger capacity
    int getMaxPassengers()const;

    // Overrides base display
    void display()const override;
};
// ===========================================================