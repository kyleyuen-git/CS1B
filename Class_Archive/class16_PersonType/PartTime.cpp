#include "PartTime.h"

PartTime::PartTime(string first, string last, int id, double rate, double hours) : EmployeeType(first, last, id)
{
    emRate = rate;
    emHours = hours;
}

void PartTime::set(string first, string last, int id, double rate, double hours)
{
    setName(first, last);
    setId(id);
    emRate = rate;
    emHours = hours;
}

void PartTime::setPayRate(double rate)
{
    emRate = rate;
}

double PartTime::getPayRate()
{
    return emRate;
}

void PartTime::setHours(double hours)
{
    emHours = hours;
}

double PartTime::getHours()
{
    return emHours;
}

double PartTime::calcPay()const
{
    return( emRate * emHours);
}

void PartTime::print()const
{
    cout<< "ID: "<<getId<<endl;
    PersonType::print();

    cout<<endl;
    cout<<"Wages: $"<<calcPay()<<endl;
}