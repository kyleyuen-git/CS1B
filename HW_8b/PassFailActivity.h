#pragma once
#include "GradedActivity.h"

class PassFailActivity : public GradedActivity
{
protected:
    double minPassingScore;

public:
    PassFailActivity(); // default constructor
    PassFailActivity(double mps); // overloaded constructor

    ~PassFailActivity(); // destructor

    void setMinPassingScore(double mps);
    double getMinPassingScore();

    char getLetterGrade(); // virtual keyword not needed since it was declared in base class
                           // overridden function 

};