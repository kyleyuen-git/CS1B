// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_4 – Add One Day to a Valid Date Using struct
// =============================================================================
// Description:
// This program prompts the user for a valid date (month, day, year),
// validates the input (treating all months as 30 days), adds one day,
// and displays tomorrow’s date in MM/DD/YYYY format. The user can repeat.
// =============================================================================
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


// ==== Struct Definition ======================================================
struct Date{
    int month;
    int day;
    int year;
};

// ==== Function Prototypes ====================================================
void getDate(Date& today);
bool isDateValid(Date today);
void addOneDay(Date& today);
void displayTomorrow(Date today);


// ==== main ===================================================================
//
// Includes the program loop, calling input, validation, calculation, and output.
// =============================================================================
int main(){
    char again;

    do{
        system("cls"); // clear screen (works on Windows, though i use a mac)

        Date today;

        // Get and validate input
        getDate(today);

        // Add one day to today
        addOneDay(today);

        // Display new date
        displayTomorrow(today);

        // Ask user if they want to run it again
        cout << "\nDo it again? (Y/N): ";
        cin >> again;
        

    }
    while (again == 'Y' || again == 'y'); //loop to repeat

}


// ==== getDate ===============================================================
// Prompts user for month, day, and year and validates using isDateValid().
// Repeats until a valid date is entered.
// =============================================================================
void getDate(Date& today){
    bool validEntry = false; // holds false/true valid entries  

    do{
        // Prompt user for full date in MM/DD/YYYY format
        cout<<"Enter today's date in the following order:\n MM/DD/YYYY (Month, Day, Year)\n";
        // Input month
        cout << "\nMonth: ";
        cin >> today.month;

        // Input day
        cout << "Day: ";
        cin >> today.day;

        // Input year
        cout << "Year: ";
        cin >> today.year;

        // Check if the entered date is valid using helper function
        validEntry = isDateValid(today);

        // If not valid, display error message and repeat
        if(validEntry == false){
            cout << "\nInvalid entry.\n";
        }
    }
    while(validEntry==false);
}// end of getDate()
// =============================================================================


// ==== isDateValid ===========================================================
// Returns true if month is 1–12, day is 1–30, and year > 2019.
// Assumes all months have 30 days.
// =============================================================================
bool isDateValid(Date today){
    // Check that month is between 1 and 12,
    // day is between 1 and 30,
    // and year is greater than 2019
    if(today.month >= 1 && today.month <= 12 && today.day >= 1 && today.day <= 30 && today.year > 2019){
        return true;
    }
    else{
        return false;
    }
}// end of isDateValid()
// =============================================================================



// ==== addOneDay ==============================================================
// Adds one day to the given date, updating month and year if needed.
// =============================================================================
void addOneDay(Date& today){
    today.day++; // Add one day

    // If day exceeds 30, roll over to next month
    if (today.day == 31){
        today.day = 1;       // Reset day to 1
        today.month++;       // Move to next month

        // If month exceeds 12, roll over to next year
        if (today.month == 13){
            today.month = 1; // Reset month to January
            today.year++;    // Advance year
        }
    }
} // end of addOneDay()
// =============================================================================



// ==== displayTomorrow =======================================================
// Displays the date in MM/DD/YYYY format using setw and fill.
// =============================================================================
void displayTomorrow(Date today){
    cout << "\nAfter adding one day to today’s date, tomorrow’s date is ";

    cout << setfill('0') << setw(2) << today.month << "/"; //cout.fill('0') adds unintended characters 
                                                           //so instead, i am using setfill('0')
    cout << setfill('0') << setw(2) << today.day << "/";
    // Print year as-is
    cout << today.year << "." << endl;
}// end of displayTomorrow()
// =============================================================================



/* ================================ Output ===================================

sh: cls: command not found
Enter today's date in the following order:
 MM/DD/YYYY (Month, Day, Year)

Month: 12
Day: 30 
Year: 2020

After adding one day to today’s date, tomorrow’s date is 01/01/2021.

Do it again? (Y/N): y
sh: cls: command not found
Enter today's date in the following order:
 MM/DD/YYYY (Month, Day, Year)

Month: 1 
Day: 20
Year: 2020

After adding one day to today’s date, tomorrow’s date is 01/21/2020.

Do it again? (Y/N): 

============================================================================= */