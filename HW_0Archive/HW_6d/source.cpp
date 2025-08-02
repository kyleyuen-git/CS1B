// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_6d – Write Struct Object to Binary File
// =============================================================================
// Description:
// This program prompts the user to enter 3 cat records (name and age) and 
// writes them to a binary file named "critters.bin". The program uses the 
// write() function to store the data in binary format. Each record is written 
// using the same Cat object reused in a loop.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


// ==== Struct Definition ======================================================
// Defines a Cat with a fixed-size character name array and integer age.
// =============================================================================
struct Cat
{
    char name[20]; // c-string (char array) to store name
    int age; // integer to store cat's age
};


// ==== main ===================================================================
//
// Prompts the user for 3 cat records and writes them to a binary file using 
// ofstream with ios::binary. Uses write() to store both char and int data
// properly in binary format.
// =============================================================================

int main()
{
    // ======================== Part D ========================
    Cat cat; // single Cat object reused for each record
    int count = 0; // number of cats entered so far

    // out = writing to critters.bin
    // opens critters file in binary mode
    ofstream critters("critters.bin", ios::binary | ios::trunc);

    // Check if file opened successfully
    if(critters.fail())
    {
        cout<<"File did not open\n";
        critters.close();
        return 1;
    }

    // Prompt to begin entering cat data
    cout<<"Enter 3 cat records. \n";
    
    while(count<3)
    {
        cout<<"Enter information about a cat:\n";
        
        cout<<"NAME: ";
        // getline() for char; reading from console (cin), not file stream (critters)
        cin.getline(cat.name, 20);
        //if we wanted getline() for strings, we do getline(critters, stringName)

        cout<<"AGE: ";
        cin>>cat.age; // Read age normally
        cin.ignore(); // Clear newline from buffer before next getline()
        
        // === Writing data to binary file ===

        // wrong way to write to binary file: critters<<cat.name<<"\n"<<cat.age<<"\n";
        // using write() when data is char type
        critters.write(cat.name, sizeof(cat.name));
        // using write() when data is NOT char type
        // typecast cat.age to a char*, so you need the address
        critters.write(reinterpret_cast<const char*>(&cat.age), sizeof(cat.age));

        count++; // move to next cat
    }

    // Confirm to user that records were written
    cout << "\nRecord written to file.\n";

    // Close the binary file
    critters.close();

    return 0;
}
// =============================================================================

/* ================================ Output ===================================

Enter 3 cat records. 
Enter information about a cat:
NAME: Tom
AGE: 5
Enter information about a cat:
NAME: Fluffy
AGE: 3
Enter information about a cat:
NAME: Sweet Pea
AGE: 2

Record written to file.

============================================================================= */