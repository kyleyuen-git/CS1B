#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    double number = 0; 

    // fstream fileName;
    // fileName.open("data.txt" , ios::out);
    ifstream fileName("data.txt");

    if (fileName.fail())
    {
        cout<<"Error opening file! \n";
        fileName.close();
        return 1;
    }

    cout<<"Here are the numbers in the file: \n";
    while(!fileName.eof())
    {
        fileName>>number; // similar to cin, but reads in numbers from fileName instead of user
                          // assigns numbers to variable number
        cout<<number<<endl; // prints out number 
    }


}