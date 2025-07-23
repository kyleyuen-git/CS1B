// File: main.cpp

// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_8d – Ship Inheritance
// =============================================================================
// Description:
// This program demonstrates the use of inheritance and polymorphism using a
// base class Ship and two derived classes: CruiseShip and CargoShip. Each class
// overrides a virtual display function.
//
// The program creates an array of base-class pointers that point to dynamically
// allocated Ship, CruiseShip, and CargoShip objects. Then, it uses polymorphism
// to call the correct display function for each object through the base pointer.
// =============================================================================
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main() {
    //  OBJECT SETUP 
    // Create an array of base-class pointers to hold different types of ships

    // array of base‐class pointers
    Ship* fleet[3];

    // Dynamically allocate and assign each derived class object to the array
    fleet[0] = new Ship("Lolipop", "1960");
    fleet[1] = new CruiseShip("Disney Magic", "1995", 2400);
    fleet[2] = new CargoShip("Black Pearl", "1700", 50000);

    //  DISPLAY SHIPS 
    // Loop through each ship in the fleet and call its display() function
    // This uses virtual function behavior to call the correct derived version
    for (int i = 0; i < 3; ++i) {
        fleet[i]->display(); 
        cout << "----------------------------\n";
    }

    // Free dynamically allocated memory to prevent memory leaks
    for (int i = 0; i < 3; ++i)
        delete fleet[i];

    return 0;
}

/* ============================ Output ===============================

Name: Lolipop
Year: 1960
----------------------------
Name: Disney Magic
Maximum passengers: 2400
----------------------------
Name: Black Pearl
Cargo capacity: 50000 tons
----------------------------

====================================================================== */