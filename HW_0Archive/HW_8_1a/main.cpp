// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_8 – Student Inheritance 
// =============================================================================
// Description:
// This program demonstrates object-oriented programming using inheritance.
// A base class called Student is used to store student information like ID,
// name, and units. Two derived classes, UnderGrad and Grad, extend the base 
// class with additional fields: level for UnderGrad and degree for Grad.
// The program tests constructors, methods, and the displayRecord()
// function for each class.
// =============================================================================

#include "Student.h"
#include "UnderGrad.h"
#include "Grad.h"
using namespace std;

// ==== main ===========================================================//
// This program demonstrates a base class (Student) and two derived classes 
// (UnderGrad and Grad). It uses constructors, setters, inheritance,
// and overriding display functions.
// =====================================================================//

int main()
{
    // ==================== part 8_1a ====================

    // Create a Student object using the default constructor
    Student s1; // default: 0, "", 0

    // Create a Student object using the overloaded constructor
    // Values: ID = 100, Name = "Tom P. Lee", Units = 12
    Student s2(100, "Tom P. Lee", 12); // overloaded

    // Display s1's data before using any setters
    cout << "Here is student #1:\n";
    s1.displayRecord();

    // Display s2's data (already initialized)
    cout << "\nHere is student #2:\n";
    s2.displayRecord();

    // Update s1 using setter functions
    s1.setID(100);
    s1.setName("John Lee Hooker");
    s1.setUnits(15);

    // Display s1 after updates
    cout<<"\nHere is student #1 after the set functions:\n";
    s1.displayRecord();

    // ==================== part 8_2a ====================
    // Create an UnderGrad object using derived class constructor
    // Inherits ID, Name, Units from Student, adds level ("Freshman")
    UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");

    // Create a Grad object using derived class constructor
    // Inherits ID, Name, Units, adds degree ("PHD")
    Grad grad(101, "Jim Jones", 12, "PHD");

    // Display UnderGrad record
    cout<<"\nUndergrad record: \n";
    underGrad.displayRecord();

    // Display Grad record
    cout<<"\nGrad record: \n";
    grad.displayRecord();

    // Update number of units in grad object using setter
    grad.setUnits(15);

    // Display updated Grad record (units should now be 15)
    cout<<"\nGrad record after setUnits(15): \n";
    grad.displayRecord();

    return 0;
}
// =====================================================================

/* ================================ Output ===================================

Here is student #1:
ID:     0
Name:
Units:  0

Here is student #2:
ID:     100
Name:   Tom P. Lee
Units:  12

Here is student #1 after the set functions:
ID:     100
Name:   John Lee Hooker
Units:  15

Undergrad record:
ID:     100
Name:   Tom Lee
Units:  9
Class: Freshman

Grad record:
ID:     101
Name:   Jim Jones
Units:  12
Degree: PHD

Grad record after setUnits(15):
ID:     101
Name:   Jim Jones
Units:  15
Degree: PHD

============================================================================= */