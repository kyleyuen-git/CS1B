#include "Book.h"

int Book::count = 0;

void comparePrices(Book& book1, Book& book2);

int main()
{
    Book book1("The Great Med", 321.23);
    Book book2("Kill CS 1B", 12.32);
    Book book3("The Death in CS 1B", 987.32);
    Book book4;
    Book book5;

    book1.printBook();

    cout<<endl;

    book2.printBook();
    
    cout<<endl;
    
    book3.printBook();
    
    cout<<endl;


    cout<<"\nThere are " << Book::getCount()<<"Books.\n\n";

    comparePrices(book1, book2);

    // if(book1.getCost() > book2.getCost()) // bad way to compare prices
    if(book1 > book2)
    {
        cout << "The price of book1 is greater than book2.\n\n";
    }
    else
    {
        cout<<"book2 is more expensive than book1.\n\n";
    }

    //if(book1.operator>(1000)) // Not correct way to compare
    if(book1 > 1000)
    {
        cout<<"\nbook1 is more than $1000\n\n";
    }
    else
    {
        cout<<"book1 is less than $1000.\n\n";
    }

    float average{ 0.0 };

    //average = (book1.getCost() + book2.getCost()) / 2.0; // Not good way

    average = (book1 + book2) / 2;

    cout<<"The average cost is "<< average << endl << endl;

    cout << "\n\nPrinting objects using the overloaded operator.\n\n";

    cout<<"\n\nObject book1: " << book1 << endl;
    cout<<"\n\nObject book2: " << book2 << endl;

    return 0;
}

void comparePrices(Book& book1, Book& book2)
{
    if(book1.cost > book2.cost)
    {
        cout << book1.title << " is more expensive than " << book2.title << endl << endl;
    }
    else if (book1.cost < book2.cost)
    {
        cout << book2.title << " is more expensive than " << book1.title << endl << endl;
    }
    else
    {
        cout<< book1.title<<" and "<<book2.title << " are equal.\n" <<endl;
    }
}