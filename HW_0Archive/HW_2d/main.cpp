// Attached: HW_2abcd
// File: HW_2d.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_2d – Student Grades Using 2D Arrays and File Input
// =============================================================================
// Description:
// This program reads student letter grades from a file into a 2D array,
// then displays all grades and calculates each student’s GPA and the
// average GPA for each subject. The grades are stored as characters and 
// converted to GPA points for computation.
// =============================================================================


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Constants
const int STUDENTS = 5;
const int SUBJECTS = 3;

// Function Prototypes
bool loadGrades(char grades[STUDENTS][SUBJECTS], const string& filename);
void displayAllGrades(char grades[STUDENTS][SUBJECTS]);
double calcStudentGPA(const char grades[], int numSubjects);
void displayStudentGPAs(char grades[STUDENTS][SUBJECTS]);
void displaySubjectAverages(char grades[STUDENTS][SUBJECTS]);

int convertGradeToPoints(char grade);

// ==== main ===================================================================
//
// Controls flow: loads file, displays grades, student GPAs, and subject GPAs.
// =============================================================================
int main() {
    char grades[STUDENTS][SUBJECTS];

    if (!loadGrades(grades, "grades.txt")) {
        cout << "Error opening the file.\n";
        return 1; // I am kind of confused if we return 1 or 0.
    }

    cout << "All Grades\n\n";
    displayAllGrades(grades);

    cout << "\nStudent GPAs\n\n";
    displayStudentGPAs(grades);

    cout << "\nAverage GPA by Subject\n\n";
    displaySubjectAverages(grades);

    return 0;

} // end of main()
// =============================================================================



// ==== loadGrades =============================================================
// Reads grades from file into 2D char array.
// Input: grades array, filename
// Output: true if file read successfully, false otherwise
// =============================================================================
bool loadGrades(char grades[STUDENTS][SUBJECTS], const string& filename) {
    ifstream inFile(filename);
    if (inFile.fail()){
        cout<<"Error opening the file.\n";
        return 0;
    }

    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SUBJECTS; j++) {
            inFile >> grades[i][j];
        }
    }

    inFile.close();
    return true;
} // end of loadGrades()
// =============================================================================



// ==== displayAllGrades =======================================================
// Displays all grades in a formatted table.
// Input: 2D array of letter grades
// Output: formatted display of grades
// =============================================================================
void displayAllGrades(char grades[STUDENTS][SUBJECTS]) {
    cout << left << setw(10) << "Student"
         << setw(10) << "English"
         << setw(10) << "History"
         << setw(10) << "Math" << endl;

    for (int i = 0; i < STUDENTS; i++) {
        cout << left << setw(10) << ("#" + to_string(i + 1));
        for (int j = 0; j < SUBJECTS; j++) {
            cout << setw(10) << grades[i][j];
        }
        cout << endl;
    }
} // end of displayAllGrades()
// =============================================================================



// ==== convertGradeToPoints ===================================================
// Converts letter grade to GPA points.
// Input: grade as char
// Output: grade point value
// =============================================================================
int convertGradeToPoints(char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'F': return 0;
        default: return 0;
    }
} // end of convertGradeToPoints()
// =============================================================================



// ==== calcStudentGPA =========================================================
// Calculates GPA for one student.
// Input: array of 3 grades
// Output: GPA as a double
// =============================================================================
double calcStudentGPA(const char grades[], int numSubjects) {
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += convertGradeToPoints(grades[i]);
    }
    return static_cast<double>(total) / numSubjects;
} // end of calcStudentGPA()
// =============================================================================



// ==== displayStudentGPAs =====================================================
// Displays each student’s GPA.
// Input: 2D array of letter grades
// Output: GPA per student
// =============================================================================
void displayStudentGPAs(char grades[STUDENTS][SUBJECTS]) {
    cout << fixed << showpoint << setprecision(2);

    for (int i = 0; i < STUDENTS; i++) {
        double gpa = calcStudentGPA(grades[i], SUBJECTS);
        cout << "Student #" << (i + 1) << "  " << gpa << endl;
    }
} // end of displayStudentGPAs()
// =============================================================================



// ==== displaySubjectAverages ================================================
// Calculates and displays average GPA for each subject.
// Input: 2D array of letter grades
// Output: average GPA per subject
// =============================================================================
void displaySubjectAverages(char grades[STUDENTS][SUBJECTS]) {
    cout << fixed << showpoint << setprecision(2);

    string subjects[SUBJECTS] = {"English", "History", "Math"};

    for (int col = 0; col < SUBJECTS; col++) {
        int total = 0;
        for (int row = 0; row < STUDENTS; row++) {
            total += convertGradeToPoints(grades[row][col]);
        }
        double avg = static_cast<double>(total) / STUDENTS;
        cout << left << setw(10) << subjects[col] << avg << endl;
    }
} // end of displaySubjectAverages()
// =============================================================================



/* ================================== Output ===================================
All Grades

Student   English   History   Math      
#1        A         A         B         
#2        C         C         F         
#3        C         D         B         
#4        B         A         C         
#5        B         A         B         

Student GPAs

Student #1  3.67
Student #2  1.33
Student #3  2.00
Student #4  3.00
Student #5  3.33

Average GPA by Subject

English   2.80
History   3.00
Math      2.20
*/