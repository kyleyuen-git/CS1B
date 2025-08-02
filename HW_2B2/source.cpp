// Attached: HW_2B
// File: HW_2B.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2B_Prob2 – Merging Two Arrays Alternately
// =============================================================================
// Description:
// This program creates two one-dimensional arrays of size 5 and fills them 
// with random values between 100 and 199. It then merges them into a third 
// array by alternating values from each original array and displays all arrays.
// =============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Constants
const int SIZE = 5;
const int MERGED_SIZE = SIZE * 2;

// Function Prototypes
void fillRandomArray(int arr[], int size);
void mergeArrays(const int arr1[], const int arr2[], int merged[], int size);
void printArray(const string& label, const int arr[], int size);

// ==== main ===================================================================
int main() {
    int firstArray[SIZE];
    int secondArray[SIZE];
    int mergedArray[MERGED_SIZE];

    // Seed random generator
    srand(static_cast<unsigned>(time(0)));

    // Fill and merge
    fillRandomArray(firstArray, SIZE);
    fillRandomArray(secondArray, SIZE);
    mergeArrays(firstArray, secondArray, mergedArray, SIZE);

    // Output
    cout << "Run:\n";
    printArray("First Array", firstArray, SIZE);
    printArray("Second Array", secondArray, SIZE);
    printArray("Merged Array", mergedArray, MERGED_SIZE);

    return 0;
} // end main()
// =============================================================================


// ==== fillRandomArray ========================================================
// Fills the array with random values from 100 to 199
// =============================================================================
void fillRandomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 100; // 100 to 199
    }
}


// ==== mergeArrays ============================================================
// Merges two arrays by alternating values into a new array
// =============================================================================
void mergeArrays(const int arr1[], const int arr2[], int merged[], int size) {
    for (int i = 0, j = 0; i < size; i++) {
        merged[j++] = arr1[i];
        merged[j++] = arr2[i];
    }
}


// ==== printArray =============================================================
// Prints the array with a label
// =============================================================================
void printArray(const string& label, const int arr[], int size) {
    cout << label << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;
}



/* ================================== Output ===================================
Run:
First Array
199 195 169 134 181 

Second Array
116 167 162 176 121 

Merged Array
199 116 195 167 169 162 134 176 181 121 
*/