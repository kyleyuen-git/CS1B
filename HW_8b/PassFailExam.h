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

    void set(int questions, int missed);

    double getNumQuestions();

    double getPointsEach();

    double getNumMissed();
};