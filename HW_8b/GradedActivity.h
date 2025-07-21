// ===========================================================
// File: GradedActivity.h - Holds the GradedActivity class specification.
// ===========================================================

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class GradedActivity
{
protected:
    double score;

public:
    GradedActivity(); // default constructor
    GradedActivity(double testScore); // overloaded constructor
    ~GradedActivity(); // destructor

    void setScore(double testScore);
    double getScore()const;

    virtual char getLetterGrade()const; // virtual because it needs be overridden
                                        // no parameter needed because score is updated through setScore(double testScore)
};