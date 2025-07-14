#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Book
{
protected:
    string title;
    double wholeSaleCost;

public:
    Book();
    Book(string title, double wholeSaleCost);

    virtual ~Book() = default;

    void setTitle(string title);
    void setWholeSaleCost(double cost);

    string getTitle() const;
    double getWholeSaleCost() const;

    virtual double calcRetail() const;
    virtual void displayBook() const;
};
