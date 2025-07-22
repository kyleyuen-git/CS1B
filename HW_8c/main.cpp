

#include "Student.h"
#include "UnderGrad.h"
#include "Grad.h"
using namespace std;



int main()
{
    UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
    Grad grad(101, "Jim Jones", 12, "PHD");

    underGrad.displayRecord();
    grad.displayRecord();

    grad.setUnits(15);

    cout<<"\nAfter changing grad units from 12 to 15."<<endl;
    grad.displayRecord();

    return 0;
}
// =====================================================================

/* ================================ Output ===================================



============================================================================= */