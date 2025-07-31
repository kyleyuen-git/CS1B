// =============================================================================
// Cat.h – Specification File for Cat Class
// =============================================================================
// Description:
// Declares a Cat class with private data members for weight and color,
// and public member functions to set those values, display them,
// and simulate the cat making a sound.
// =============================================================================

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// ==== Cat Class Definition ===================================================
class Cat
{
private:
    // holds the cat's weight in pounds (double)
    double weight;
    // holds the cat's color
    string color;

public:
    void setWeight(double weight); // stores the cat's weight
    void setColor(string color); // stores the cat's color

    // const variables because their values don't change 
    void displayInfo()const; // displays weight and color
    void meow()const; // outputs "MEOW!"
};
// =============================================================================