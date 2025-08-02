#include "UnderGrad.h"

// ==== UnderGrad::UnderGrad =============================
// Constructor for UnderGrad object.
// Calls base Student constructor to set ID, name, and units,
// then sets the level
// Input:
//   id    – student ID
//   name  – full name
//   units – number of enrolled units
//   level – classification (e.g., Freshman, Sophomore)
// ========================================================
// UnderGrad constructor includes UnderGrad scope and parameters
// then, you need to scope into Student overloaded constructor to set the first three variables
// and then set level to level
UnderGrad::UnderGrad(int id, const string& name, int units, const string& level):Student(id, name, units), level(level){}


// ==== UnderGrad::~UnderGrad ============================
// Destructor for UnderGrad class.
// ========================================================
UnderGrad::~UnderGrad(){} // UnderGrad destructor


// ==== displayRecord =====================================
// Displays the student's info (ID, name, units)
// and their undergraduate classification.
// ========================================================
void UnderGrad::displayRecord()
{
    // reuse base method
    Student::displayRecord(); // use Student class's already made displayRecord() with scope 
    cout<<"Class: "<<level<<"\n"; // add UnderGrad's new level at the end  
}
// ========================================================