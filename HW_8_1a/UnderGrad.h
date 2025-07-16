
#pragma once
#include "Student.h"

class UnderGrad : public Student
{
private:
    string level;
public:
    UnderGrad(int id, const string& name, int units, const string& level);
    ~UnderGrad();
    void displayRecord();
};