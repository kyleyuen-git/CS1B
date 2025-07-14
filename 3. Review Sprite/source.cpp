#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class sprite{
    public:
    int x;
    int y;
    void printX(){
        cout<<"X is: "<<x<<endl;
    }
    void printY(){
        cout<<"Y is: "<<y<<endl;
    }
};

int main()
{
    sprite s1;
    s1.x = 50;
    s1.y = 60;

    s1.printX();
    s1.printY();

}