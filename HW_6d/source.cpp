#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Cat
{
    char name[20];
    int age;
};

int main()
{
    Cat cat;
    int count = 0;

    fstream critters("critters.bin", ios::out | ios::app);

    cout<<"Enter 3 cat records. \n";
    
    while(count<=3)
    {
        cout<<"Enter information about a cat:\n";
        cout<<"NAME: ";
        
        cout<<"AGE: ";
        cin>>cat.age;
        cin.ignore();
        
        critters<<cat.name<<"\n"<<cat.age<<"\n";
    }

    cout<<"Record written to file.";
}