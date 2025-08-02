#include "Fraction.h"

int main()
{
    Fraction f1(2, 3);
    Fraction f2(1, 6);

    cout << "f1 = " << f1 << "\n"
         << "f2 = " << f2 << "\n"
         << "Sum = " << (f1 + f2) << "\n"
         << "Difference = " << (f1 - f2) << "\n"
         << "Quotient = " << (f1 / f2) << "\n";

    return 0;
}

/* ====== Output ==================================

f1 = 2/3
f2 = 1/6
Sum = 5/6
Difference = 1/2
Quotient = 4/1

================================================ */