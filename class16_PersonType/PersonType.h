#pragma once

#include <iostream>
#include <string>

using namespace std;

class PersonType
{
private:
    string firstName;
    string lastName;
public:
    void print() const;
    //Function to output the first and last name
    //in the form firstName and lastName

    void setName(string firstName, string lastName);
    //Function to set first name and last name
    //to the parameters.
    //Postcondition firstName = first; lastName = last

    string getFirstName()const;
    //Function to return the first name.
    //Postcondition: the value of data member firstName;

    string getLastName()const;

    PersonType(string first = " ", string last = " "){}

    // PersonType(string first, string last):firstName(" "), lastName(" "){}
};