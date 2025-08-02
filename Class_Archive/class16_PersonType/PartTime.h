#pragma once
#include "EmployeeType.h"

class PartTime:public EmployeeType
{
private:
    double emRate;
    double emHours;

public:
    PartTime(string first = " ", string last = " ", int id = 0, double rate = 0.0, double hours = 0.0);

    void set(string first, string last, int id, double rate, double hours);

    double calcPay()const;

    void setPayRate(double rate);

    double getPayRate();

    void setHours(double hours);

    double getHours();

    void print()const;

    
};