// Attached: HW_1(abcde)
// File: HW_1c.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_1c – Student Record (Pass-by-Reference)
// =============================================================================
// Description:
// The program prompts the user to enter a student ID, name, and GPA.
// The data is passed by reference into a record function, then displayed 
// using a separate output function after clearing the screen.
// =============================================================================

//inlude header and libraries
#include "prototypes.h"
#include <iostream>
#include <iomanip>

// ==== main ===================================================================
//
// Initializes student record variables and controls program flow.
// =============================================================================
int main() {
    int id = 0;
    string name = "";
    double gpa = 0.0;

    // Prompt user for student data
    getRecord(id, name, gpa);


    // Display the student record
    displayRecord(id, name, gpa);

    return 0;
}




// ==== getRecord ==============================================================
// Prompts the user to enter student ID, name, and GPA.
// Inputs: references to id, name, and gpa
// Output: stores user input into referenced variables
// =============================================================================
void getRecord(int &id, string &name, double &gpa) {
    cout << "Enter a student record:\n";

    cout << "ID: ";
    cin >> id;
    // Clear newline from buffer
    cin.ignore(); 

    cout << "NAME: ";
    getline(cin, name);

    cout << "GPA: ";
    cin >> gpa;
} // end of getRecord()
// =============================================================================




// ==== displayRecord ==========================================================
// Displays a student’s full record.
// Input: id, name, gpa
// Output: formatted student information to console
// =============================================================================
void displayRecord(int id, string name, double gpa) {
    cout << "\nSTUDENT RECORD\n\n";
    cout << left << setw(8) << "ID:"    << right << setw(10) << id << endl;
    cout << left << setw(8) << "NAME:"  << right << setw(10) << name << endl;
    cout << left << setw(8) << "GPA:"   << right << setw(10) << gpa << endl;
} // end of displayRecord()
// =============================================================================



/* ================================== Output ===================================
Enter a student record:
ID: 1234567890
NAME: Kyle Yuen
GPA: 3.7

STUDENT RECORD

ID:     1234567890
NAME:    Kyle Yuen
GPA:           3.7
*/