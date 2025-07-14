#include <iostream>
#include "Student.h"

// void getRecord(Student& student);
// void showStudent(Student& student);

const int SIZE = 3;

int main(){
    // Student student_1;
    // Student student_2 = {1234, "Kyle Yuen", 3.7};

    // cout<<"Data for student_1: \n";
    // showStudent(student_1);

    // cout<<"Data for student_2: \n";
    // showStudent(student_2);

    // getRecord(student_1);

    // cout<<"Data for new student_1: \n";
    // showStudent(student_1);

    //----------------------------------------------------

    // Student students[SIZE];
    // cout<<"Enter: "<<SIZE<<" stduent data.\n";

    // for(int i = 0; i<SIZE; i++){
    //     cout<<"# "<<i+1<<":";
    //     cout<<"ID: ";
    //     cin>>students[i].id;
    //     cin.ignore();
    //     cout<<"Name: ";
    //     getline(cin, students[i].name);
    //     cout<<"GPA: ";
    //     cin>>students[i].gpa;
    // }
    // cout<<"\n";

    // for(int i = 0; i<SIZE; i++){
    //     cout<<"# "<<i+1<<":";
    //     cout<<"ID: "<<students[i].id<<endl;
        
    //     cout<<"Name: "<<students[i].name<<endl;
        
    //     cout<<"GPA: "<<students[i].gpa<<endl;
       
    // }

    //----------------------------------------------------

    // Student* ptr = new Student(); //allocating in the heap
    // Student* s2 = new Student(123, "kyle", 3.3);

    // cout << "DATA for student ptr.\n";

    // cout << "ID: " << ptr->id << endl; //using ptr->id instead of (*ptr).id but they do the same thing
    // cout<< "Name: "<<ptr->name<<endl;

    // cin>>ptr->id;
    // getline(cin, ptr->name);

    //----------------------------------------------------
    Student s1;
    Student s2 = {123, "Kyle", 2.2};


    return 0;
}

// void getRecord(Student& student_1){
//     cout<<"Enter id: "<<endl;
//     cin>>student_1.id;

//     cin.ignore();

//     cout<<"Enter name: ";
//     getline(cin, student_1.name);

//     cout<<"Enter gpa: ";
//     cin>>student_1.gpa;
// }


// void showStudent(Student& student_1){
//     cout<<"Student 1: \n"
//     <<"ID: "<<student_1.id<<endl
//     <<"Name: "<<student_1.name<<endl
//     <<"GPA: "<<student_1.gpa<<endl;
// }