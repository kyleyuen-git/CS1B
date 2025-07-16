#include "Presidents.h"

int main()
{
    Presidents p1, p2, p3;
    int        num;
    string     tmp;

    // --- first president ---
    cout << "Enter the first president's number: ";
    cin >> num; 
    cin.ignore();
    p1.setNumber(num);

    cout << "Enter his name: ";
    getline(cin, tmp);
    p1.setName(tmp);

    cout << "Enter his quote: ";
    getline(cin, tmp);
    p1.setQuote(tmp);


    // --- second president ---
    cout << "\nEnter the second president's number: ";
    cin >> num; 
    cin.ignore();
    p2.setNumber(num);

    cout << "Enter his name: ";
    getline(cin, tmp);
    p2.setName(tmp);

    cout << "Enter his quote: ";
    getline(cin, tmp);
    p2.setQuote(tmp);


    // --- third president ---
    cout << "\nEnter the third president's number: ";
    cin >> num; 
    cin.ignore();
    p3.setNumber(num);

    cout << "Enter his name: ";
    getline(cin, tmp);
    p3.setName(tmp);

    cout << "Enter his quote: ";
    getline(cin, tmp);
    p3.setQuote(tmp);


    // --- display all three ---
    cout << "\nThe presidents are:\n\n";
    p1.displayPresidents();
    p2.displayPresidents();
    p3.displayPresidents();

    return 0;

}