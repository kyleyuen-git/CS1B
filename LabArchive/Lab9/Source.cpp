// ===========================================================
// File: Source.cpp
// ===========================================================

#include "Book.h"

int main()
{
    // creating two book objects
    Book b1("0-12345-9", 1990, 12.5);
    b1.displayBook();

    Book b2("0-54321-9", 2001, 7.75);
    b2.displayBook();

    // using the static getCount() function to display static int bookCount
    // needs the Book and SCOPE operator
    cout<<"\nThere are "<<Book::getCount()<<" books.\n";


    // the calculations below were shown in the output in the lab instructions,
    // but they use functions that were not defined in the UML,
    // so I wasn't sure if we include this or not
    cout << "\n// ---------------------------\n\n";

    // Which book is more expensive?
    // Using the overloaded operator>
    if (b1 > b2)
        cout << "Book #1 has a higher price.\n\n";
    else if (b2 > b1)
        cout << "Book #2 has a higher price.\n\n";
    else
        cout << "Same price.\n\n";

    // Same‑price check using the overloaded operator==
    if (b1 == b2)
        cout << "Same price.\n\n";
    else
        cout << "Not the same price.\n\n";

    // Threshold test (no overloaded operator)
    if (b2.getPrice() > 10.00)
        cout << "The price is more than $10.00.\n\n";
    else
        cout << "The price is not more than $10.00.\n\n";

    // Finding Average using the overloaded operator+
    double avg = (b1.getPrice() + b2.getPrice()) / 2.0;
    cout << fixed << setprecision(3);
    cout << "The average book price is " << avg << ".\n\n";

    // Year check (no overloaded operator)
    if (b1.getYear() < 2000)
        cout << "The book was published before 2000.\n";
    else
        cout << "The book was not published before 2000.\n";

    return 0;
}

/* ============================== Output =================================

Here is book # 1
ISBN: 0-12345-9
Year: 1990
Price: 12.5

Here is book # 2
ISBN: 0-54321-9
Year: 2001
Price: 7.75

There are 2 books.

// ---------------------------

Book #1 has a higher price.

Not the same price.

The price is not more than $10.00.

The average book price is 10.125.

The book was published before 2000.

========================================================================= */