#include "SortedList.h"

SortedList::SortedList(){ length = 0;}
SortedList::~SortedList(){}

void SortedList::insertItem(string item)
{
    int location{};
    location = binarySearch(item);

    for(int i = length; i>location; i--)
    {
        names[i] = names[i-1];
    }

    names[location] = item;
    length++;
}

void SortedList::deleteItem(string item)
{
    int location{};

    location = linearSearch(item);

    if(location < length)
    {
        for(int i = location + 1; i < length; i++)
        {
            names[i-1] = names[i];
        }

        length--;
    }
    else
    {
        cout<<"The name is not in the list.\n\n";
    }

}

bool SortedList::isFull()
{
    // same as if (length == SIZE){return true;}
    return(length == SIZE);
}

bool SortedList::isEmpty()
{
    return(length == 0);
}

int SortedList::binarySearch(string item)
{
    int first{};
    int midpoint{};
    int last = length - 1;

    while(true)
    {
        if(first>last)
        {
            return first;
        }
    }

    midpoint = (first+last)/2;

    if(item == names[midpoint])
    {
        return midpoint;
    }
    else if(item > names[midpoint])
    {
        first = (midpoint + 1);
    }
    else if (item < names[midpoint])
    {
        last = (midpoint - 1);
    }
}

/*
// another defintion of binarySearch(string item)

int SortedList::binarySearch(string item)
{
    int first{};
    int midpoint{};
    int last = length - 1;

    while(first <= last)
    {
        int midpoint = (first + last) / 2;

        if(item == names[midpoint])
        {
            return midpoint; // Item found at midpoint
        }
        else if(item > names[midpoint])
        {
            first = (midpoint + 1); // search in the right half
        }
        else // item < names[midpoint]
        {
            last = (midpoint - 1); // search in the left half
        }
    }
    
    // Item not found - return the position where it should be inserted
    return first;
}
*/

int SortedList::linearSearch(string item)
{
    int location{};

    while((item>names[location])&&(location < length))
    {
        location++;
    }
    return location;
}

void SortedList::displayList()
{
    for(int i = 0; i < length; i++)
    {
        cout << names[i] << endl;
    }

}