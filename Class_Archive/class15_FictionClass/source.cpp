#include "Fiction.h"
#include "Fantasy.h"

int main()
{
    Book b1;
    Book b2("For I am", 10);

    Fiction f1("Mystery", "Don't know what I am talking about", 20);
    Fantasy f2("Med Moe", "Dead", 36.23);

    cout << endl << endl;
    b1.displayBook();

    cout << endl << endl;
    b2.displayBook();

    cout << endl << endl;
    f1.displayBook();

    b1.setTitle("Crazy man");
    b1.setWholeSaleCost(21.32);

    f1.setTitle("Say What");
    f1.setWholeSaleCost(9.99);

    cout << endl << endl;
    f1.displayBook();

    cout << endl << endl;

    return 0;
}
