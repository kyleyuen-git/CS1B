#include "Book.h"

int main(){
    int bookIsbn{};
    string bookTitle{};

    //memory is first allocated on the STACK so we don't need delete operator 
    //if Book * b1 = nullptr; was done first, we would need delete operator

    // allocating memory on the STACK
    Book book1; //calling a default constructor
    Book book2(222, "Harry the Crazy", 19.99);

    // allocating memory on the HEAP
    Book * b1 = nullptr;
    Book* b2 = nullptr;

    b1 = &book1;
    b2 = &book2;

    cout<<"Book #1: \n";
    b1->displayBook(); // instead of b1.displayBook();
    
    cout<< "Enter the book isbn: ";
    cin>> bookIsbn;

    cout<<"Enter the Book title: ";
    cin.ignore();
    getline(cin, bookTitle);

    b1->setIsbn(bookIsbn); //
    b1->setTitle(bookTitle); //


    cout<<"\n\nBook #1 after the \"set\" function:\n";
    b1->displayBook(); //

    cout<<"For Book #2 ISBN is " << b2->getIsbn()<<".\n\n"; //

    bookTitle = b2->getTitle(); //

    cout<<"For Book #2 The title is "<< bookTitle<<endl<<endl;

    system("pause");


    return 0;
}