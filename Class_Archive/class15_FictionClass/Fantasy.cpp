#include "Fantasy.h"

Fantasy::Fantasy():author(" "){

}

Fantasy::Fantasy(string author, string title, double wholeSaleCost):Book(title, wholeSaleCost)
{
    this->author = author;
}

float Fantasy:: calcRetail()
{
    return wholeSaleCost * 65;
}

void Fantasy::displayBook()
{
    cout<<"Title: " << title << endl
        << "Author: " << author << endl
        << "Retail Price $" <<calcRetail() << endl;

}