// ===========================================================
// File: GradedActivity.h
// ===========================================================
// This file defines the GradedActivity class, which provides
// basic functionality for handling numeric scores and converting
// them to standard letter grades (A–F). It serves as a base class
// for more specialized grading schemes, such as pass/fail grading.
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
    double score; // Holds the numeric score

public:
    GradedActivity(); // default constructor
    GradedActivity(double testScore); // overloaded constructor
    ~GradedActivity(); // destructor

    void setScore(double testScore); // Sets the numeric score
    double getScore()const; // Retrieves the current numeric score

    virtual char getLetterGrade()const; // virtual because it needs be overridden
                                        // no parameter needed because score is updated through setScore(double testScore)
};
// ===========================================================