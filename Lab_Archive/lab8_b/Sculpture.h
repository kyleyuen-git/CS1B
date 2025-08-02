// Sculpture.h
#pragma once
#include "Art.h"
using namespace std;

class Sculpture : public Art {
private:
    string material;

public:
    Sculpture(string id, string title, string artist, string genre, int year, double price, string material);
    void showArt() override;    // override of pure virtual
    ~Sculpture();
};
