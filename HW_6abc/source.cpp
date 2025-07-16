#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // ======================== part a ========================

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
    fileName.close();

    fileName.clear();
    // ======================== part b ========================
    fileName.open("data.txt"); // open fileName

    ofstream results("results.txt"); // ofstream used for writing to files
    while(!fileName.eof()){
        fileName>>number;
        results<<number<<"\n";
    }
    // could use:
    // while(fileName>>number){
    //     results<<number<<"\n";
    // }

    // close results
    results.close();

    cout<< "\nThe data has been written to the file.\n";

    // ======================== part c ========================
    double addNum = 0;

    // open results and specify writing and appending to "results.txt"
    results.open("results.txt", ios::out | ios::app);

    cout<< "Enter 3 more numbers:\n";
    for( int i = 0; i<3; i++)
    {
        cin>>addNum;
        results<<addNum<<"\n";
    }

    // close results
    results.close();
}