#include <iostream>

using namespace std;

double getTestScore(int);
double averageTestScore(double, double, double);
char grade(double);
void displayGrade(char);

int main()
{
    double score1{ 0 };
    double score2{ 0 };
    double score3{ 0 };
    double average{ 0 };
    char letterGrade{ ' ' };

    int count{ 1 };

    score1 = getTestScore(count++);
    score2 = getTestScore(count++);
    score3 = getTestScore(count++);

    average = averageTestScore(score1, score2, score3);

    letterGrade = grade(average);

    displayGrade(letterGrade);

    return 0;
}

double getTestScore(int count)
{
    double score{ 0 };

    cout << "Enter test score " << count << ": ";
    cin >> score;

    while (score < 0 || score > 100)
    {
        cout << "Invalid score. Please enter a score between 0 and 100: ";
        cin >> score;
    }

    return score;
}
