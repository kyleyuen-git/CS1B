// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_6e – Append Struct Object to Binary File and Read All Records
// =============================================================================
// Description:
// This program first writes 3 cat records (name and age) to a binary file 
// using write(). Then, it prompts the user to enter one more cat, appends it 
// to the file, and finally reads and displays all 4 records from the file.
// The program uses a struct with a c-string and an int.
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
// Performs the following steps:
// - Writes 3 cat records to a binary file (Part D)
// - Appends 1 more cat to the file (Part E)
// - Reads and displays all 4 records from the file
// =============================================================================

int main()
{
    // ======================== Part D ========================
    // Part D is not commented because I already commented it above
    Cat cat; 
    int count = 0; 
    ofstream critters("critters.bin", ios::binary | ios::trunc);
    if(critters.fail())
    {
        cout<<"File did not open\n";
        critters.close();
        return 1;
    }
    cout<<"Enter 3 cat records. \n";
    
    while(count<3)
    {
        cout<<"Enter information about a cat:\n";

        cout<<"NAME: ";
        cin.getline(cat.name, 20);
        cout<<"AGE: ";
        cin>>cat.age;
        cin.ignore(); 
        critters.write(cat.name, sizeof(cat.name));
        critters.write(reinterpret_cast<const char*>(&cat.age), sizeof(cat.age));

        count++;
    }
    cout << "\nRecord written to file.\n";
    critters.close();

    // ======================== Part E ========================
    
    // open binary file
    // EXTREMELY IMPORTANT: CANNOT REUSE CRITTERS NAME
    // ex) ofstream critters("critters.bin", ios::binary | ios::app);
    // after using ofstream critters("critters.bin", ios::binary | ios::trunc);
    // in part D
    // option A, Reuse one fstream critters and declare ios::in or ios::out
    // option B (used below), Use distinct names for each ofstream/instream
    ofstream crittersAppend("critters.bin", ios::binary | ios::app);

    // Check if file opened successfully
    if(crittersAppend.fail())
    {
        // If file opening failed, show error and close stream just in case
        cout<<"File did not open\n";
        crittersAppend.close();
        return 1; // exit program
    }

    // Prompt user for one more cat entry to be appended to the file
    // this is essentially all copy + pasted from above until 
    // "Read and Display All 4 Records"
    cout<<"Enter one more cat"<<endl;

    cout<<"NAME: ";
    // Get the cat's name; uses cin.getline for char array (c-string)
    cin.getline(cat.name, 20);
    // limit to 19 characters + null terminator

    // Get the cat's age (numeric input)
    cout<<"AGE: ";
    cin>>cat.age; 
    cin.ignore(); // clear newline character left in input buffer

    // === Writing data to binary file ===
    // Write the cat's name (char array) to the file as raw binary data
    crittersAppend.write(cat.name, sizeof(cat.name));
    // Write the age (int) to the file
    // reinterpret_cast is required to treat address as raw char* data
    crittersAppend.write(reinterpret_cast<const char*>(&cat.age), sizeof(cat.age));

    // Close the binary file
    crittersAppend.close();

    // ======================== Read and Display All 4 Records =================
    // open critters as read mode
    ifstream crittersRead("critters.bin", ios::binary);

    // Check if file opened successfully
    if(crittersRead.fail())
    {
        cout<<"File did not open\n";
        crittersRead.close();
        return 1;
    }

    // Output header before showing records
    cout << "\nHere is a list of all cats:\n\n";

    // Read and display each cat record in the file
    // We know exactly 4 records should exist (3 original + 1 appended)
    for (int i = 0; i < 4; ++i) {
        // Read one complete Cat struct from the file into the 'cat' variable
        crittersRead.read(reinterpret_cast<char*>(&cat), sizeof(cat));
        // left-align the name in a 10-char field, then print age
        cout << setw(10) << left << cat.name
             << ' ' << cat.age << '\n';
    }

    // After reading all records, close the input file stream
    crittersRead.close();

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
Enter one more cat
NAME: Jasmin
AGE: 4

Here is a list of all cats:

Tom        5
Fluffy     3
Sweet Pea  2
Jasmin     4

============================================================================= */