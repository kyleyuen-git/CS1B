// ===========================================================
// File: PassFailExam.h - Declares the PassFailExam class,
// a subclass of PassFailActivity. Adds logic for
// calculating numeric exam score based on missed questions.
// Used to evaluate pass/fail grading for multiple choice exams.
// ===========================================================
#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity
{
private:
    int numQuestions; // Number of questions
    double pointsEach; // Points for each question
    int numMissed; // Number of questions missed
public:
    PassFailExam(); // default constructor
    PassFailExam(int questions, int missed, double mps); // overloaded constructor
    ~PassFailExam(); // destructor

    void set(int questions, int missed); // Sets exam data & calculates score

    double getNumQuestions(); // Accessor for numQuestions

    double getPointsEach(); // Accessor for pointsEach

    double getNumMissed(); // Accessor for numMissed
};
// ===========================================================