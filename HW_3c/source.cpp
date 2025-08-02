// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_3c – Display Odd Numbers from 19 to 1 Using Recursion
// =============================================================================
// Description:
// This program uses a recursive function to display all odd numbers
// from 19 down to 1 (inclusive) in descending order.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// ==== Function Prototype =====================================================
void showOdds(int num);


// ==== main ===================================================================
//
// Starts the recursive call to display all odd numbers from 19 to 1.
// =============================================================================
int main() {
    cout << "Here are all odd numbers from 20 to 0:\n\n";

    // Start with the largest odd number 19
    int num = 19;
    showOdds(num);  // Begin recursive call to print odd numbers downward
    
} // end of main()
// =============================================================================

// ==== showOdds ==============================================================
// Recursively prints all odd numbers from current value down to 1.
// Input: num
// Output: prints all odd numbers from 19 to 1
// =============================================================================
void showOdds(int num) {
    // Base case: stop when number drops below 1
    if (num < 1)
        return;
    else{
        cout << num << "  ";
        // Recursive call: subtract 2 to get the next lower odd number
        showOdds(num - 2);
    }
} // end of showOdds()
// =============================================================================


/* ================================ Output ===================================

Here are all odd numbers from 20 to 0:

19  17  15  13  11  9  7  5  3  1

============================================================================= */