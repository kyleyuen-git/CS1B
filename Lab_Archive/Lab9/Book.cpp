// ===========================================================
// File: Book.cpp
// ===========================================================

#include "Book.h"

int Book::bookCount = 0; // initialize the static variable

Book::Book()
{
    this->isbn = "";
    this->year = 0;
    this->price = 0.0;
    bookCount++; // every new book created is added to bookCount
}

Book::Book(string isbn, int year, double price)
{
    this->isbn = isbn;
    this->year = year;
    this->price = price;
    bookCount++; // every new book created is added to bookCount
}
Book::~Book()
{
    bookCount--;
}

void Book::displayBook()const
{
    cout<<"\nHere is book # "<<bookCount<<endl;
    cout<<"ISBN: "<< isbn <<endl;
    cout<<"Year: "<< year <<endl;
    cout<<"Price: "<< price <<endl;
}

int Book::getCount()
{
    return bookCount;
}

// these get functions were not in the UML class diagram, but are needed to 
// match the output specified in the assignment instructions
string Book::getISBN() const
{
    return isbn;
}

int Book::getYear() const
{
    return year;
}

double Book::getPrice() const
{
    return price;
}

// Overloaded operators to help with calculations in Source.cpp
bool Book::operator>(Book& b2)const
{
    return (price>b2.price);
}

bool Book::operator==(Book& b2)const
{
    return (price== b2.price);
}

double Book::operator+(Book& b2) const
{
    return (price + b2.price);
}