#include "Fiction.h"

Fiction::Fiction() : genre(" ") {}

Fiction::Fiction(string title, string genre, double wholeSaleCost)
    : Book(title, wholeSaleCost) // Call base class constructor
{
    this->genre = genre;
}

Fiction::~Fiction() {}

double Fiction::calcRetail()
{
    return wholeSaleCost * 10;
}

void Fiction::displayBook()
{
    cout << "Title: " << title << endl
         << "Genre: " << genre << endl
         << "Cost $: " << calcRetail();
}
