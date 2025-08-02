#include "PersonType.h"

void PersonType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string PersonType::getFirstName()const
{
    return firstName;
}

string PersonType::getLastName()const
{
    return lastName;
}

void PersonType::print()const
{
    cout<<"First name is "<<firstName<<endl;
    cout<<"Last name is "<< lastName<<endl;
}