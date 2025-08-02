// Attached: HW_1(abcde)
// File: HW_1a.pdf
// =============================================================================
//
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: HW_1a - Monthly Pay Calculator for Salesperson
// =============================================================================
// Description:
// The program prompts the user to input the monthly sales amount, 
// calculates commission based on the sales, 
// computes the total pay (including a fixed salary of $2,500), 
// and then displays the result.
// =============================================================================
// =============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
double getSalesAmt();
double calcCommission(double salesAmt);
double calcPay(double commission);
void displayPay(double salesAmt, double commission, double totalMonthlySalary);


// ==== main ===================================================================
//
// Controls overall program flow: gets input, performs calculations,
// displays output, and allows the user to repeat with a do while loop.
// =============================================================================
int main(){

    char again;

    do{
        double salesAmt = getSalesAmt();
        double commission = calcCommission(salesAmt);
        double totalMonthlySalary = calcPay(commission);
        displayPay(salesAmt,commission,totalMonthlySalary);

        cout << "\nWould you like to run the program again? (Y/N): ";
        cin >> again;
        
    } while (again == 'Y' || again == 'y');
} // end of main()
// =============================================================================



// ==== getSalesAmt ============================================================
// Prompts the user to input monthly sales amount.
// Input: none
// Output: sales amount entered by the user
// =============================================================================
double getSalesAmt(){
    cout<<"Enter monthly sales amount: $ ";
    double salesAmt = 0;
    cin>>salesAmt;
    return salesAmt;
} // end of getSalesAmt()
// =============================================================================



// ==== calcCommission =========================================================
// Determines commission amount based on sales tiers.
// Input: sales amount
// Output: calculated commission
// =============================================================================
double calcCommission(double salesAmt){
    double commission = 0;
    if (salesAmt>=50000){
        commission += salesAmt * .02;
    }
    else if ((salesAmt> 25000) && (salesAmt<50000)){
        commission += salesAmt * .015;
    }
    else{
        commission = 0;
    }
    return commission;
} // end of calcCommission()
// =============================================================================




// ==== calcPay ================================================================
// Calculates the total monthly salary (base salary + commission).
// Input: commission
// Output: total monthly salary
// =============================================================================
double calcPay(double commission){
    double totalMonthlySalary = 2500 + commission;
    return totalMonthlySalary;
} // end of calcPay()
// =============================================================================




// ==== displayPay =============================================================
// Displays a formatted summary of the salesperson’s pay.
// Input: sales amount, commission, total monthly salary
// Output: formatted output to console
// =============================================================================
void displayPay(double salesAmt, double commission, double totalMonthlySalary){
    double basePay = 2500.00;
    cout<<fixed<<setprecision(2);
    
    cout << setw(20) << left << "Monthly Sales:"     << "$" << setw(10) << right << salesAmt << endl;
    cout << setw(20) << left << "Commission:"        << "$" << setw(10) << right << commission << endl;
    cout << setw(20) << left << "Base Pay:"          << "$" << setw(10) << right << basePay << endl;
    cout << setw(20) << left << "Total Pay:"         << "$" << setw(10) << right << totalMonthlySalary << endl;
} // end of displayPay()
// =============================================================================


/* ================================== Output ===================================
Enter monthly sales amount: $ 60000
Monthly Sales:      $  60000.00
Commission:         $   1200.00
Base Pay:           $   2500.00
Total Pay:          $   3700.00

Would you like to run the program again? (Y/N): 
*/