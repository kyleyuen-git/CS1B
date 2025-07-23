#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 100;

class UnsortedList
{
private:
    int length;
    int idNumbers[SIZE];

public:
    UnsortedList();
    ~UnsortedList();

    void insertItem(int id);
    void deleteItem(int id);
    bool isFull()const;
    bool isEmpty()const;
    void displayList()const;
};