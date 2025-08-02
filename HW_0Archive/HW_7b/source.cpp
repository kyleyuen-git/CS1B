// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_7b – Cat Class
// =============================================================================
// Description:
// This program uses a Cat class to represent three cats (Fluffy, Tom, Kitty).
// It prompts the user to enter each cat's weight and color, then stores and
// displays this information using class methods. Finally, each cat "meows".
// =============================================================================

#include "Cat.h"

// ==== main ===================================================================
//
// Creates three Cat objects, prompts user for each cat's info,
// displays the data using displayInfo(), and makes each cat meow.
// =============================================================================
int main()
{
    Cat fluffy, tom, kitty; // Declare 3 cat objects
    double w; // temp variable w for weight
    string c; // temp variable c for color

    // Introductory message
    cout << "So you have three cats...\n\n";

    // Fluffy
    cout << "Describe Fluffy. What does she weight? ";
    // Read weight, clear newline
    cin >> w; 
    cin.ignore();
    // Prompt for Fluffy's color
    cout << "What color is she? ";
    getline(cin, c); // Read entire line in case of spaces

    // Store info in Fluffy object using set functions 
    fluffy.setWeight(w);
    fluffy.setColor(c);
    cout << "\n";

    // Tom
    cout << "Describe Tom. What does he weight? ";
    // Read weight, clear newline
    cin >> w; 
    cin.ignore();

    // Prompt for color
    cout << "What color is he? ";
    getline(cin, c); // Read entire line in case of spaces

    // Store info
    tom.setWeight(w);
    tom.setColor(c);
    cout << "\n";

    // Kitty
    cout << "Describe Kitty. What does she weight? ";
    // Read weight, clear newline
    cin >> w; 
    cin.ignore();

    // Prompt for color
    cout << "What color is she? ";
    getline(cin, c); // Read entire line in case of spaces

    // Store info
    kitty.setWeight(w);
    kitty.setColor(c);
    cout << "\n";

    // display each cat’s info
    cout << "Fluffy";   
    fluffy.displayInfo();
    cout << "Tom";      
    tom.displayInfo();
    cout << "Kitty";    
    kitty.displayInfo();
    cout << "\n";

    // meow
    cout << "Fluffy says: ";  
    fluffy.meow();
    cout << "Tom says: ";     
    tom.meow();
    cout << "Kitty says: ";   
    kitty.meow();

    return 0;
}

/* ================================ Output ===================================

So you have three cats...

Describe Fluffy. What does she weight? 4
What color is she? brown

Describe Tom. What does he weight? 9
What color is he? orange

Describe Kitty. What does she weight? 5
What color is she? white



Fluffy weights 4 pounds and is brown.
Tom weights 9 pounds and is orange.
Kitty weights 5 pounds and is white.

Fluffy says: MEOW!
Tom says: MEOW!
Kitty says: MEOW!

============================================================================= */