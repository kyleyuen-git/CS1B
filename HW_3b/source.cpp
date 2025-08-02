// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_3b – Display Even Numbers from 1 to 20 Using Recursion
// =============================================================================
// Description:
// This program uses a recursive function to display all even numbers
// from 1 to 20 in ascending order.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// ==== Function Prototype =====================================================
void showEvens(int num);


// ==== main ===================================================================
//
// Starts the recursive display of even numbers from 2 to 20.
// =============================================================================
int main(){
    // Initial even number to start from
    int num = 2;

    cout<<"Here are all even numbers from 1 to 20: \n";

    // Begin recursive process to display even numbers
    showEvens(num);
}// end of main()
// =============================================================================


// ==== showEvens ==============================================================
// Recursively prints even numbers up to 20.
// Input: num
// Output: prints all even numbers in ascending order
// =============================================================================
void showEvens(int num) {
    // Base case: if the number exceeds 20, stop the recursion
    if (num>20) {
        return;
    }else {
        cout << num << "  ";
        // Recursive call with the next even number
        showEvens(num+2);
    }
} // end of showEvens()
// =============================================================================


/* ================================ Output ===================================

Here are all even numbers from 1 to 20: 
2  4  6  8  10  12  14  16  18  20  

============================================================================= */