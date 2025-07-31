// Attached: HW_2abcd
// File: HW_2b.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2b – ID Number Lookup using Arrays
// =============================================================================
// Description:
// This program defines an array of 5 ID numbers and prompts the user to
// enter an ID to search for. It uses a sequential search to locate the ID
// and reports its index if found, or a message if not found.
// =============================================================================

#include <iostream>
using namespace std;

// Function Prototype
int searchID(const int idNumbers[], int size, int target);

// ==== main ===================================================================
//
// Initializes the ID list, gets user input, calls search, and displays result.
// =============================================================================
int main() {
    const int SIZE = 5;
    int idNumbers[SIZE] = {12345, 54321, 11223, 33211, 44411};
    int targetID = 0;
    int indexFound = -1;

    // Prompt user for ID to search
    cout << "Enter an ID number to search: ";
    cin >> targetID;

    // Perform search
    indexFound = searchID(idNumbers, SIZE, targetID);

    // Display result
    if (indexFound != -1) {
        cout << "\nID " << targetID << " was found at index #" << indexFound << ".\n";
    } else {
        cout << "\nID " << targetID << " was not found in the list.\n";
    }

    return 0;

} // end of main()
// =============================================================================


// ==== searchID ===============================================================
// Performs a sequential search for target in idNumbers[].
// Input: the array, its size, and the ID to search for
// Output: index where target is found, or -1 if not found
// =============================================================================
int searchID(const int idNumbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (idNumbers[i] == target) {
            return i; // Found
        }
    }
    return -1; // Not found
} // end of searchID()
// =============================================================================



/* ================================== Output ===================================
Enter an ID number to search: 12345

ID 12345 was found at index #0.
*/