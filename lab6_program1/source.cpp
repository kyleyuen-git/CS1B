#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream dataFile;
    double number = 17.816392;

    dataFile.open("values.txt", ios::out);

    dataFile << fixed;

    dataFile<<number<<endl;

    dataFile<<setprecision(2);

    dataFile<<number<<endl;

    cout<< "Data has been written to file.\n";

    dataFile.close();

    return 0;
}