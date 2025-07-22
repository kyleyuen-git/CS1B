#include "Grad.h"

// ==== Grad::Grad ========================================
// Constructor for Grad object.
// Calls base Student constructor to set ID, name, and units,
// then sets the graduate degree type
// Input:
//   id     – student ID
//   name   – full name
//   units  – number of enrolled units
//   degree – graduate degree type
// ========================================================
// Grad constructor with Student constructor 
Grad::Grad(int id, const string& name, int units, const string& degree):Student(id, name, units), degree(degree){}

// ==== Grad::~Grad =======================================
// Destructor for Grad class.
// ========================================================
Grad::~Grad(){} // Grad destructor


// ==== displayRecord =====================================
// Displays the student's info (ID, name, units)
// and their graduate degree type.
// ========================================================
void Grad::displayRecord()const
{
    Student::displayRecord(); // use Student class's already made displayRecord() with scope 
    cout<<"Degree: "<<degree<<"\n";
}
// =====================================================================