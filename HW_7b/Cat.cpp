// =============================================================================
// Cat.cpp – Implementation File for Cat Class
// =============================================================================
// Implements the member functions of the Cat class.
// =============================================================================
#include "Cat.h"

// ==== setWeight =============================================================
// Assigns the given weight value to the cat object.
// Input: weight – the cat's weight
// =============================================================================
void Cat::setWeight(double weight)
{
    this->weight = weight; // assign input to private member
}

// ==== setColor ==============================================================
// Assigns the given color value to the cat object.
// Input: color – the cat's color 
// ============================================================================
void Cat::setColor(string color)
{
    this->color = color; // assign input to private member
}

// ==== displayInfo ===========================================================
// Outputs the cat's weight and color in a formatted sentence.
// =============================================================================
void Cat::displayInfo()const
{
    cout<<" weights "<<weight <<" pounds and is "<<color<<".\n";
}

// ==== meow ==================================================================
// Outputs the word "MEOW!"
// =============================================================================
void Cat::meow()const
{
    cout<<"MEOW!\n";
}
// ============================================================================