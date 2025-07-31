// ===========================================================
// File: Student.h
// ===========================================================

// =====================================================================
// Student Class Declaration (Base Class)
// =====================================================================
// Stores basic student information: ID, name, and number of units.
// Includes default and overloaded constructors, destructor, and
// functions to set and display values.
// =====================================================================

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    int id; // student ID number
    string name; // student full name
    int units; // number of units taken

public:
    Student(); // default constructor

    // overloaded constructor with const pass by reference
    Student(int id, const string& name, int units); 
    ~Student(); // destructor

    void setID(int id); // set ID number
    void setName(const string& name); // set full name
    void setUnits(int units); // set number of units

    virtual void displayRecord() const = 0; // print ID, Name, Units
    // pure virtual function
    // forces sub classes to override displayRecord()
    // Student.h is now an abstract class and no objects can be made of it
};
// =====================================================================