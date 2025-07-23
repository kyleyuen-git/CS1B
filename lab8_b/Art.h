// Art.h
#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Art {
protected:
    string id;
    string title;
    string artist;
    string genre;
    int    year;
    double price;

public:
    Art(string id, string title, string artist, string genre, int year, double price);
    virtual ~Art();
    virtual void showArt() = 0; // pure virtual function
};