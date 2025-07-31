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

    void displayRecord() const; // print ID, Name, Units
};
// =====================================================================