#include "Presidents.h"

Presidents::Presidents()
{
    number = 0;
    name = " ";
    quote = " ";
}

Presidents::~Presidents(){}

void Presidents::setNumber(int number)
{
    this->number = number;
}

void Presidents::setName(string name)
{
    this->name = name;
}

void Presidents::setQuote(string quote)
{
    this->quote = quote;
}

void Presidents::displayPresidents()const
{
    cout<<name<<", "<<number<<"th president, said:\n    "<<quote;
}