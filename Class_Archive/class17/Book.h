#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    double cost;
    static int count;
    
public:
    Book();
    Book(string title, double cost);
    ~Book();

    void setTitle(string title);
    void setCost(double cost);
    string getTitle()const;
    double getCost()const;
    void printBook()const;

    static int getCount();

    bool operator >(Book& book);
    bool operator >(float price);
    float operator +(Book& book);

    friend void comparePrices(Book& book1, Book& book2);
    friend ostream& operator <<(ostream& stream, Book& book);
    
};