// ===========================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// ===========================================================
// Program: HW_9a – Dog Class – Overload Operators
// ===========================================================
// Description:
// Declares Dog objects with name, weight, and age.
// Overloads comparison operators (>= age, < weight, == name)
// and the insertion operator (<<) to display Dog details.
// ===========================================================

#include "Dog.h"

int main()
{
    // Declare two Dog objects with initial values
    Dog myDog("Spot", 5.5, 3);
    Dog yourDog("Jack", 4.5, 3);

    // 1) Check if myDog is at least 2 years old
    if (myDog >= 2)
        cout << "The dog is at least 2 years old." << "\n\n";
    else
        cout << "The dog is less than 2 years old." << "\n\n";

    // 2) Compare weights of yourDog and myDog
    if (yourDog < myDog)
        cout << "Your dog weighs less than my dog." << "\n\n";
    else
        cout << "Your dog does not weigh less than my dog." << "\n\n";

    // 3) Compare names of the two dogs
    if (myDog == yourDog)
        cout << "They have the same name." << "\n\n";
    else
        cout << "They do not have the same name." << "\n\n";

    // 4) Display yourDog using overloaded << operator
    cout << yourDog << endl;

    return 0;
}
// ===========================================================

/* ======================== Output ===========================

The dog is at least 2 years old.

Your dog weighs less than my dog.

They do not have the same name.

NAME:  Jack
WEIGHT:  4.5 pounds
AGE:  3 years old.

=========================================================== */