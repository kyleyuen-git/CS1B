#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class FeetInches
{
private:
    int feet;
    int inches;
    void simplify();

public: 
    FeetInches(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
        void simplify();
    }
    
    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(int i)
    {
        inches = i;
    }
    
    int getFeet()const
    {
        return feet;
    }

    int getInches()const
    {
        return inches;
    }

    FeetInches operator+(const FeetInches&);
    FeetInches operator-(const FeetInches&);

    FeetInches operator++();
    FeetInches operator++(int);

    bool operator>(const FeetInches&);
    bool operator<(const FeetInches&);
    bool operator==(const FeetInches&);

    friend ostream& operator<<(ostream&, const FeetInches&);
    friend istream& operator>>(istream&, FeetInches&);

};

void FeetInches::simplify()
{
    if(inches>=12)
    {
        feet = feet + inches/12;
        inches = inches%12;
    }
    else if (inches < 0)
    {
        feet -= (abs(inches)/12);
        inches = (abs(inches)%12);
    }
}

FeetInches FeetInches::operator+(const FeetInches& right)
{
    FeetInches temp;

    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;

    simplify();

    return temp;
}

FeetInches FeetInches::operator-(const FeetInches& right)
{
    FeetInches temp;

    temp.inches = inches - right.inches;
    temp.feet = feet - right.feet;

    simplify();

    return temp;
}

FeetInches FeetInches::operator++() // pre
{
    ++inches;
    simplify();

    return *this;
}

FeetInches FeetInches::operator++(int) // post
{
    inches++;
    simplify();

    return *this;
}

bool FeetInches::operator>(const FeetInches& right)
{
    bool status;
    if(feet>right.feet)
    {
        status = true;
    }
    else if (feet == right.feet && inches > right.inches)
    {
        status = false;
    }
    else
    {
        status = false;
    }
    return status;
}

bool FeetInches::operator<(const FeetInches& right)
{
    bool status;
    if(feet<right.feet)
    {
        status = true;
    }
    else if (feet == right.feet && inches < right.inches)
    {
        status = false;
    }
    else
    {
        status = false;
    }
    return status;
}

bool FeetInches::operator==(const FeetInches& right)
{
    bool status;

    if (feet == right.feet && inches == right.inches)
    {
        status = true;
    }
    else{
        status = false;
    }
    return status;
}

ostream& operator<<(ostream& out, const FeetInches& obj)
{
    out<<obj.feet<<" feet, " << obj.inches << " inches.";
    return out;
}

istream& operator>>(istream& in, FeetInches& obj)
{
    cout << "Feet: ";
    in>>obj.feet;

    cout << "Inches: ";
    in>>obj.inches;
    
    obj.simplify();

    return in;
}

int main()
{
    FeetInches first, second;

    cout<< "Enter a distance in feet and inches.\n";
    cin>>first;

    cout<<"\nEnter another distance in feet and inches.\n";
    cin>>second;

    cout<<"\nThe values you entered are:\n\n";

    cout<< first << " and "<< second << endl << endl;

    if(first > second)
    {
        cout<< "The first is longer than the second.\n\n";
    }
    else if(first == second)
    {
        cout<< "Both are the same.\n\n";
    }
    else
    {
        cout<< "The second is longer than the first.\n\n";
    }

    cout<<"Adding first to second " << first + second << endl << endl;

    cout<<"Subtracting second from first " << first - second << endl << endl;

    cout<< "Pre-Increment first " << ++first << endl << endl;

    cout<< "Pre-Increment second " << ++second << endl << endl;

    cout<< "Post-Increment first " << first++ << endl << endl;

    cout<< "Post-Increment second " << second++ << endl << endl;

    return 0;

}