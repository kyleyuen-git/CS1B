// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_9b – Car Class Implementation
// ===========================================================
// Description:
// Declares 2 Car objects with model and year members,
// uses a static carCount to track how many Cars have
// been declared, and provides a friend function to
// compare two Car instances by model and year.
// ===========================================================

#include "Car.h"

int main()
{
    // Declare Car objects
    Car myCar; // calls default constructor
    Car yourCar("Toyota", 2007); // calls overloaded constructor

    // Display initial state of myCar
    cout << "My Car" << endl;
    myCar.displayCar();
    cout << endl;

    // Display initial state of yourCar
    cout << "Your Car" << endl;
    yourCar.displayCar();
    cout << endl;

    // Modify myCar via setter, then redisplay
    myCar.setCar("Ford", 2002);
    cout << "My Car" << endl;
    myCar.displayCar();
    cout << endl;

    // Compare myCar vs. yourCar using friend areSame()
    if(areSame(myCar, yourCar))
        cout<< "The two cars are the same model and year."<< endl;
    else
        cout << "The two cars are not the same model and year."<<endl<<endl;

    // Print how many Car instances have been declared
    cout << Car::getCount() << " cars have been declared." << endl;

    return 0;
}
/* ==== OUTPUT ======================================

My Car
Model: 
Year:  0

Your Car
Model: Toyota
Year:  2007

My Car
Model: Ford
Year:  2002

The two cars are not the same model and year.

2 cars have been declared.

// =============================================== */