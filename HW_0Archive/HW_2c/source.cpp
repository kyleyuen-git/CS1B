// Attached: HW_2abcd
// File: HW_2c.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2c – Two-Dimensional Array Input and Display
// =============================================================================
// Description:
// This program defines a 3x4 2D array of integers and allows the user to 
// enter values into the array using nested loops. After input, the screen
// is cleared and the formatted 2D array is displayed.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void getData(int array[][4], int rows, int cols);
void displayArray(int array[][4], int rows, int cols);

// ==== main ===================================================================
//
// Declares a 3x4 array and calls functions to input and display it.
// =============================================================================
int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int numArray[ROWS][COLS];

    getData(numArray, ROWS, COLS);
    displayArray(numArray, ROWS, COLS);

    return 0;

} // end of main()
// =============================================================================


// ==== getData ================================================================
// Prompts the user to input numbers into a 2D array using nested loops.
// Input: array passed by reference, number of rows and columns
// Output: fills array with user input
// =============================================================================
void getData(int array[][4], int rows, int cols) {
    cout << "Enter integers into the 2-Dimensional array:\n\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter a number: ";
            cin >> array[i][j];
        }
    }
} // end of getData()
// =============================================================================


// ==== displayArray ===========================================================
// Clears the screen and displays the 2D array in aligned columns.
// Input: array, number of rows and columns
// Output: formatted output of the 2D array
// =============================================================================
void displayArray(int array[][4], int rows, int cols) {

    cout << "\nHere is the data in the 2-Dimensional array:\n\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(6) << array[i][j];
        }
        cout << endl;
    }

    cout << endl;
} // end of displayArray()
// =============================================================================


/* ================================== Output ===================================
Enter integers into the 2-Dimensional array:

Enter a number: 1
Enter a number: 45
Enter a number: 765
Enter a number: 6
Enter a number: 32
Enter a number: 45
Enter a number: 789
Enter a number: 343
Enter a number: 22
Enter a number: 64
Enter a number: 12
Enter a number: 555

Here is the data in the 2-Dimensional array:

     1    45   765     6
    32    45   789   343
    22    64    12   555

*/