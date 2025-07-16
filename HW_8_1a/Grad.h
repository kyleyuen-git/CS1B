// =====================================================================
// Grad Class Declaration (Derived from Student)
// =====================================================================
// Inherits: ID, Name, Units
// Adds: Degree type
// =====================================================================
#pragma once
#include "Student.h"

class Grad : public Student
{
private:// all variables in private access specifier
    string degree; // Type of degree the grad student is pursuing

public:
    Grad(int id, const string& name, int units, const string& degree); //constructor
    ~Grad(); // destructor
    void displayRecord(); // override to include degree
};
// =====================================================================