// main.cpp
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main() {
    // array of base‐class pointers
    Ship* fleet[3];

    fleet[0] = new Ship("Lolipop", "1960");
    fleet[1] = new CruiseShip("Disney Magic", "1995", 2400);
    fleet[2] = new CargoShip("Black Pearl", "1700", 50000);

    for (int i = 0; i < 3; ++i) {
        fleet[i]->display(); 
        cout << "----------------------------\n";
    }

    // clean up
    for (int i = 0; i < 3; ++i)
        delete fleet[i];

    return 0;
}