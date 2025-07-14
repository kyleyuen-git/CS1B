#include "Book.h"

// Default constructor
Book::Book() : title(" "), wholeSaleCost(0.0) {}

// Overloaded constructor
Book::Book(string title, double wholeSaleCost)
    : title(title), wholeSaleCost(wholeSaleCost) {}

// Setters
void Book::setTitle(string title) {
    this->title = title;
}

void Book::setWholeSaleCost(double cost) {
    wholeSaleCost = cost;
}

// Getters
string Book::getTitle() const {
    return title;
}

double Book::getWholeSaleCost() const{
    return wholeSaleCost;
}

// These are pure virtual in Book.h, so not defined here:
// double Book::calcRetail()
// void Book::displayBook()
