//lab code: 9999
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

enum Roster{TOM = 1, SHARON, BILL, TERESA, JOHN};
void displayBirthday(Roster student);

int main(){
    int choice;

    cout<<"This program will give you a student's birthday.\n\n";

    cout << "1.) = Tom\n";
    cout << "2.) = Sharon\n";
    cout << "3.) = Bill\n";
    cout << "4.) = Teresa\n";
    cout << "5.) = John\n";
    cout << "\nWhose birthday do you want to know? ";
    cin >> choice;
    
    Roster student = static_cast<Roster>(choice); //I didn't see this in the lecture notes 
                                                  //but its the only way I know that allows you to 
                                                  //pass the object of Roster instead of an int
    displayBirthday(student);

}
void displayBirthday(Roster student){
    switch(student){
        case TOM:
        cout<<"Tom's birthday is January 3";
        break;
        case SHARON:
        cout<<"Sharon's birthday is April 22";
        break;
        case BILL:
        cout<<"Bill's birthday is May 19";
        break;
        case TERESA:
        cout<<"Teresa's birthday is July 2";
        break;
        case JOHN:
        cout<<"John's birthday is June 17";
        break;
        default: 
        cout<<"Invalid selection";
        break;
    }
}