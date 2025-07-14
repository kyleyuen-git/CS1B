#pragma once
#include "PersonType.h"

class EmployeeType : public PersonType
{
private:
    int personID;
public: 
    virtual void print()const = 0;

    virtual double calcPay()const = 0;

    void setId(int id);

    int getId()const;

    EmployeeType(string first = " ", string last = " ");
    
};