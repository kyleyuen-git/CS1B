// ===========================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// ===========================================================
// Program: HW_11a – Unsorted List (Array-Based Implementation)
// ===========================================================
// Description:
// This program implements an UnsortedList using an array.
// The list can store up to 10 integer values in an unsorted order.
// The user can insert or delete values as long as the list is not full or empty.
// A menu is displayed in a loop until the user chooses to exit.
// ===========================================================

# include "UnsortedList.h"

// Function Prototypes
void showMenu(); // Displays the menu options
char getChoice(); // Reads and returns user’s menu choice

int main()
{
    UnsortedList list; // Create an empty list object
    char choice; // User's menu selection
    
    do{
        // Display menu and get user input
        showMenu();
        choice = getChoice();
        // insert option
        if(choice == 'a')
        {
            // Check if the list has room
            if(!list.isFull())
            {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cin.ignore(); // Clear the input buffer
                list.insertItem(num); // Insert number at the end of the list
            }
            else
                cout<<"The list is full - cannot insert the number.\n";
        }
        // delete option
        else if (choice == 'b')
        {
            // Check if the list is not empty
            if(!list.isEmpty())
            {
                int num;
                cout << "Enter the number to be deleted: ";
                cin >> num;
                cin.ignore(); // Clear input buffer
                list.deleteItem(num); // Search and delete the item
            }
            else
                cout<<"The list is empty.\n";
        }
    } while(choice != 'x'); // Exit condition
    
    // Final display of the list before exiting
    // not in the instruction but I need it to check the code works
    list.printList();
}

// ===========================================================
// showMenu: Displays menu options to the user.
// ===========================================================
void showMenu() {
    cout << "a) Insert a number into the sorted list.\n"
         << "b) Delete a number from the sorted list.\n"
         << "x) Exit.\n";
}

// ===========================================================
// getChoice: Prompts and retrieves user's menu choice.
// Output: char - the selected option
// ===========================================================
char getChoice() {
    char choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cin.ignore(); // Search and delete the item
    return choice;
}
// ===========================================================

/* Output 

Example 1:

a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 1
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 2
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 3
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 4
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 5
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 6
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 7
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 8
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 9
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 10
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
The list is full - cannot insert the number.
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: x
Current list: 1 2 3 4 5 6 7 8 9 10 

Example 2:

a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 1
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 2
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 3
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: b
Enter the number to be deleted: 2
Item has been deleted.
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: x
Current list: 1 3 

*/
// ===========================================================