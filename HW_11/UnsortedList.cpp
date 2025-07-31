// ===========================================================
// File: UnsortedList.cpp
// ===========================================================

# include "UnsortedList.h"

// ===========================================================
// Constructor: Initializes the list to an empty state.
// ===========================================================
UnsortedList::UnsortedList()
{
    length = 0; // Sets the list to an empty list
}
// ===========================================================

// ===========================================================
// Destructor: Default. No dynamic memory cleanup needed
// ===========================================================
UnsortedList::~UnsortedList() = default;

// ===========================================================
// insertItem: Inserts item at the end of the list.
// Input: item
// Output: none
// ===========================================================
void UnsortedList::insertItem(int item)
{
    numbers[length] = item; // length starts at 0
    length++; // Increase the number of items in the list
}
// ===========================================================

// ===========================================================
// deleteItem: Searches and deletes one occurrence of item.
// Input: item
// Output: Message if item not found or deleted
// ===========================================================
void UnsortedList::deleteItem(int item)
{
    int temp = length;
    for(int i = 0; i < length; i++)
    {
        if(numbers[i] == item)
        {
            // Replace this item with the last item in the list
            // This avoids shifting but loses ordering 
            // (which is okay in unsorted list)
            numbers[i] = numbers[length-1];

            // Reduce the list size
            length--;
            cout << "Item has been deleted.\n";
            break; // stop after deleting one
        }
    }
    // If length hasn't changed, item was never found
    if (temp == length)
    {
        cout << "Item is not in list.\n";
    }
}
// ===========================================================

// ===========================================================
// isFull: Returns true if list is full.
// Output: true/false
// ===========================================================
// method must be called before the insertItem method is called
bool UnsortedList::isFull()
{
    // If the number of elements equals array capacity, return true
    if(length == MAX_SIZE)
    {
        return true;
    }
    return false;
}
// ===========================================================

// ===========================================================
// isEmpty: Returns true if list is empty.
// Output: true/false
// ===========================================================
// must be called before the deleteItem method is called
bool UnsortedList::isEmpty()
{
    // If list has no elements, it's empty
    if(length == 0)
    {
        return true;
    }
    return false;
}
// ===========================================================

// ===========================================================
// printList: Outputs current contents of the list.
// Output: printed list to console
// ===========================================================
void UnsortedList::printList() const
{
    cout << "Current list: ";
    // Loop through all valid list elements
    for (int i = 0; i<length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";
}
// ===========================================================