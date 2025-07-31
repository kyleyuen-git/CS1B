// ===========================================================
// File: UnderGrad.h
// ===========================================================

// ===========================================================
// UnderGrad Class Declaration (Derived from Student)
// ===========================================================
// Inherits: ID, Name, Units
// Adds: Class level
// ===========================================================
#pragma once
#include "Student.h"

// public inheritance from Student base
class UnderGrad : public Student
{
private: // all variables in private access specifier
    string level; // Freshman, Sophomore, Junior, Senior

public:
    // constructor
    UnderGrad(int id, const string& name, int units, const string& level); 

    ~UnderGrad(); // destructor
    
    void displayRecord()const override; // override to include level
};
// ===========================================================