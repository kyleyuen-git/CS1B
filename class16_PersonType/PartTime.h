#pragma once
#include "EmployeeType.h"

class PartTime:public EmployeeType
{
private:
    double emRate;
    double emHours;

public:
    void set(string first, string last, int id, double rate, double hours);

    double calcPay()const;

    void setPayRate(double rate);

    double getPayRate();

    void setHours(double hours);

    double getHours();

    void print()const;

};