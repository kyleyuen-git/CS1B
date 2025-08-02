// ===========================================================
// File: PassFailActivity.h - Declares the PassFailActivity class,
// a derived class of GradedActivity. Adds a minimum passing score 
// and overrides getLetterGrade() to return pass/fail instead of a grade.
// ===========================================================
#pragma once
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
    double minPassingScore; // Minimum score required to pass

public:
    PassFailActivity(); // default constructor
    PassFailActivity(double mps); // overloaded constructor

    ~PassFailActivity(); // destructor

    void setMinPassingScore(double mps); // Sets the minimum score required to pass
    double getMinPassingScore(); // Retrieves the minimum passing score

    char getLetterGrade()const override; // virtual keyword not needed since it was declared in base class
    // overrides getLetterGrade()const in GradedActivity so we use override keyword
    // char getLetterGrade() const override and virtual char getLetterGrade() const both work
    // and are good programming practices but the keywords virtual and override are not needed in either

};
// ===========================================================