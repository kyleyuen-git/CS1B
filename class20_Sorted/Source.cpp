#include "SortedList.h"

// template <typename T, typename Y>
// T calcSquare(T num);

template <class T, int SIZE>

class Example
{
    T array[SIZE];
    T index;
public:
    Example(){
        index = 0;
        cout<< "Hello.\n";
    }
    void push(T item)
    {

    }
    void display(T item)
    {

    }
};

const int SIZE = 10;

int main()
{
    Example<int, SIZE> b1;


    // float num = 5.2;
    // int num1 = 3;

    // cout << "Here's what comes back from the function "<<calcSquare(num)<< endl;
    // cout << "Here's what comes back from the function "<<calcSquare(num1)<< endl;
    
    
    
     // SortedList list;

    // string name = "Bob Lee";
    // string name1 = "Moe Joe";

    // cout << "Inserting two names.\n";

    // if(!list.isFull())
    // {
    //     list.insertItem(name);
    // }
    // if(!list.isFull())
    // {
    //     list.insertItem(name1);
    // }

    // cout << "\nDisplaying the list.\n";
    // list.displayList();

    // cout<<"\nDeleting the list.\n";

    // if(!list.isEmpty())
    // {
    //     list.deleteItem(name);
    // }

    // if(!list.isEmpty())
    // {
    //     list.deleteItem(name1);
    // }

    // cout << "\nFinal display.\n";

    // list.displayList();

    return 0;
}

template<typename T>
T calcSquare(T num)
{
    return num*num;
}