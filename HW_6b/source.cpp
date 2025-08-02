#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    double number = 0;
    ifstream data("data.txt"); // ifstream used for reading files
    if (data.fail()){
        cout<<"opening data file failed.\n";
        data.close();
    }
    
    ofstream results("results.txt"); // ofstream used for writing to files
    while(!data.eof()){
        data>>number;
        results<<number<<"\n";
    }

    cout<< "The data has been written to the file.\n";

}