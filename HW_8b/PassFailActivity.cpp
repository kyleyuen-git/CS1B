#include "PassFailActivity.h"

// default constructor
// initilization list calls GradedActivity() default constructor
// it's the programmer's responsibility to make sure its base‑class subobject gets constructed too
PassFailActivity:: PassFailActivity():GradedActivity() 
{
    minPassingScore = 0.0; // assigns 0.0 to minPassingScore by default 
}

// overloaded constructor
PassFailActivity::PassFailActivity(double mps):GradedActivity(), minPassingScore(mps) {}
// using initilization list only instead of "this->minPassingScore = mps;" assignment

PassFailActivity::~PassFailActivity() = default; // destructor
                              // "= default" means built‑in destructor and does the same thing
                              // as just empty { }

void PassFailActivity::setMinPassingScore(double mps)
{
    this->minPassingScore = mps;
}

// Note for teacher: In the instructions, it says to return P or F for getMinPassingScore()
// and to "redefine" getLetterGrade() from GradedActivity.
// I might be wrong, but it sounds like the "return P or F" should be for getLetterGrade()
// so that is what I wrote below. 

double PassFailActivity::getMinPassingScore()
{
    return minPassingScore;
}

char PassFailActivity::getLetterGrade()
{
    if(score>=minPassingScore) // can't use score because it is protected in base class, need to use getScore()
        return 'P';
    else
        return 'F';
} // virtual keyword not needed since it was declared in base class
                        // overridden function 