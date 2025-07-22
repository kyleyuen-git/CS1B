// =====================================================================
// UnderGrad Class Declaration (Derived from Student)
// =====================================================================
// Inherits: ID, Name, Units
// Adds: Class level
// =====================================================================
#pragma once
#include "Student.h"

class UnderGrad : public Student // public inheritance from Student base
{
private: // all variables in private access specifier
    string level; // Freshman, Sophomore, Junior, Senior

public:
    UnderGrad(int id, const string& name, int units, const string& level); // constructor
    ~UnderGrad(); // destructor
    void displayRecord()const override; // override to include level
};
// =====================================================================