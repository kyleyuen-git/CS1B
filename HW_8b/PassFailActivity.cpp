// ===========================================================
// File: PassFailActivity.cpp - Implements the PassFailActivity class,
// a derived class from GradedActivity. It evaluates whether a score
// is passing or failing based on a minimum passing threshold.
// ===========================================================

#include "PassFailActivity.h"

// ==== PassFailActivity (Default Constructor) ===============================
// Initializes a PassFailActivity object. Calls base GradedActivity() 
// constructor to set score to 0.0. Also sets minPassingScore to 0.0.
// ===========================================================================
// initilization list calls GradedActivity() default constructor
// it's the programmer's responsibility to make sure its base‑class subobject gets constructed too
PassFailActivity:: PassFailActivity():GradedActivity() 
{
    minPassingScore = 0.0; // assigns 0.0 to minPassingScore by default 
}

// ==== PassFailActivity (Overloaded Constructor) ============================
// Initializes object with a specific minimum passing score. 
// Calls GradedActivity() constructor to initialize score.
// Input: mps – minimum score required to pass.
// Output: none
// ===========================================================================
PassFailActivity::PassFailActivity(double mps):GradedActivity(), minPassingScore(mps) {}
// using initilization list only instead of "this->minPassingScore = mps;" assignment

// ==== ~PassFailActivity ====================================================
// Destructor: uses default behavior.
// ===========================================================================
PassFailActivity::~PassFailActivity() = default; // destructor
                              // "= default" means built‑in destructor and does the same thing
                              // as just empty { }

// ==== setMinPassingScore ===================================================
// Sets the minimum score required to pass.
// Input: mps – the new minimum passing score.
// Output: none
// ===========================================================================
void PassFailActivity::setMinPassingScore(double mps)
{
    this->minPassingScore = mps;
}

// Note for teacher: In the instructions, it says to return P or F for getMinPassingScore()
// and to "redefine" getLetterGrade() from GradedActivity.
// I might be wrong, but it sounds like the "return P or F" should be for getLetterGrade()
// so that is what I wrote below. 

// ==== getMinPassingScore ===================================================
// Retrieves the minimum passing score.
// Output: double – the minimum passing score.
// ===========================================================================
double PassFailActivity::getMinPassingScore()
{
    return minPassingScore;
}

// ==== getLetterGrade =======================================================
// Overrides GradedActivity's method. Returns 'P' for pass and 'F' for fail
// based on whether score meets or exceeds the minPassingScore.
// Output: char – 'P' if passing, 'F' if failing.
// ===========================================================================
char PassFailActivity::getLetterGrade()const
{
    if(score>=minPassingScore) // can't use score because it is protected in base class, need to use getScore()
        return 'P';
    else
        return 'F';
} // virtual keyword not needed since it was declared in base class
// ===========================================================