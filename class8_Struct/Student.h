#pragma once
#include <string>
using namespace std;

struct Student{
    int id;
    string name;
    double gpa;

    //constructor
    Student(){
        id = 0;
        name = "Crazy Bob";
        gpa = 1.2;
        cout<<"\nKyle is alive\n\n";
    }

    Student(int id, string name, float gpa){
        //this operator refers to the current object
        this->id = id;
        this->name = name;
        this->gpa = gpa;
        cout<<"\nMaybe he is alive\n\n";
    }

    ~Student(){ //destructor deallocates memory
        cout<<"\nKyle is dead\n\n";

    }
};
