// Painting.cpp
#include "Painting.h"
#include <iostream>
using namespace std;

Painting::Painting(string id, string title, string artist, string genre, int year, double price, string paintMedium)
  : Art(id, title, artist, genre, year, price)
{
    this->paintMedium = paintMedium;
}

void Painting::showArt() {
    cout << "ID: "          << id          << "\n"
         << "Title: "       << title       << "\n"
         << "Artist: "      << artist      << "\n"
         << "Paint Medium: "<< paintMedium << "\n"
         << "Genre: "       << genre       << "\n"
         << "Year: "        << year        << "\n"
         << "Price: $"      << price       << "\n\n";

}

Painting::~Painting() = default;