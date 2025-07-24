#include "Fraction.h"

int Fraction::gcd(int num, int den)
{
    // Base case: if b is zero, the answer is a
    if (den == 0)
        return num;

    // Otherwise, reduce the problem
    return gcd(den, num % den);
}

void Fraction::simplify()
{
    if (denominator == 0) {
        cout << "Error: denominator zero; resetting to 1.\n";
        denominator = 1;
    }
    // ensure denominator positive
    int sign;
    if (denominator < 0)
        sign = -1;
    else
        sign = 1;

    // find greatest common divisor
    int g = gcd(abs(numerator), abs(denominator));
    // reduce and fix sign
    numerator = sign * (numerator / g);
    denominator = abs(denominator / g);
}

// constructor (default 0/1), prevents zero denominator
Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
    simplify();
}

Fraction::~Fraction() = default; // destructor

// overloaded operators
Fraction operator+(const Fraction& a, const Fraction& b)
{
    return Fraction(
        a.numerator * b.denominator
      + b.numerator * a.denominator,
        a.denominator * b.denominator
    );
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
    return Fraction(
        a.numerator * b.denominator
      - b.numerator * a.denominator,
        a.denominator * b.denominator
    );

}

Fraction operator/(const Fraction& a, const Fraction& b)
{
    if (b.numerator == 0) {
        cerr << "Error: division by zero fraction; returning 0/1.\n";
        return Fraction(0, 1);
    }
    return Fraction(
        a.numerator * b.denominator,
        a.denominator * b.numerator
    );
}

ostream& operator<<(ostream& os, const Fraction& f)
{
    os << f.numerator << '/' << f.denominator;
    return os;
}