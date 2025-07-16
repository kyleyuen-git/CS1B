#include "Student.h"
#include "UnderGrad.h"
#include "Grad.h"
using namespace std;

int main()
{
    // ==================== part 8_1a ====================
    Student s1; // default: 0, "", 0
    Student s2(100, "Tom P. Lee", 12); // overloaded

    cout << "Here is student #1:\n";
    s1.displayRecord();

    cout << "\nHere is student #2:\n";
    s2.displayRecord();


    s1.setID(100);
    s1.setName("John Lee Hooker");
    s1.setUnits(15);

    cout<<"\nHere is student #1 after the set functions:\n";
    s1.displayRecord();

    // ==================== part 8_2a ====================
    UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
    Grad grad(101, "Jim Jones", 12, "PHD");

    underGrad.displayRecord();
    grad.displayRecord();
}