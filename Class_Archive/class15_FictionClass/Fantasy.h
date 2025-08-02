#pragma once

#include "Book.h"

class Fantasy: public Book{
    string author;
public:
    Fantasy();

    Fantasy(string author, string title, double wholeSaleCost);

    virtual ~Fantasy() = default;

    virtual void displayBook();

    virtual float calcRetail();
};