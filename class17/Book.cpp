#include "Book.h"

Book::Book()
{
    title = " ";
    cost = 0.0;
    count++;
}

Book::Book(string title, double cost):title(title), cost(cost)
{
    count++;
}

Book::~Book(){}

void Book::setTitle(string t)
{
    title = t;
}

void Book::setCost(double c)
{
    cost = c;
}

string Book::getTitle()const
{
    return title;
}

double Book::getCost()const
{
    return cost;
}

void Book::printBook()const{
    cout<<"title: "<<title<<endl;
    cout<<"Cost: "<<cost<<endl;
}

int Book::getCount()
{
    return count;
}

bool Book::operator>(Book& book)
{
    if(cost > book.cost) // lefthand side is the calling object
    {                    // if this->cost > argument cost, return true
        return true;
    }
    else
    {
        return false;
    }
}

bool Book:: operator>(float price)
{
    return cost > price;
}

ostream& operator<<(ostream& stream, Book& book) //cout << book;
{
    stream << " \n\nTitle: "<< book.title<<endl;
    stream << "cost: " << book.cost << endl << endl;

    return stream;
}

float Book::operator+(Book& book)
{
    return (cost + book.cost);
}