// Sculpture.cpp
#include "Sculpture.h"

Sculpture::Sculpture(string id, string title, string artist, string genre, int year, double price, string material)
  : Art(id, title, artist, genre, year, price)
{
    this->material = material;
}

void Sculpture::showArt() {
    cout << "ID: "       << id       << "\n"
         << "Title: "    << title    << "\n"
         << "Artist: "   << artist   << "\n"
         << "Material: " << material << "\n"
         << "Genre: "    << genre    << "\n"
         << "Year: "     << year     << "\n"
         << "Price: $"   << price    << "\n\n";
}
Sculpture::~Sculpture() = default;