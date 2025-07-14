// Attached: HW_2B
// File: HW_2B.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2B_Prob1 – Random Array: Smallest and Largest
// =============================================================================
// Description:
// This program generates an array of 10 random integers between 1 and 100.
// It prints the array elements, then identifies and displays the smallest 
// and largest values from the array.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Constants
const int SIZE = 10;

// Function Prototypes
void generateRandomArray(int arr[], int size);
void displayArray(const int arr[], int size);
int findSmallest(const int arr[], int size);
int findLargest(const int arr[], int size);

// ==== main ===================================================================
//
// Generates array, displays contents, and prints smallest/largest elements.
// =============================================================================
int main() {
    int numbers[SIZE];

    // Seed random number generator
    srand(static_cast<unsigned>(time(0)));

    generateRandomArray(numbers, SIZE);

    cout << "Array elements: ";
    displayArray(numbers, SIZE);

    cout << "Smallest element: " << findSmallest(numbers, SIZE) << endl;
    cout << "Largest element: "  << findLargest(numbers, SIZE)  << endl;

    return 0;
} // end of main()
// =============================================================================


// ==== generateRandomArray ====================================================
// Fills array with random integers between 1 and 100
// =============================================================================
void generateRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}


// ==== displayArray ===========================================================
// Displays array elements on a single line
// =============================================================================
void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}


// ==== findSmallest ===========================================================
// Returns the smallest value in the array
// =============================================================================
int findSmallest(const int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}


// ==== findLargest ============================================================
// Returns the largest value in the array
// =============================================================================
int findLargest(const int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}



/* ================================== Output ===================================
Array elements: 43  48  77  82  3  30  88  75  41  61  
Smallest element: 3
Largest element: 88
*/