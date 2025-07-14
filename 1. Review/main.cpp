#include <iostream>
#include <iomanip>
using namespace std;

void add(int& a, int& b){
    a = a+100;
    b = b+100;
}
bool sad(){
    int num = 0;
    cout<<"write a number 1 or 2: "<<endl;
    cin>>num;

    if(num == 1){
        return false;
    }
    return true;
}
bool happy(){
    return false;
}

int strange(int x, int y){
    if (x>y)
    return x+y;
    else
    return x-y;
}
enum Day { 
    MONDAY = 5, 
    TUESDAY = 2, 
    WEDNESDAY = 3, 
    THURSDAY = 6, 
    FRIDAY = 4 
};

void compoundInterest(){
    int years = 0;
    float principle = 0;
    float interest = 0;
    float interestDollar = 0;

    cout<<"How many years do you want to compound? ";
    cin>>years;
    cout<<"What is your starting amount? ";
    cin>>principle;
    cout<<"Interest per year? ";
    cin>>interest;

    for(int i = 0; i<years; i++){
        interestDollar = interestDollar + (principle * interest);
        principle = principle + (principle * interest);
    }

    cout<<"\nYour interest is: "<<interestDollar<<endl;
    cout<<"Your new amount is "<<principle<<endl;
}

int main(){
    compoundInterest();

    /*
    cout<<"hello world"<<endl;
    int a{3};
    int b = 4;
    add(a,b);
    cout<<setprecision(2);
    cout<<a<<"\n"<<b;


    return 0;

    if(sad()){
        cout<<"You choose 2"<<endl;
    }

    cout<<strange(4,5)<<endl;

    char president[20] = "Abe Lincoln";
    char secondHalf[14];
    cout<<president[2]<<endl;
    cout<<president[3]<<endl;
    cout<<president[4];

    cout<<president<<endl;
    secondHalf = "wertyui";
    cout<<secondHalf<<endl;

    Day day1, day2;
    day1 = TUESDAY;        // day1 = 1
    day2 = day1 + 1;       // day2 = 2 (WEDNESDAY)
    cout << day2;          // Outputs the **integer value** 2

    if (FRIDAY > MONDAY)
        cout << "Friday is greater than Monday.\n";
    else
        cout << "Monday is greater than Friday.\n";
    return 0;


    */

}