//lab code 1111

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int x = 25;
    cout<< "the value of x is "<< x<< ". The location of x is "<< &x<< endl;
    //how can we see if this is a 16bit vs 32 bit machine?

    // int* ptr = NULL;
    // ptr = nullptr;
    int* ptr = &x;
    cout<< "the value of ptr is "<< *ptr<< ". The location of ptr is "<< ptr<< endl;
    //location of ptr is same as the location of what it is pointing to

    ptr = ptr + 100;
    // cout<<ptr<<"\n"<<*ptr<<endl;

    *ptr += 100;
    cout<< "the value of ptr is "<< *ptr<< ". The location of ptr is "<< ptr<< endl;

    string name = "Kyle";
    string* namepoint = &name;
    cout<<"The location of namepoint: "<<namepoint<<". The value of namepoint is: "<<*namepoint<<endl;

    int array[] = {1,2,3,4};
    int *joe = array;
    //no & when assigning a pointer to an array because an array itself IS A POINTER 
    //that points to the address of the first value in the array
    cout<<"location of array: "<<array<<". location of joe: "<<joe<<endl;


    // int array1[5] = {0};
    // int *ptr1 = array1;
    int *ptr1 = new int[5]; //ptr sits on the stack and holds the address of the int that sits on the heap
                            //new means allocating in the heap *IMPORTANT
    int*temp = ptr1;
    for(int i=0; i<5;i++){
        cout<<"Enter a value: ";
        cin>>*ptr1; //changes the value of the array in ith place
        ptr1++; //moves the location of the value of the array to i+1th place 
               //so the user can enter a value to the next value in the array
    }

    cout<<"Here are the values of the array: "<<endl;
    for(int i=0; i<5;i++){
        cout<<*temp<<"\n"; //using temp because we either need to reset the location of ptr(after the for loop above the location of ptr is at the end)
                           //or use something pointing to ptr
        temp++;
    }
    return 0;


    // memory recollection
    // int* ptr1 = new int[5];
    // int* ptr = new int;

    // delete ptr;
    // ptr = nullptr;

    // delete[] ptr1;
    // ptr1 = nullptr;
}