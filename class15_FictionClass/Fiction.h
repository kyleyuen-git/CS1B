#pragma once

#include "Book.h"

using namespace std;

class Fiction : public Book
{
private:
    string genre;

public:
    Fiction();  // Default constructor
    Fiction(string title, string genre, double wholeSaleCost); // Overloaded constructor
    virtual ~Fiction(); // Virtual destructor


    //
};
