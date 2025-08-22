// ===========================================================
// Programmer  : Kyle Yuen
// Class : CS 1B
// Instructor  : Med Mogasemi
// ===========================================================
// Program : HW_12c – Test Scores Average Calculator
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm> 
#include <vector>
using namespace std;

// function protypes
void getScores(vector<int> & testScores);
double calcAvg(const vector<int> & testScores);
void displayAvg(double average);

int main()
{
    // Declare vector to hold test scores
    vector<int> testScores; 

    // Read five scores into vector
    getScores(testScores);

    // Compute average score
    double average = calcAvg(testScores);

    // Display the average
    displayAvg(average); 

    return 0;
}

// -----------------------------------------------------------
// getScores()
// Prompts the user to enter 5 test scores and pushes
// each into testScores.
// Pre-conditions : testScores is empty.
// Post-conditions: testScores contains 5 scores.
// -----------------------------------------------------------
void getScores(vector<int> & testScores)
{
    cout << "Enter 5 test scores\n\n";
    for (int i = 0; i < 5; ++i)
    {
        int score;
        // prompt for the i-th student's score
        cout << "Enter student #" << i + 1 << ":  ";
        cin  >> score; // read into local variable
        testScores.push_back(score); // append to vector
    }
    cout << endl;
}

// -----------------------------------------------------------
// calcAvg()
// Returns the average of the values in testScores.
// Uses a const_iterator to traverse the vector.
// Pre-conditions : testScores.size() == 5.
// Post-conditions: returns a double average.
// -----------------------------------------------------------
double calcAvg(const vector<int> & testScores)
{
    int total = 0; // accumulator for sum of scores

    // iterate from first element to one-past-last
    for (vector<int>::const_iterator it = testScores.begin();
         it != testScores.end();
         ++it)
    {
        total += *it; // add current element to total
    }

    // convert to double to avoid integer division
    return static_cast<double>(total) / testScores.size();
}

// -----------------------------------------------------------
// displayAvg()
// Displays the computed average test score.
// Pre-conditions : average has been calculated.
// Post-conditions: prints average to console.
// -----------------------------------------------------------
void displayAvg(double average)
{
     // use fixed format
    cout << fixed << setprecision(1); 
    cout << "The average score is " << average << "." << endl;
}

/* ==== OUTPUT =============================================
Enter 5 test scores

Enter student #1:  1
Enter student #2:  2
Enter student #3:  3
Enter student #4:  4
Enter student #5:  5

The average score is 3.0.
//======================================================= */