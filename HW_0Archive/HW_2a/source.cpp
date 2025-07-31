// Attached: HW_2abcd
// File: HW_2a.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2a – C-String Introduction with User Input
// =============================================================================
// Description:
// This program uses C-style character arrays (C-strings) to store a first name,
// read a last name from the user, and concatenate both into a full name.
// The user is also prompted for their age. The program then outputs a greeting
// with their full name and age using a display function.
// =============================================================================


#include <iostream>

using namespace std;

// For strcat(), strcpy()
#include <cstring>


// Function Prototype
void displayInfo(const char fullName[], int age);


int main() {
    char firstName[10] = "Tom";
    char lastName[10];
    char fullName[20];
    int age = 0;

    // Ask for user input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the last name: ";
    cin >> lastName;

    // Build fullName by combining firstName + space + lastName
    strcpy(fullName, firstName); // Start with "Tom"
    strcat(fullName, " "); // Add space
    strcat(fullName, lastName); // Add last name

    // Output
    displayInfo(fullName, age);

    return 0;

} // end of main()
// =============================================================================



// ==== displayInfo ============================================================
// Displays the user's full name and age.
// Input: full name as C-string, and integer age
// Output: formatted message
// =============================================================================
void displayInfo(const char fullName[], int age) {
    cout << "\nHello " << fullName << ". You are " << age << " years old.\n";
} // end of displayInfo()
// =============================================================================




/* ================================== Output ===================================
Enter your age: 32
Enter the last name: Cats

Hello Tom Cats. You are 32 years old.
*/