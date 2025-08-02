// ===========================================================
// File: Grad.h
// ===========================================================

// ===========================================================
// Grad Class Declaration (Derived from Student)
// ===========================================================
// Inherits: ID, Name, Units
// Adds: Degree type
// ===========================================================
#pragma once
#include "Student.h"

class Grad : public Student
{
private:// all variables in private access specifier
    string degree; // Type of degree the grad student is pursuing

public:
    //constructor
    Grad(int id, const string& name, int units, const string& degree);

    ~Grad(); // destructor
    
    void displayRecord()const override; // override to include degree
};
// ===========================================================