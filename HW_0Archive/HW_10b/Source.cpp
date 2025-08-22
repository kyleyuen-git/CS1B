// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_10b - Vector Operations
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Declare an empty vector of integers
    vector<int> values;

    // Push initial values: 1, 2, 4, 9, 5
    values.push_back(1);
    values.push_back(2);
    values.push_back(4);
    values.push_back(9);
    values.push_back(5);

    // Display current vector contents
    cout << "Vector: ";
    for(int i = 0; i<values.size(); i++)
    {
        cout<<values[i]<<" ";
    }
    cout << endl << endl;

    // insert 3 at the front
    values.insert(values.begin(), 3);

    // Display after inserting at front
    cout << "Vector: ";
    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << " ";
    cout << endl << endl;

    // Erase the element at the front
    values.erase(values.begin());

    // Display after erasing front
    cout << "Vector: ";
    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << " ";
    cout << endl << endl;

    // Pop the element at the back
    values.pop_back();

    // Display after popping back
    cout << "Vector: ";
    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << " ";
    cout << endl << endl;

    // Print the count of values
    cout << "There are " << values.size() << " values." << endl;

    return 0;
}

/* ==== OUTPUT =============================================

Vector: 1 2 4 9 5 

Vector: 3 1 2 4 9 5 

Vector: 1 2 4 9 5 

Vector: 1 2 4 9 

There are 4 values.

//======================================================= */