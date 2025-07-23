#include "UnsortedList.h"

UnsortedList::UnsortedList()
{
    length = 0;
}

UnsortedList::~UnsortedList() = default;

void UnsortedList::insertItem(int id)
{
    idNumbers[length] = id;
    length++;
}

void UnsortedList::deleteItem(int id)
{
    int location = 0;
    while(id != idNumbers[location] && location<length)
    {
        location++;
    }
    if(location<length)
    {
        idNumbers[location] = idNumbers[length-1];
        length--;
    }
    else
    {
        cout<<"Id is not in the list.\n";
    }
}

bool UnsortedList::isFull()const
{
    return(length == SIZE);
}

bool UnsortedList::isEmpty()const
{
    return (length == 0);
}

void UnsortedList::displayList()const
{
    int location = 0;
    if(location < length)
    {
        while(location < length)
        {
            cout<<idNumbers[location]<<endl;
            location++;
        }
    }
    else
    {
        cout<<"List is empty";
    }
}