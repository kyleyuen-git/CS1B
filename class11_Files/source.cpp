#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int part1(){
    fstream dataFile;
    string fileName = "Numbers.txt";

    dataFile.open(fileName, ios::out);

    cout << "Now Writing to the file.\n";

    dataFile << "Bob Jones\n";
    dataFile << "Med Mogasemi\n";
    dataFile << "Joe Smith\n";
    dataFile << "Dave Davis\n";

    dataFile.close(); // if you are writing to a file, close it and open it again before reading it 

    cout << "Opening the file again.\n";

    dataFile.open(fileName, ios::out | ios::app);

    dataFile << "Billy Joe\n";

    dataFile.close();

    fstream dataOut(fileName, ios::in);

    if(dataOut.fail()){
        cout<<"Error.\n\n";
        exit(1);
    }

    string line{};

    while(getline(dataOut,line, '$')){
        cout<<line<<endl;
    }

    dataOut.close();

    return 0;
}