# include "UnsortedList.h"

// default constructor that Sets the list to an empty list
UnsortedList::UnsortedList()
{
    length = 0; // Sets the list to an empty list
}
// destructor
UnsortedList::~UnsortedList() = default;

// item is inserted into the list
void UnsortedList::insertItem(int item)
{
    numbers[length] = item; // length starts at 0
    length++;
}

// item is deleted from the list
void UnsortedList::deleteItem(int item)
{
    int temp = length;
    for(int i = 0; i < length; i++)
    {
        if(numbers[i] == item)
        {
            numbers[i] = numbers[length-1];
            length--;
            cout << "Item has been deleted.\n";
            break; // stop after deleting one
        }
    }
    if (temp == length)
    {
        cout << "Item is not in list.\n";
    }
}

// returns true if the list is full
// method must be called before the insertItem method is called
bool UnsortedList::isFull()
{
    if(length == MAX_SIZE)
    {
        return true;
    }
    return false;
}

// returns true if the list is empty
// must be called before the deleteItem method is called
bool UnsortedList::isEmpty()
{
    if(length == 0)
    {
        return true;
    }
    return false;
}

void UnsortedList::printList() const
{
    cout << "Current list: ";
    for (int i = 0; i<length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";
}