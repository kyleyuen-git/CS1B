#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Ship
{
private:
    string name;
    string year;
public:
    Ship(string name, string year); // constructor
    virtual ~Ship(); // VIRTUAL destructor?

    void setName(string name); // mutator
    void setYear(string year); // mutator
    string getName()const; // accessor
    string getYear()const; // accessor

    // virtual function to print ship's name and year
    virtual void display()const;
};