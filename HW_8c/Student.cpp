// ===========================================================
// File: Student.cpp
// ===========================================================

#include "Student.h"

// ==== Student::Student =================================
// Default constructor
// Initializes ID to 0, name to a single space, and units to 0.
// ========================================================
Student::Student():id(0),name(" "), units(0){}
// very confusing syntax but essentially the same as:
/*
Student::Student() 
{
    id    = 0;
    name  = "";
    units = 0;
}
*/

// ==== Student::Student =================================
// Overloaded constructor
// Initializes all data members using provided values.
// Input:
//   id, name, units
// ========================================================
Student::Student(int id, const string& name, int units): id(id), name(name), units(units){}

// ==== Student::~Student ================================
// Destructor
// No dynamic memory used. Automatically called on destruction.
// ========================================================
Student::~Student(){}


// ==== setID ============================================
// Sets the student’s ID number.
// Input: id – integer value representing student ID
// ========================================================
void Student::setID(int id)
{
    this->id = id;
}


// ==== setName ==========================================
// Sets the student’s full name.
// Input: name – string representing student name
// ========================================================
// const pass by reference, NOT const function
// if function was const, assigning it to this->name
// would be ILLEGAL
void Student::setName(const string& name)
{
    this->name = name;
}

// ==== setUnits =========================================
// Sets the number of units the student is enrolled in.
// Input: units – integer number of units
// ========================================================
void Student::setUnits(int units)
{
    this->units = units; // using this-> op b/c same name
}


// ==== displayRecord =====================================
// Displays the student's ID, name, and units in a labeled format.
// ========================================================
void Student::displayRecord()const
{
    cout << "ID:\t"    << id    << "\n"
         << "Name:\t"  << name  << "\n"
         << "Units:\t" << units << "\n";
}
// =====================================================================