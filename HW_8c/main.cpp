// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_8c – Inheritance with Virtual Functions
// =============================================================================
// Description:
// This program demonstrates inheritance and polymorphism using a base class
// Student and two derived classes: UnderGrad and Grad. Each subclass provides
// its own version of the virtual displayRecord() function defined in Student.
// =============================================================================

// Does not need to include "Student.h" because 
// "UnderGrad.h" and "Grad.h" inherit from it
#include "UnderGrad.h"
#include "Grad.h"

int main()
{
    // Create an UnderGrad object using the overloaded constructor
    // Parameters: ID = 100, Name = "Tom Lee", Units = 9, Class = "Freshman"
    UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");

    // Create a Grad object using the overloaded constructor
    // Parameters: ID = 101, Name = "Jim Jones", Units = 12, Degree = "PHD"
    Grad grad(101, "Jim Jones", 12, "PHD");

    // Display UnderGrad student record using overridden displayRecord()
    cout<<"\nUnderGrad student records: \n";
    underGrad.displayRecord();

    // Display Grad student record using overridden displayRecord()
    cout<<"\nGrad student records: \n";
    grad.displayRecord();

    // Change Grad student's number of units from 12 to 15
    grad.setUnits(15);

    // Display Grad student record again to confirm updated units
    cout<<"\nAfter changing Grad units from 12 to 15."<<endl;
    grad.displayRecord();

    return 0;
}
// =====================================================================

/* ================================ Output ===================================


UnderGrad student records: 
ID:     100
Name:   Tom Lee
Units:  9
Class: Freshman

Grad student records: 
ID:     101
Name:   Jim Jones
Units:  12
Degree: PHD

After changing Grad units from 12 to 15.
ID:     101
Name:   Jim Jones
Units:  15
Degree: PHD

============================================================================= */