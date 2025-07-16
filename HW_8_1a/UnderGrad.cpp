#include "UnderGrad.h"

// UnderGrad constructor includes UnderGrad scope and parameters
// then, you need to scope into Student overloaded constructor to set the first three variables
// and then set level to level
UnderGrad::UnderGrad(int id, const string& name, int units, const string& level):Student(id, name, units), level(level){}

UnderGrad::~UnderGrad(){} // UnderGrad destructor

void UnderGrad::displayRecord()
{
    Student::displayRecord(); // use Student class's already made displayRecord() with scope 
    cout<<"Class: "<<level<<"\n"; // add UnderGrad's new level at the end  
}