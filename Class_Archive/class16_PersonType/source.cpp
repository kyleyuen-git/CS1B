#include "FullTime.h"
#include "PartTime.h"

int main(){
    FullTime newFull("Dave", "Smith", 75, 145000, 120000);
    PartTime newPart("Med", "Moe", 31214, 22.23, 80);

    newFull.print();
    cout<<"**************\n";
    newPart.print();

    FullTime* ptr = new FullTime("Dave", "Smith", 75, 145000, 120000);

    cout<<endl<<endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}