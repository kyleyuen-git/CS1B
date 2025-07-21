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

double PassFailActivity::getMinPassingScore()
{
    if(score>=minPassingScore) // can't use score because it is protected in base class, need to use getScore()
    return 'P';
    else
    return 'F';
}

char PassFailActivity::getLetterGrade()
{

} // virtual keyword not needed since it was declared in base class
                        // overridden function 