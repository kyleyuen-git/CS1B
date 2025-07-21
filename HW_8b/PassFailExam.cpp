#include "PassFailExam.h"

// default constructor
// calls PassFailActivity() constructor 
// which initializes PassFailActivity and GradedActivity object members
PassFailExam::PassFailExam() : PassFailActivity() 
{
    numQuestions = 0; // Number of questions
    pointsEach = 0.0; // Points for each question
    numMissed = 0; // Number of questions missed
}

// overloaded constructor
// calls PassFailActivity() constructor
PassFailExam::PassFailExam(int questions, int missed, double mps) : PassFailActivity(mps)
{
    set(questions, missed);
}

PassFailExam::~PassFailExam() = default; // destructor

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

double PassFailExam::getNumQuestions()
{
    return numQuestions;
}

double PassFailExam::getPointsEach()
{
    return pointsEach;
}

double PassFailExam::getNumMissed()
{
    return numMissed;
}