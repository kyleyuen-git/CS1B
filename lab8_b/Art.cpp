// Art.cpp
#include "Art.h"

Art::Art(string id, string title, string artist, string genre, int year, double price)
{
    this->id     = id;
    this->title  = title;
    this->artist = artist;
    this->genre  = genre;
    this->year   = year;
    this->price  = price;
}

Art::~Art() {}