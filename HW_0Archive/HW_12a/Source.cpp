// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_12a – Add a Vector of Numbers
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// function prototypes
void getNumbers(vector<int> & aVector);
int addNumbers(const vector<int> & aVector);
void displaySum(const vector<int> & aVector, int sum);

int main()
{
    // Declare vector and iterator placeholder 
    vector<int> aVector;
    // (iterator declared in functions)
 
    // Read values into vector 
    getNumbers(aVector);
 
    // Compute sum of vector elements 
    int total = addNumbers(aVector);
 
    // Display vector contents and sum 
    displaySum(aVector, total);

    return 0;
}

// -----------------------------------------------------------
// getNumbers()
// Void function; prompts the user to enter 5 integer values
// and pushes each into aVector.
// Pre-conditions : aVector is an empty or existing vector<int>.
// Post-conditions: aVector.size() == 5, containing user inputs.
// -----------------------------------------------------------
void getNumbers(vector<int> & aVector)
{
    cout << "Enter 5 integer values.\n\n";
    // Loop 5 times for 5 input values
    for (int i = 0; i < 5; ++i) 
    {
        int value; // holds the current input
        cout << "Enter a value: ";
        cin  >> value; // read from console
        aVector.push_back(value); // store in vector
    }
    cout << "\n";
}

// -----------------------------------------------------------
// addNumbers()
// Returns the sum of all elements in aVector.
// Uses an iterator (it) to traverse the vector.
// Pre-conditions : aVector.size() == 5 (or more).
// Post-conditions: returns sum of elements in aVector.
// -----------------------------------------------------------
int addNumbers(const vector<int> & aVector)
{
    int sum = 0; // accumulator

    // iterate from first element to one-past-the-last
    vector<int>::const_iterator it;
    for (it = aVector.begin(); it != aVector.end(); ++it)
    {
        sum += *it; // add current element to total
    }
    return sum; // return the computed sum
}

// -----------------------------------------------------------
// displaySum()
// Displays the vector contents separated by tabs,
// and then prints the computed sum.
// Pre-conditions : aVector.size() == 5, sum == addNumbers(aVector).
// Post-conditions: outputs to console.
// -----------------------------------------------------------
void displaySum(const vector<int> & aVector, int sum)
{
    vector<int>::const_iterator it;
    cout << "Here is the vector: ";
    // traverse and print each element
    for (it = aVector.begin(); it != aVector.end(); ++it)
    {
        // element followed by space
        cout << *it <<" ";
    }
    cout << "\n\nThe sum equals: " << sum << "\n\n";
}

/* ==== OUTPUT =============================================

Enter 5 integer values.

Enter a value: 1
Enter a value: 2
Enter a value: 3
Enter a value: 4
Enter a value: 5

Here is the vector: 1 2 3 4 5 

The sum equals: 15

//======================================================= */