// CruiseShip.h
#pragma once
#include "Ship.h"

class CruiseShip : public Ship {
private:
    int maxPassengers;
public:
    CruiseShip(string name, string year, int maxPassengers);

    void setMaxPassengers(int maxPassengers);
    int getMaxPassengers()const;

    void display()const override;
};