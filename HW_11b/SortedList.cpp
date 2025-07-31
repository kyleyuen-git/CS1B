// ===========================================================
// File: SortedList.cpp
// ===========================================================

# include "SortedList.h"

// ===========================================================
// Constructor: Initializes the list to an empty state.
// ===========================================================
SortedList::SortedList() : length(0) {}

// ===========================================================
// Destructor: Default. No dynamic memory cleanup needed
// ===========================================================
SortedList::~SortedList() = default;

// item is inserted into the list using the index found by
// the binarySearch() 
// ===========================================================
// insertItem: Inserts item in sorted order using binarySearch.
// Input: item
// ===========================================================
void SortedList::insertItem(int item)
{
    int location{};
    location = binarySearch(item);

    for(int i = length; i>location; i--)
    {
        numbers[i] = numbers[i-1];
    }

    numbers[location] = item;
    length++;
}
// ===========================================================

// ===========================================================
// deleteItem: Deletes the specified item if found.
// Input: item
// ===========================================================
// item is deleted from the list uisng the index found by the
// linearSearch()
void SortedList::deleteItem(int item)
{
    int location{};

    location = linearSearch(item);

    if(location < length)
    {
        for(int i = location + 1; i < length; i++)
        {
            numbers[i-1] = numbers[i];
        }

        length--;
    }
    else
    {
        cout<<"The number is not in the list.\n\n";
    }
}
// ===========================================================

// ===========================================================
// binarySearch: Finds index of item or insertion point in average case
// of O(log n) time by dividing SORTED ARRAY in half 
// Input: num
// Output: index (int)
// ===========================================================
int SortedList::binarySearch(int num)
{
    int first{};
    int midpoint{};
    int last = length - 1;

    while(first <= last)
    {
        midpoint = (first + last)/2;
        if(numbers[midpoint] == num)
        {
            return midpoint;
        }
        // When you compare against the middle element and see it’s not what you’re looking for,
        // you know that you can exclude that middle index from all further consideration
        else if(numbers[midpoint] < num)
        {
            // num must lie to the right of mid,
            // so make first = mid+1 to drop mid and the lower half
            first = midpoint + 1;
        }
        else
        {
            // num must lie to the left of mid,
            // so make last = mid-1 to drop mid and the upper half
            last = midpoint - 1;
        }
    }

    return first;
}
// ===========================================================

// ===========================================================
// linearSearch: Finds the index where the given number
// should be deleted scanning linearly.
// ===========================================================
int SortedList::linearSearch(int num)
{
    int location{};

    // Move forward in the list until the correct spot is found
    while (location < length && numbers[location] < num) {
        ++location;
    }
    return location;
}
// ===========================================================

// ===========================================================
// isFull: Returns true if list is full.
// Output: true/false
// ===========================================================
// method must be called before the insertItem method is called
bool SortedList::isFull()
{
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
bool SortedList::isEmpty()
{
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
void SortedList::printList() const
{
    cout << "Current list: ";
    for (int i = 0; i<length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n\n";
}
// ===========================================================