#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator; // (always > 0)

public:
    int gcd(int num, int den); // finds greatest common factor 
    void simplify(); // simplifies num/den

    // constructor (default 0/1), prevents zero denominator
    Fraction(int numerator, int denominator);

    ~Fraction(); // destructor

    // overloaded operators
    friend Fraction operator+(const Fraction& a, const Fraction& b);
    friend Fraction operator-(const Fraction& a, const Fraction& b);
    friend Fraction operator/(const Fraction& a, const Fraction& b);
    friend ostream& operator<<(ostream& os, const Fraction& f);

};