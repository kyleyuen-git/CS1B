#include "UnsortedList.h"


void insertItem(UnsortedList& list, int);
void deleteItem(UnsortedList& list, int);

int main()
{
    UnsortedList list;

    int number{};
    int id{};
    char answer{};

    cout<<"Inserting items.\n";

    cout<<"How many ID numbers to insert?\n";

    cin>>number;

    if(number>0)
    {
        for(int i = 0; i < number; i++)
        {
            cout<<"Please enter the id: ";
            cin>>id;

            insertItem(list, id);
        }
    }
    else
    {
        cout<<"Number must be greater than zero.\n";
    }

    cout<<"Displaying the list.\n";
    list.displayList();

    cout<<"Would you like to delete an item? ";
    cin>>answer;

    while(toupper(answer)=='Y')
    {
        cout<<"Please enter the id to delete: ";
        cin>>id;

        deleteItem(list, id);

        if(list.isEmpty())
        {
            break;
        }

        cout<<"Would you like to delete another? ";
        cin>>answer;
    }

    cout<<"\nFinal display.\n";
    list.displayList();

    return 0;
}

void insertItem(UnsortedList& list, int id)
{
    if(!list.isFull())
    {
        list.insertItem(id);
    }
}

void deleteItem(UnsortedList& list, int id)
{
    if(!list.isEmpty())
    {
        list.deleteItem(id);
    }
    else
    {
        cout<<"\nThe list is empty.\n";
    }
}


/*
UnsortedList list;

    cout << "Insert 2 ID numbers.\n";

    if(!list.isFull())
    {
        list.insertItem(23);
    }

    if(!list.isFull())
    {
        list.insertItem(55);
    }

    cout<<"Displaying the list.\n";

    list.displayList();

    if(!list.isEmpty())
    {
        list.deleteItem(12345);
    }

    if(!list.isEmpty())
    {
        list.deleteItem(23);
    }

    cout<< "\nDisplaying the list after deleting.\n";

    list.displayList();

    return 0;
    */