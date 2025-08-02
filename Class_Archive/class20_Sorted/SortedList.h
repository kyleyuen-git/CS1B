#pragma once
#include <iostream>

using namespace std;

const int SIZE = 100;

class SortedList
{
private:
    int length;
    string names[SIZE];

public:

    SortedList();
    ~SortedList();

    void insertItem(string name);
    void deleteItem(string name);
    bool isFull();
    bool isEmpty();
    int binarySearch(string name);
    int linearSearch(string name);
    void displayList();

};