
#pragma once
#include "Student.h"

class Grad : public Student
{
private:
    string degree;
public:
    Grad(int id, const string& name, int units, const string& degree);
    ~Grad();
    void displayRecord();
};