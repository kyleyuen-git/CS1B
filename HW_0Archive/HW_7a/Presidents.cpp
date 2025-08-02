// =============================================================================
// Presidents.cpp – Class Implementation File
// =============================================================================
// Implements all methods of the Presidents class, including constructor,
// destructor, setters for number/name/quote, and a display method.
// =============================================================================
#include "Presidents.h"

// ==== Constructor ============================================================
// Initializes a new Presidents object with default placeholder values.
// =============================================================================
Presidents::Presidents()
{
    number = 0; // default number set to 0
    name = " "; // name starts as empty string with one space
    quote = " "; // quote starts as empty string with one space
}

// ==== Destructor ============================================================
// Destructor does not manage dynamic memory, so nothing special is needed.
// =============================================================================
Presidents::~Presidents(){}

// ==== setNumber =============================================================
// Stores the president’s number into the object.
// Input: number – the number of the president
// =============================================================================
void Presidents::setNumber(int number)
{
    this->number = number; // Use "this" to distinguish from parameter
}

// ==== setName ===============================================================
// Stores the president’s name into the object.
// Input: name – string containing president’s name
// =============================================================================
void Presidents::setName(string name)
{
    this->name = name; // Set object's name to passed-in name
}

// ==== setQuote ==============================================================
// Stores the president’s quote into the object.
// Input: quote – string containing a famous quote
// =============================================================================
void Presidents::setQuote(string quote)
{
    this->quote = quote; // Set object's quote to passed-in quote
}

// ==== displayPresidents =====================================================
// Outputs the president’s information in formatted style:
// =============================================================================
void Presidents::displayPresidents()const
{
    cout<< name << ", " << number << "th president, said:\n"
      << "    \"" << quote << "\"\n\n";
}
// =============================================================================