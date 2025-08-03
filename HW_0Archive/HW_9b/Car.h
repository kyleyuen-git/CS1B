// ===========================================================
// File: Car.h
// ===========================================================

#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Car
{
private:
    string model; // Car's model name
    int year; // Car's manufacture year
    static int carCount; // Number of Car objects declared

public:
    Car(); // Default constructor
    Car(const string & theModel, int theYear); // Overloaded constructor
    ~Car(); // Destructor

    void setCar(const string & theModel, int theYear);
    static int getCount(); // Return count of declared cars
    void displayCar() const;

    // Friend to compare two Car objects
    friend bool areSame(const Car & c1, const Car & c2);
};
// ===========================================================