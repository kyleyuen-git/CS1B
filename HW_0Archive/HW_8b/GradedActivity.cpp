// ===========================================================
// File: GradedActivity.cpp - Implements the GradedActivity class
// which stores a numeric score and returns the corresponding
// letter grade. This is the base class for other grading classes.
// ===========================================================
#include "GradedActivity.h"

// ==== GradedActivity ======================================================
// Default constructor: initializes score to 0.0.
// ===========================================================================
GradedActivity::GradedActivity()
{
    score = 0.0;
} // default constructor

// ==== GradedActivity ======================================================
// Overloaded constructor: initializes score to given value.
// Input: testScore - the numeric score to assign.
// Output: none
// ===========================================================================
GradedActivity::GradedActivity(double testScore)
{
    this->score = testScore;
} // overloaded constructor

// ==== ~GradedActivity =====================================================
// Destructor: default behavior as no dynamic memory is used.
// ===========================================================================
GradedActivity::~GradedActivity(){} // destructor

// ==== setScore ============================================================
// Sets the numeric score for the graded activity.
// Input: testScore – the numeric score to assign.
// Output: none
// ===========================================================================
void GradedActivity::setScore(double testScore)
{
    this->score = testScore;
}

// ==== getScore ============================================================
// Retrieves the numeric score.
// Output: score – the score stored in the object.
// ===========================================================================
double GradedActivity::getScore()const
{
    return score;
}

// ==== getLetterGrade ======================================================
// Determines the letter grade based on the numeric score.
// Output: Character representing the letter grade ('A'-'F').
// ===========================================================================
char GradedActivity::getLetterGrade()const // virtual function 
{
    if (score>=90)
        return 'A';
    else if (score>=80)
        return 'B';
    else if (score>=70)
        return 'C';
    else if (score>=60)
        return 'D';
    else
        return 'F';
}
// ===========================================================================