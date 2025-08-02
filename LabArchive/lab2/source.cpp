//lab code 1111

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int num[5]{ 2,7,11,15 };
    int target = 26;

    for(int firstNum = 0; firstNum<5; firstNum++){
        for(int secondNum = firstNum+1; secondNum<5; secondNum++){
            if((num[firstNum]+num[secondNum])==target){
                cout<<"The location for sum to target is: arr["
                <<firstNum<<","<<secondNum<<"]"<<endl;
            }
        }
    }
}

