// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_3a – Decimal to Binary using Recursion
// =============================================================================
// Description:
// This program prompts the user for an integer and converts it
// to its binary equivalent using a recursive function.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


// ==== Function Prototype =====================================================
void decToBinary(int value);


// ==== main ===================================================================
//
// Controls input/output and calls recursive conversion.
// =============================================================================
int main(){
    // Declare a variable to store the user's input
    int value;

    // Prompt the user to enter a non-negative integer
    cout << "Enter a non-negative integer value: ";
    cin >> value;
    

    // Check if the input is negative
    if(value<0){
        // If negative, print an error message
        cout<<"Decimal "<<value<<" = Invalid entry";
    }
    // If input is valid, print the decimal value
    else{
        cout<<"Decimal "<<value<<" = ";
        decToBinary(value); // Call the recursive function to print the binary equivalent
        cout<<" binary.";
    }

    
}// end of main()
// =============================================================================


// ==== decToBinary ============================================================
// Recursively converts a decimal number to binary.
// Input: integer value (must be non-negative)
// Output: binary digits printed to screen
// =============================================================================
void decToBinary(int value){
    // Base case: when value reaches 0, print 0 and stop recursion
    if(value == 0){
        cout<< value;
    }
    else{
        // Recursive call: divide the value by 2 and continue recursion
        decToBinary(value/2);
        
        // After recursion unwinds, print the remainder (either 0 or 1)
        // This builds the binary number from most significant to least significant bit
        cout<<value%2;
    }
}// end of decToBinary()
// =============================================================================


/*================================== Output ===================================

Enter a non-negative integer value: 37
Decimal 37 = 0100101 binary. 

-------------------------------------*/