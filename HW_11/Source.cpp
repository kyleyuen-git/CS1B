# include "UnsortedList.h"

void showMenu();
char getChoice();

int main()
{
    UnsortedList list;
    char choice;
    
    do{
        showMenu();
        choice = getChoice();
        if(choice == 'a')
        {
            if(!list.isFull())
            {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cin.ignore();
                list.insertItem(num);
            }
            else
                cout<<"The list is full - cannot insert the number.\n";
        }
        else if (choice == 'b')
        {
            if(!list.isEmpty())
            {
                int num;
                cout << "Enter the number to be deleted: ";
                cin >> num;
                cin.ignore();
                list.deleteItem(num);
            }
            else
                cout<<"The list is empty.\n";
        }
    } while(choice != 'x');
    
    list.printList();
}

void showMenu() {
    cout << "a) Insert a number into the sorted list.\n"
         << "b) Delete a number from the sorted list.\n"
         << "x) Exit.\n";
}

char getChoice() {
    char choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cin.ignore();
    return choice;
}

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