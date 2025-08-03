// ===========================================================
// File: Dog.h
// ===========================================================

#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Dog
{
private:
    string name; // Dog's name
    float weight; // Dog's weight in pounds
    int age; // Dog's age in years
public:
    // Constructor: initialize name, weight, and age
    Dog(string theName, float theWeight, int theAge)
    : name(theName), weight(theWeight), age(theAge) {}

    // Destructor
    ~Dog() = default;

    // Display the dog's details
    void displayDog() const
    {
        cout << "NAME:  " << name << endl;
        cout << "WEIGHT:  " << weight << " pounds" << endl;
        cout << "AGE:  " << age << " years old." << endl;
    }

    // Overload >= operator to compare dog's age to an integer
    bool operator>=(int years) const
    {
        return age >= years;
    }

    // Overload < operator to compare weight of two dogs
    bool operator<(const Dog & rhs) const
    {
        return weight < rhs.weight;
    }

    // Overload == operator to compare names of two dogs
    bool operator==(const Dog & rhs) const
    {
        return name == rhs.name;
    }

    // Overload << operator to display a Dog via ostream
    friend ostream & operator<<(ostream & out, const Dog & d)
    {
        out << "NAME:  " << d.name << endl;
        out << "WEIGHT:  " << d.weight << " pounds" << endl;
        out << "AGE:  " << d.age << " years old.";
        return out;
    }
};
// ===========================================================