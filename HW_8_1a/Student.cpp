#include "Student.h"

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

Student::Student(int id, const string& name, int units): id(id), name(name), units(units){}

Student::~Student(){}

void Student::setID(int id)
{
    this->id = id;
}

// const pass by reference, NOT const function
// if function was const, assigning it to this->name
// would be ILLEGAL
void Student::setName(const string& name)
{
    this->name = name;
}

void Student::setUnits(int units)
{
    this->units = units;
}

void Student::displayRecord()const
{
    cout << "ID:\t"    << id    << "\n"
         << "Name:\t"  << name  << "\n"
         << "Units:\t" << units << "\n";
}