// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_6a, b, c – File I/O: Reading, Writing, and Appending Data
// =============================================================================
// Description:
// This program reads numbers from a file called data.txt and displays them.
// It then writes those same numbers to results.txt. After that, it prompts the
// user for 3 additional numbers and appends them to the same file.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// ==== main ===================================================================
//
// Performs three file operations in sequence:
// 1. Reads numbers from "data.txt" and displays them (Part a)
// 2. Writes the numbers to "results.txt" (Part b)
// 3. Appends 3 more user-input numbers to "results.txt" (Part c)
// =============================================================================
int main(){
    // ======================== part a ========================

    double number = 0; // to store number read from file

    // fstream fileName;
    // fileName.open("data.txt" , ios::out);
    ifstream fileName("data.txt");

    // Check if file was opened successfully
    if (fileName.fail())
    {
        cout<<"Error opening file! \n";
        fileName.close();
        return 1; // exit program if file open failed
    }

    // Display header
    cout<<"Here are the numbers in the file: \n";

    // Read and print numbers from file until EOF
    while(!fileName.eof())
    {
        fileName>>number; // similar to cin, but reads in numbers from fileName instead of user
                          // assigns numbers to variable number
        cout<<number<<endl; // prints out number to console
    }
    fileName.close(); // Close input file

    fileName.clear(); // Clear any potential fail state
    
    // ======================== part b ========================
    fileName.open("data.txt"); // Reopen fileName to read from beginning again

    ofstream results("results.txt"); // ofstream used for writing to files

    // Read each number from data.txt and write it to results.txt
    while(!fileName.eof()){
        fileName>>number;
        results<<number<<"\n"; // writing to file with extraction operator (<<)
                               // only for text files, NOT BINARY FILES
                               // Binary Files use write()
    }
    // could use:
    // while(fileName>>number){
    //     results<<number<<"\n";
    // }

    results.close(); // close results
    fileName.close(); // close fileName

    cout<< "\nThe data has been written to the file.\n";

    // ======================== part c ========================
    double addNum = 0;

    // open results and specify writing and appending to "results.txt"
    results.open("results.txt", ios::out | ios::app);

    // Prompt user for 3 more numbers
    cout<< "Enter 3 more numbers:\n";
    for( int i = 0; i<3; i++)
    {
        cin>>addNum;
        results<<addNum<<"\n"; // write each number to the file
    }

    // close results
    results.close();
}
// =============================================================================

/* ================================ Output ===================================

Here are the numbers in the file: 
3
4
5

The data has been written to the file.
Enter 3 more numbers:
6
7
8

============================================================================= */