#include "Grad.h"

// Grad constructor with Student constructor 
Grad::Grad(int id, const string& name, int units, const string& degree):Student(id, name, units), degree(degree){}

Grad::~Grad(){} // Grad destructor

void Grad::displayRecord()
{
    Student::displayRecord(); // use Student class's already made displayRecord() with scope 
    cout<<"Degree: "<<degree<<"\n";
}