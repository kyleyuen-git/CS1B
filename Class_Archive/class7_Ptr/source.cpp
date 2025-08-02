#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void getNumber(int *);
void doubleValue(int*);

int main(){
    int number{};

    getNumber(&number); //int* ptr = &number
    doubleValue(&number);
    

    int number1[5]{0};
    getNumber(number1);
    doubleValue(number1);


    cout<<"The double value is "<<number<<endl;

    return 0;

}

void getNumber(int* ptr){
    cout<<"Enter an integer: ";
    cin>>*ptr;
}


void doubleValue(int* ptr){
    *ptr*=2;
}