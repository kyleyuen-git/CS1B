// ===========================================================
// File: Book.h
// ===========================================================

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Book
{
private:
    string isbn;
    int year;
    double price;
    static int bookCount; // bookCount is a shared data between all objects 
public:
    Book(); // default constructor
    Book(string isbn, int year, double price);
    ~Book();
    void displayBook()const;
    static int getCount();

    // these functions were not in the UML class diagram, but are needed to 
    // match the output specified in the assignment instructions
    string getISBN() const;
    int getYear() const;
    double getPrice() const;

    // overriden functions for easier calculations in Source.cpp
    bool operator>(Book& b2)const;
    bool operator==(Book& b2)const;
    double operator+(Book& other) const;

};