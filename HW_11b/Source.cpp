// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_3b – Sorted List (Array-Based Implementation)
// =============================================================================
// Description:
// This program uses an array-based implementation of a Sorted List. 
// Users can insert integers in sorted order and delete them using a binary search.
// =============================================================================

# include "SortedList.h"

// Function Prototypes
void showMenu(); // Displays the menu options
char getChoice(); // Reads and returns user’s menu choice

int main()
{
    SortedList list; // Create an empty list object
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
            {
                cout<<"The list is full - cannot insert the number.\n";
            }
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
            {
                cout<<"The list is empty.\n";
            }
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
Enter a number: 23
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 2
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 7
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 12
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 1
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 0
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 10
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: x
Current list: 0 1 2 7 10 12 23 



Example 2:

a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 3
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 2
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: a
Enter a number: 1
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: b
Enter the number to be deleted: 2
a) Insert a number into the sorted list.
b) Delete a number from the sorted list.
x) Exit.

Enter your choice: x
Current list: 1 3 
*/