// ===========================================================
// File: PassFailExam.cpp - Implements the PassFailExam class,
// which extends PassFailActivity. It calculates a student's
// numeric score based on number of missed questions on an exam,
// and determines if the student passed or failed.
// ===========================================================
#include "PassFailExam.h"

// ==== PassFailExam (Default Constructor) ===================================
// Initializes all exam-related variables to 0.
// Also calls the default PassFailActivity constructor to initialize score.
// ===========================================================================
// calls PassFailActivity() constructor 
// which initializes PassFailActivity and GradedActivity object members
PassFailExam::PassFailExam() : PassFailActivity() 
{
    numQuestions = 0; // Number of questions
    pointsEach = 0.0; // Points for each question
    numMissed = 0; // Number of questions missed
}

// ==== PassFailExam (Overloaded Constructor) ================================
// Initializes exam details using number of questions, missed questions,
// and minimum passing score. Uses set() to calculate score and set values.
// Input:
//   - questions, missed, mps
// Output: none
// ===========================================================================
// calls PassFailActivity() constructor
PassFailExam::PassFailExam(int questions, int missed, double mps) : PassFailActivity(mps)
{
    set(questions, missed);
}

// ==== ~PassFailExam ========================================================
// Destructor: default behavior.
// ===========================================================================
PassFailExam::~PassFailExam() = default; // destructor

// ==== set ==================================================================
// Calculates numeric score and sets internal data based on
// number of questions and missed answers.
// Input:
//   - questions, missed
// Output: none
// ===========================================================================
void PassFailExam::set(int questions, int missed)
{
    double numericScore; // To hold the numeric score
    // Set the number of questions and number missed.
    numQuestions = questions;
    numMissed = missed;
    // Calculate the points for each question.
    pointsEach = 100.0 / numQuestions;
    // Calculate the numeric score for this exam.
    numericScore = 100.0 - (missed * pointsEach);
    // Call the inherited SetScore function to set the numeric score.
    setScore(numericScore);
}

// ==== getNumQuestions ======================================================
// Returns the number of questions on the exam.
// Output: int – total number of exam questions
// ===========================================================================
double PassFailExam::getNumQuestions()
{
    return numQuestions;
}

// ==== getPointsEach ========================================================
// Returns the number of points each question is worth.
// Output: double – point value of each question
// ===========================================================================
double PassFailExam::getPointsEach()
{
    return pointsEach;
}

// ==== getNumMissed =========================================================
// Returns how many questions were missed.
// Output: int – number of incorrect answers
// ===========================================================================
double PassFailExam::getNumMissed()
{
    return numMissed;
}
// ===========================================================