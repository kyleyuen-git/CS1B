// ===========================================================
// File: Ship.h - Base class representing a generic ship.
// ===========================================================
#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Ship
{
private:
    string name; // Name of the ship
    string year; // Year the ship was built
public:
    // Constructor that initializes the name and year of the ship
    Ship(string name, string year);

    // Virtual destructor ensures proper cleanup for derived class objects
    // when deleted through a base class pointer.
    virtual ~Ship(); // VIRTUAL destructor?

    void setName(string name); // mutator
    void setYear(string year); // mutator
    string getName()const; // accessor
    string getYear()const; // accessor

    // virtual function to print ship's name and year
    // Can be overridden by derived classes for specialized output
    virtual void display()const;
};
// ===========================================================