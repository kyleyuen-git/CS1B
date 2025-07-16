#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Presidents
{
private:
    int number;
    string name;
    string quote;
public:
    Presidents();
    ~Presidents();
    void setNumber(int number);
    void setName(string name);
    void setQuote(string quote);
    void displayPresidents()const;
};