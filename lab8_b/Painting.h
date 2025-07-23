// Painting.h
#pragma once
#include "Art.h"

class Painting : public Art {
private:
    string paintMedium;

public:
    Painting(string id, string title, string artist, string genre, int year, double price, string paintMedium);
    void showArt() override;    // override of pure virtual
    ~Painting();
};
