// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_4B_2 – Deep Copy of Struct Using Pointers
// =============================================================================
// Description:
// This program creates a dynamic Person struct, then uses a deep copy function
// to duplicate it into a new memory location. It demonstrates how modifying the
// copy does not affect the original.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Person struct holds basic attributes: name (string) and age (int)
struct Person{
    string name;
    int age;
};

//function prototypes
Person* deepCopyPerson(Person* p1);

// ==== main ===================================================================
//
// Demonstrates dynamic allocation of a Person struct, performs a deep copy,
// modifies the copy, and shows that the original remains unchanged.
// =============================================================================
int main(){
    Person* p1 = new Person; // Dynamically allocate a new Person object on the heap

    // Assign name and age to the original person
    p1->name = "Kyle Yuen";
    p1->age = 19;

    // Perform a deep copy: create a new struct and copy data from p1
    Person* p2 = deepCopyPerson(p1);

    // Display both original and copied person data before modification
    cout<<"Original person: "<<p1->name<<", Age: "<<p1->age<<endl;
    cout<<"Copied person: "<<p2->name<<", Age: "<<p2->age<<endl;

    // Modify the copied person’s data to prove independence from original
    cout<<"\nModifying copied person...\n\n";
    p2->name = "Tianzi Zheng";
    p2->age = 18;

    // Display both again to show original is unaffected
    cout<<"Original person: "<<p1->name<<", Age: "<<p1->age<<endl;
    cout<<"Copied person: "<<p2->name<<", Age: "<<p2->age<<endl;

    // Free dynamically allocated memory for person 1 and 2
    delete p1;
    delete p2;
}
// =============================================================================


// ==== deepCopyPerson =========================================================
// Allocates a new Person struct and copies data from the given Person pointer.
// Ensures that the copy lives at a different memory location (deep copy).
//
// Input:  p1 - pointer to the original Person struct
// Output: p2 - pointer to a new Person struct with copied values
// =============================================================================

Person* deepCopyPerson(Person* p1){
    Person* p2 = new Person; // Allocate new Person struct on heap

    // Copy name and age from the original to the new struct
    p2->name = p1->name;
    p2->age = p1->age;

    // Return pointer to the new (deep-copied) Person
    return p2;
}
// =============================================================================

/* ================================ Output ===================================

Original person: Kyle Yuen, Age: 19
Copied person: Kyle Yuen, Age: 19

Modifying copied person...

Original person: Kyle Yuen, Age: 19
Copied person: Tianzi Zheng, Age: 18

============================================================================= */