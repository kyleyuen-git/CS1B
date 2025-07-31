// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_7a – Presidents Class
// =============================================================================
// Description:
// This program asks the user to enter the name, number, and a famous quote
// for three U.S. presidents. It stores this information using a class called 
// Presidents, then displays all three entries using a displayPresidents() method.
// =============================================================================
#include "Presidents.h"

// ==== main ===================================================================
//
// Collects data for three president objects and uses set methods to assign data.
// Then calls displayPresidents() to print out each president's information.
// =============================================================================
int main()
{
    Presidents p1, p2, p3; // creates three president objects
    int num; // stores president number
    string tmp; // stores name and quote temporarily

    // --- first president ---
    cout << "Enter the first president's number: ";
    cin >> num; // Read president number
    cin.ignore(); // clear newline character for getline to work correctly
    p1.setNumber(num); // Set number in object p1

    cout << "Enter his name: ";
    getline(cin, tmp); // Read full name with getline (could contain spaces)
    p1.setName(tmp); // Set name in object p1

    cout << "Enter his quote: ";
    getline(cin, tmp); // Read quote as a full string
    p1.setQuote(tmp); // Set quote in object p1


    // --- second president ---
    cout << "\nEnter the second president's number: ";
    cin >> num; // Read president number
    cin.ignore(); // clear newline character for getline to work correctly
    p2.setNumber(num); // Store number in object p2

    cout << "Enter his name: ";
    getline(cin, tmp);
    p2.setName(tmp); // Store name in object p2

    cout << "Enter his quote: ";
    getline(cin, tmp);
    p2.setQuote(tmp); // Store quote in object p2


    // --- third president ---
    cout << "\nEnter the third president's number: ";
    cin >> num; // Read president number
    cin.ignore(); // clear newline character for getline to work correctly
    p3.setNumber(num); // Store number in object p3

    cout << "Enter his name: ";
    getline(cin, tmp); // Read full name with getline (could contain spaces)
    p3.setName(tmp); // Store name in object p3

    cout << "Enter his quote: ";
    getline(cin, tmp); // Read quote as a full string
    p3.setQuote(tmp); // Store quote in object p3


    // --- display all three ---
    cout << "\nThe presidents are:\n\n";
    // Call member function to display each president's info
    p1.displayPresidents();
    p2.displayPresidents();
    p3.displayPresidents();

    return 0;

}


/* ================================ Output ===================================

Enter the first president's number: 37
Enter his name: Richard Nixon
Enter his quote: I am not a crook.

Enter the second president's number: 45
Enter his name: Donald Trump
Enter his quote: Is our country still spending money on the GLOBAL WARMING HOAX?

Enter the third president's number: 42
Enter his name: Bill Clinton
Enter his quote: I did not have sexual relations with that woman.

The presidents are:

Richard Nixon, 37th president, said:
    "I am not a crook."

Donald Trump, 45th president, said:
    "Is our country still spending money on the GLOBAL WARMING HOAX?"

Bill Clinton, 42th president, said:
    "I did not have sexual relations with that woman."

============================================================================= */ 
