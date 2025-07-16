
#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int units;

public:
    Student(); // default constructor
    Student(int id, const string& name, int units); // overloaded constructor
    ~Student(); // destructor

    void setID(int id);
    void setName(const string& name);
    void setUnits(int units);

    void displayRecord() const; // print ID, Name, Units
};