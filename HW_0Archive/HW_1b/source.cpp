// Attached: HW_1(abcde)
// File: HW_1b.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_1b – Average Temperature Calculator
// =============================================================================
// Description:
// The program prompts the user to input temperatures from three cities,
// calculates their average using a separate function, and displays the result
// using a formatted output. It demonstrates function use with input/output 
// separation and return values.
// =============================================================================


#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void getTemps(double &temp1, double &temp2, double &temp3);
double calcAvg(double temp1, double temp2, double temp3);
void displayAvg(double avg);


// ==== main ===================================================================
//
// initializes variables, runs functions that collects input, computes average, and displays
// the result.
// =============================================================================
int main(){
    double temp1 = 0;
    double temp2 = 0;
    double temp3 = 0;

    // Get temperature inputs from the user
    getTemps(temp1,temp2,temp3);

    // Calculate the average of the three temperatures
    double avg = calcAvg(temp1,temp2,temp3);

    // Display the calculated average
    displayAvg(avg);
}// end of main()
// =============================================================================



// ==== getTemps ==============================================================
// Prompts the user to input three temperatures.
// Input: temp1, temp2, and temp3, all passed by reference
// Output: fills temp1, temp2, temp3 with user input
// =============================================================================
void getTemps(double &temp1, double &temp2, double &temp3){

    cout<<"Enter temperatures of 3 cities.\n";

    cout<<"#1: ";
    cin>>temp1;

    cout<<"#2: ";
    cin>>temp2;

    cout<<"#3: ";
    cin>>temp3;
}// end of getTemps()
// =============================================================================



// ==== calcAvg ===============================================================
// Calculates the average of three temperature values.
// Input: temp1, temp2, temp3
// Output: average of the three values
// =============================================================================
double calcAvg(double temp1, double temp2, double temp3){
    double avg = (temp1+temp2+temp3)/3;
    return avg;
}// end of calcAvg()
// =============================================================================



// ==== displayAvg ============================================================
// Displays the average temperature with one decimal precision.
// Input: average temperature
// Output: formatted average to console
// =============================================================================
void displayAvg(double avg){
    cout<<fixed<<setprecision(1);
    cout<<"\nThe average temperature is "<<avg<<" degrees."<<endl;
}// end of displayAvg()
// =============================================================================



/* ================================== Output ===================================
Enter temperatures of 3 cities.
#1: 80.1
#2: 79.2
#3: 109.39

The average temperature is 89.6 degrees.
*/