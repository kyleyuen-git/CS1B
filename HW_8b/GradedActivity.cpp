#include "GradedActivity.h"

GradedActivity::GradedActivity()
{
    score = 0.0;
} // default constructor

GradedActivity::GradedActivity(double testScore)
{
    this->score = testScore;
} // overloaded constructor

GradedActivity::~GradedActivity(){} // destructor

void GradedActivity::setScore(double testScore)
{
    this->score = testScore;
}
double GradedActivity::getScore()const
{
    return score;
}

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