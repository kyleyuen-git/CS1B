#include "Book.h"

Book::Book(){
    //initialize member variables
    isbn = 0;
    title = " ";
}

Book::Book(int isbn, string title, double cost){
    this->isbn = isbn; // THIS object's isbn is being assigned the isbn parameter
    this->title = title;

    //THIS keyword counterexample:
    //if you write the parameters like Book::Book(int isb, string ti)
    //then you don't need "this", you can just do
    //isbn = isb;
    //title = ti
}

Book::~Book(){
    cout<<"Bye!\n\n";
}

void Book::setIsbn(int isbn){
    this->isbn = isbn;
}

void Book::setTitle(string title){
    this->title = title;
}

void Book::setCost(double cost){
    this->cost = cost;
}

int Book::getIsbn()const{
    return isbn;
}

string Book::getTitle() const{
    return title;
}

double Book::getCost() const{
    return cost;
}

void Book::displayBook()const{
    cout<<"Isbn: "<<isbn<<endl
        <<"Title: "<<title<<endl
        <<"Cost: "<<cost<<endl;
}