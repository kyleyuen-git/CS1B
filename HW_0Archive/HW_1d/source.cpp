// Attached: HW_1(abcde)
// File: HW_1d.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_1d – Swimming Pool Volume Calculator
// =============================================================================
// Description:
// The program prompts the user to enter three dimensions (width, length, depth)
// of a swimming pool. It validates that all dimensions are within specified 
// ranges. If valid, the volume is calculated and displayed.
// =============================================================================

#include <iostream>
using namespace std;

// Function Prototypes
void getDimensions(double &width, double &length, double &depth);
bool areValid(double width, double length, double depth);
double calcVolume(double width, double length, double depth);
void displayVolume(double volume);

// ==== main ===================================================================
//
// Coordinates input, validation, calculation, and output of pool volume.
// =============================================================================
int main() {
    double width = 0;
    double length = 0;
    double depth = 0;
    double volume = 0;

    // Prompt user for dimensions
    getDimensions(width, length, depth);

    // Validate and calculate/display if valid
    if (areValid(width, length, depth)) {
        volume = calcVolume(width, length, depth);
        displayVolume(volume);
    } else {
        cout << "\nInvalid dimensions entered.\n";
    }

    return 0;

} // end of main()
// =============================================================================


// ==== getDimensions ==========================================================
// Prompts the user to enter width, length, and depth of a pool.
// Input: user input via reference variables
// Output: fills width, length, and depth with user values
// =============================================================================
void getDimensions(double &width, double &length, double &depth) {
    cout << "Width: ";
    cin >> width;

    cout << "Length: ";
    cin >> length;

    cout << "Depth: ";
    cin >> depth;
} // end of getDimensions()
// =============================================================================


// ==== areValid ===============================================================
// Checks if the dimensions are within acceptable ranges.
// Width: 5–20 ft, Length: 5–100 ft, Depth: 1–12 ft
// Input: width, length, depth
// Output: true if valid, false otherwise
// =============================================================================
bool areValid(double width, double length, double depth) {
    return (
        (width > 5 && width < 20) &&
        (length > 5 && length < 100) &&
        (depth > 1 && depth < 12)
    );
} // end of areValid()
// =============================================================================


// ==== calcVolume =============================================================
// Calculates the volume of the pool in cubic feet.
// Formula: volume = width × length × depth
// Input: validated width, length, depth
// Output: volume
// =============================================================================
double calcVolume(double width, double length, double depth) {
    return width * length * depth;
} // end of calcVolume()
// =============================================================================


// ==== displayVolume ==========================================================
// Displays the volume of the pool in a formatted output.
// Input: volume (cubic feet)
// Output: formatted console message
// =============================================================================
void displayVolume(double volume) {
    cout << "\nThe volume is " << volume << " cubic feet.\n";
} // end of displayVolume()
// =============================================================================



/* ================================== Output ===================================
Width: 15
Length: 90
Depth: 11

The volume is 14850 cubic feet.
*/