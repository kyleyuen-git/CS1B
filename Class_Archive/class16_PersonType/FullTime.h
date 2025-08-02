#pragma once
#include "EmployeeType.h"

class FullTime:public EmployeeType
{
private:
    double emSalary;
    double emBonus;

public: 
    void set(string first, string last, int id, double salary, double bonus);

    void setSalary(double salary);

    double getSalary();
    
    void setBonus(double bonus);

    double getBonus();

    void print() const;

    double calcPay() const;

    FullTime(string first, string last = " ", int id = 0, double salary = 0.0, double bonus = 0.0);

    ~FullTime(){}; // deallocation on the stack (non-dynamic deallocation)
                   // to deallocate memory on the heap, you need to delete ptr and set ptr to null

    virtual ~FullTime() = default;
};