// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_10a – Max Template Function
// ===========================================================
// Description:
// Demonstrates the use of the max() template function
// from <algorithm>. Compares pairs of values of
// various types (int, char, double) and prints the greater.
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm> // for std::max
using namespace std;

//==========================================
// Description:
// This program uses the "max" template function.
// It returns the greater of two values.
//==========================================

int main()
{
    // Compare two integers
    cout<<"The greater value of 1 and 2 = "<< max(1,2)<<endl;

    // Compare two integers in reverse order
    cout<<"The greater value of 2 and 1 = "<< max(2,1)<<endl;

    // Compare two characters
    cout<<"The greater value of 'a' and 'z' = "<< max('a','z')<<endl;

    // Compare two floating-point values
    cout<<"The greater value of 3.14 and 2.72 is = "<< max(3.14,2.72)<<endl;

    return 0;
}

/* 
  Does max() work with std::string?
  Yes. std::max is a template that relies on the '<' operator.
  Since std::string defines lexicographical comparison via '<',
  max<string>(a, b) correctly returns the lexicographically greater string.
*/

/* ==== OUTPUT =============================================
The greater value of 1 and 2 = 2
The greater value of 2 and 1 = 2
The greater value of 'a' and 'z' = z
The greater value of 3.14 and 2.72 is = 3.14
//======================================================= */
