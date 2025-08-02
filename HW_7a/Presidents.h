// =============================================================================
// Presidents.h – Class Specification File
// =============================================================================
// Contains the Presidents class declaration, including data members and
// function prototypes for constructors, mutators, and display.
// =============================================================================
#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


// ==== Presidents Class Definition ============================================
class Presidents
{
// private access specifier
private:
    // Stores the president's number
    int number;

    // Stores the president’s name
    string name;

    // Stores a famous quote by the president
    string quote;

// public access specifier
public:
    Presidents(); // Default constructor
    ~Presidents(); // Destructor
    void setNumber(int number); // Sets the president’s number
    void setName(string name); // Sets the president’s name
    void setQuote(string quote); // Sets the president’s quote
    void displayPresidents()const; // Displays the president’s data
};
// =============================================================================