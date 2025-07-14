#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// function prototypes
void compoundInterest();

int main(){
    compoundInterest();
}

void compoundInterest(){
    int years = 0;
    float principle = 0;
    float interest = 0;
    float interestDollar = 0;

    cout<<"\nHow many years do you want to compound? ";
    cin>>years;
    cout<<"What is your starting amount? ";
    cin>>principle;
    cout<<"Interest per year? ";
    cin>>interest;

    for(int i = 0; i<years; i++){
        interestDollar = interestDollar + (principle * interest);
        principle = principle + (principle * interest);
    }

    cout<<"\nYour interest is: "<<interestDollar<<endl;
    cout<<"Your new amount is "<<principle<<endl;
}