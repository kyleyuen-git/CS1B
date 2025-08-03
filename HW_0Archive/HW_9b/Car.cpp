// ===========================================================
// File: Car.cpp
// ===========================================================

#include "Car.h"

// Static member initialization
// carCount keeps track of how many Car instances exist
int Car::carCount = 0;


// Default constructor
// model = ""
// year  =  0
Car::Car() : model(""), year(0)
{
    carCount++; // increment carCount
}

// Overloaded constructor
// initialize model and year from parameters
Car::Car(const string & theModel, int theYear)
    : model(theModel), year(theYear)
{
    carCount++; // increment carCount
}

// Destructor
Car::~Car(){}

// Mutator: update the car's model and year
void Car::setCar(const string & theModel, int theYear)
{
    model = theModel;
    year = theYear;
}

// Static Accessor: return the total number of Car objects
int Car::getCount() { return carCount; }

// Print the car's model and year to console
void Car::displayCar() const
{
    cout << "Model: " << model << endl;
    cout << "Year:  " << year  << endl;
}

// areSame() is a friend function not part of the class
// so you don't need to scope into Car::
bool areSame(const Car & c1, const Car & c2)
{
    return (c1.model == c2.model) && (c1.year == c2.year);
}
// ===========================================================