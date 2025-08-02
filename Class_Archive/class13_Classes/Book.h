#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Book{
private: 
    int isbn;
    string title;
    double cost;

public:
    // each class can only have one constructor and one destructor 
    // you can have multiple overloaded constructors

    Book(); // default constructor
    Book(int isbn, string title, double cost); // overloaded constructor
    ~Book(); // destructor - destroyes everything you have allocated?

    void setIsbn(int isbn);
    void setTitle(string title);
    void setCost(double cost);

    int getIsbn() const;
    string getTitle() const;
    double getCost() const;

    void displayBook() const;
};