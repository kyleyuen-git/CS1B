// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_10c – Employee Gross Pay Calculator
// ===========================================================
// Description:
// Prompts the user to enter hours worked and hourly wage for a fixed
// number of employees, calculates each employee’s gross pay, and
// displays the results. Demonstrates use of std::vector with fixed
// size, element access, and front()/back() methods.
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    
    // Constants and vector declarations
    const int NUM_EMPLOYEES = 5;
    // Declare vector<int> hours of size NUM_EMPLOYEES
    vector<int>hours(NUM_EMPLOYEES);
    // Declare vector<double> wage of size NUM_EMPLOYEES
    vector<double>wage(NUM_EMPLOYEES);

    // Input loop: read hours and wage for each employee
    // Use vector::size() in loop condition
    cout << "Enter hours worked and hourly wage of each employee:\n\n";
    for (int i = 0; i < hours.size(); ++i)
    {
        cout << "Hours for Employee #" << i + 1 << ":  ";
        cin  >> hours[i];
        cout << "Wage for Employee #"  << i + 1 << ":  ";
        cin  >> wage[i];
    }

    // Clear screen (Windows)
    system("cls");

    // Output gross pay for each employee
    // grossPay = hours[i] * wage[i]
    cout << fixed << setprecision(2);
    cout << "Gross pay for each employee:\n\n";
    for (int i = 0; i < hours.size(); ++i)
    {
        double grossPay = hours[i] * wage[i];
        cout << setw(11) << "Employee #" << i + 1
             << setw(5)  << "$"
             << setw(7)  << grossPay << endl;
    }

    // Demonstrate vector::front() and vector::back()
    cout << "\nEmployee #1 hours = " << hours.front() << endl;
    cout << "Employee #5 hours = " << hours.back()  << endl;

    return 0;
}

/* ==== OUTPUT =============================================

Enter hours worked and hourly wage of each employee:

Hours for Employee #1:  12
Wage for Employee #1:  1
Hours for Employee #2:  2
Wage for Employee #2:  2
Hours for Employee #3:  3
Wage for Employee #3:  3
Hours for Employee #4:  4
Wage for Employee #4:  4
Hours for Employee #5:  5
Wage for Employee #5:  6

Gross pay for each employee:

 Employee #1    $  12.00
 Employee #2    $   4.00
 Employee #3    $   9.00
 Employee #4    $  16.00
 Employee #5    $  30.00

Employee #1 hours = 12
Employee #5 hours = 5

//======================================================= */