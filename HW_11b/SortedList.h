// ===========================================================
// File: SortedList.h
// ===========================================================

# pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Maximum number of integers in the list
static const int MAX_SIZE = 10;

class SortedList
{
private:
    int numbers[MAX_SIZE]; // Array to hold list elements
    int length; // Holds current number of elements in the list

public:
    // default constructor that Sets the list to an empty list
    SortedList(); 
    // destructor
    ~SortedList();

    // item is inserted into the list
    void insertItem(int item);

    // item is deleted from the list
    void deleteItem(int item);

    // Finds index to insert or locate item with binary search algorithm 
    int binarySearch(int num);

    // returns true if the list is full
    // method must be called before the insertItem method is called
    bool isFull();

    // returns true if the list is empty
    // must be called before the deleteItem method is called
    bool isEmpty();

    // displays the list 
    void printList() const;
};
// ===========================================================