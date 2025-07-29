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
                list.deleteItem(num);
            }
            else
                cout<<"The list is empty.\n";
        }
    } while(choice != 'x');
    
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