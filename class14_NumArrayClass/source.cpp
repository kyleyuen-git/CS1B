#include "NumberArray.h"

int main()
{
    int howmany{};
    double val{};

    cout<< "How many numbers do you want to store? ";
    cin>>howmany;

    NumberArray numbers(howmany);

    cout<<"\n Enter the "<<howmany<<" numbers.\n";

    for (int i = 0; i<howmany;i++)
    {
        cout<< "\tNumber "<<i+1<<": ";
        cin>>val;

        numbers.setCell(i, val);
    }

    cout<<"\n=========================================\n";
    cout<<"\nHere are the numbers you entered: \n";

    for( int i = 0; i<howmany; i++)
    {
        cout<<"Number "<< i+1<<": " <<numbers.getCell(i)<<endl;
    }

    cout<<"\n=========================================\n";
    cout<<"The average of the numbers is: ";
    cout<< numbers.getAverage();

    cout<<"\n=========================================\n";
    cout<<"The highest value of the numbers is: ";
    cout<< numbers.getHighest()<<endl<<endl;

    cout<<"\n=========================================\n";
    cout<<"The lowest value of the numbers is: ";
    cout<< numbers.getLowest()<<endl<<endl;

    return 0;
}