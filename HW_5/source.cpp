// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_5 – Linked List of Boxes with Add/Delete/Clear Functions
// =============================================================================
// Description:
// This program allows the user to enter box specifications into a linked list. 
// The user may view the list, delete a box by ID, and create a new list repeatedly.
// Each box is stored as a node in a singly linked list using dynamic memory.
// =============================================================================


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib> // for system("cls")
using namespace std;

// ==== Struct Definition ======================================================
// Struct Box contains box attributes (ID, width, height, length) and pointer
// to the next node in the linked list.
// =============================================================================
struct Box{
    int ID;
    float width;
    float height;
    float length;
    Box* next;
};

// function prototypes
void addBox(Box*& Head, int& Count);
void showList(Box* Head);
void deleteBox(Box*& head, int& count);
void clearList(Box*& head);


// ==== main ===================================================================
//
// Controls the overall loop of the program. Allows the user to input box data,
// display the list, delete a box, clear memory, and repeat if desired.
// =============================================================================
int main(){

    char anotherList = 'N'; // Y to repeat and create a new list

    do{
        Box* Head = nullptr; // if set to new Box(), it will zero-intialize a new box and show up in showList()
        int Count = 0; // tracks number of boxes in inventory
        char answer = 'Y'; // response to display list prompt

        // Introduction & prompt
        cout<<"\nEnter the specifications of different types of boxes.\n";
        cout<<"Include the number of boxes presently in inventory.\n";
        cout<<"Enter boxes - (-1 to quit):\n\n";

         // Add boxes to the linked list
        addBox(Head, Count);

        // Ask if user wants to view the list
        cout << "\nWould you like to see the list of boxes (Y/N)? ";
        cin >> answer;
        if (toupper(answer) == 'Y') { // toupper() changes input char to uppercase
            system("clear"); // or "cls" on window, but doesn't really work for me...
            showList(Head);
        }

        //deletes the requested box
        deleteBox(Head, Count);

        system("clear"); // or "cls" on window, but doesn't really work for me...

        //shows list after deleting the box
        showList(Head);

        //clears the entire list for the next set of boxes
        clearList(Head);

        //ask to make another set of boxes
        cout<<"\nWould you like to make another list of boxes (Y/N)? ";
        cin>>anotherList;

    }while(toupper(anotherList) == 'Y'); // only runs if user says 'Y' to make another box
}
// =============================================================================



// ==== addBox =================================================================
// Repeatedly adds Box nodes to the beginning of the linked list. The loop ends
// when the user enters -1 as the ID number.
//
// Input:  Head - reference to head pointer of linked list
//         Count - reference to the box count variable
// =============================================================================
void addBox(Box*& Head, int& Count){
    while(true){
        // Allocate a new Box node on the heap
        Box* temp = new Box();

        // Prompt user for box ID
        cout << "ID Number: ";
        cin >> temp->ID;
        if (temp->ID == -1) { // If value -1 is entered, stop input
            delete temp; // frees up allocated memory for temp when done 
            break;
        }
        
        // Prompt for dimensions
        cout << "width:  ";
        cin >> temp->width;
        cout << "height: ";
        cin >> temp->height;
        cout << "length: ";
        cin >> temp->length;

        // Link current box to the front of the list
        temp->next = Head; // Head address(0x1000) set to temp->next (points to head)
        Head = temp; // Head address set to currrent box address(0x2000)

        Count++; // increment count of boxes by 1
        cout<<"\n";
    }
}
// =============================================================================



// ==== showList ===============================================================
// Displays the list of boxes in a formatted table by traversing the linked list.
//
// Input:  Head - pointer to the head of the linked list
// =============================================================================
void showList(Box* Head){
    cout << "\nTypes of boxes:\n\n";
    cout << " ID#     Width     Height     Length\n";
    cout << "-----------------------------------------\n";
    while(Head != nullptr){ // only run if Head has values 
        cout << setw(4) << Head->ID << "    "
             << fixed << setprecision(2)
             << setw(6) << Head->width << "    "
             << setw(6) << Head->height << "    "
             << setw(6) << Head->length << "\n";
        Head = Head->next; // set Head to next box's address
        // I know it is bad practice to be traversing the list with Head instead of a temp pointer
        // so if I were to do this again I would create a Box* temp = head and do temp = temp->next;
    }
}
// =============================================================================



