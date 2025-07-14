#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class NumberArray{
private:
    double* arrayPointer;
    int size;

public:
    NumberArray(int);
    ~NumberArray();
    void setCell(int, double);
    double getCell(int);
    double getAverage();
    double getHighest();
    double getLowest();

};