// ==== deleteBox ==============================================================
// Searches for a box node by ID and deletes it from the list if found. 
// Updates the list links and reduces the box count accordingly.
//
// Input:  head - reference to head pointer of list
//         count - reference to box count variable
// =============================================================================
void deleteBox(Box*& head, int& count){

    Box* lead = head; // lead pointer scans through the list
    Box* follow = nullptr; // follow pointer trails behind lead
    int deleteID = 0; // ID to search for

    // if head is empty, exit function because this would be useless 
    if(!head){
        cout<<"There are no boxes in the list\n";
        return;
    }

    // Prompt for ID to delete
    cout<<"\n\nEnter the ID of the box to be deleted: ";
    cin>>deleteID;

    //search for matching id 
    while(lead!= nullptr && lead->ID != deleteID){ // run until we find ID or lead hits the end (nullptr)
        // follow moves forward one, then lead moves forward one
        follow = lead; // follow takes lead's address
        lead = lead->next; // then lead takes the address of its next node
    }

    // if lead is nullptr, it has hit the end without finding the matching id
    if(lead==nullptr){
        cout << "\nID #" << deleteID << " not found in inventory.\n";
        return;
    } 
    if (follow){ //follow is initialized to nullptr (because it is in back of the first box, lead)
                 // we run if follow is not null because we know id is not the first one
        follow->next = lead->next; // link previous node to node after removed node
        delete lead; // delete current box(lead)
    }
    else{
        head = lead->next; // removed node was the head
    }
    

    --count; // decrease count 
    cout << "\nDeleted box #" << deleteID << ". Inventory now has " << count << " boxes.\n";

}
// =============================================================================



// ==== clearList ==============================================================
// Deallocates all memory in the list by deleting each node.
// Resets head to nullptr after clearing.
//
// Input:  head - reference to head pointer of list
// =============================================================================
void clearList(Box*& head) {
    while (head) { // only run if head != nullptr and thus a list exists
        Box* tmp = head; // store current node
        head = head->next; // move head forward through list 
        delete tmp; // delete current node
    }
}
// =============================================================================


/* ================================ Output ===================================
***I COMMENTED OUT CLS IN ORDER TO SHOW FULL OUTPUT***

Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit):

ID Number: 101
width:  12
height: 13
length: 14

ID Number: 102
width:  14
height: 15
length: 16

ID Number: 103
width:  12 
height: 14
length: 55

ID Number: -1

Would you like to see the list of boxes (Y/N)? y

Types of boxes:

 ID#     Width     Height     Length
-----------------------------------------
 103     12.00     14.00     55.00
 102     14.00     15.00     16.00
 101     12.00     13.00     14.00


Enter the ID of the box to be deleted: 102

Deleted box #102. Inventory now has 2 boxes.

Types of boxes:

 ID#     Width     Height     Length
-----------------------------------------
 103     12.00     14.00     55.00
 101     12.00     13.00     14.00

Would you like to make another list of boxes (Y/N)? y

Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit):

ID Number: 201
width:  12 
height: 13
length: 15

ID Number: 202
width:  12
height: 14
length: 15

ID Number: 203
width:  10
height: 19
length: 18

ID Number: -1

Would you like to see the list of boxes (Y/N)? y

Types of boxes:

 ID#     Width     Height     Length
-----------------------------------------
 203     10.00     19.00     18.00
 202     12.00     14.00     15.00
 201     12.00     13.00     15.00


Enter the ID of the box to be deleted: 203

Deleted box #203. Inventory now has 2 boxes.

Types of boxes:

 ID#     Width     Height     Length
-----------------------------------------
 202     12.00     14.00     15.00
 201     12.00     13.00     15.00

Would you like to make another list of boxes (Y/N)? n

============================================================================= */