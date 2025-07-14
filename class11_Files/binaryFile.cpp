#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int part3(){
    const int SIZE = 5;

    char data[SIZE] = {1,2,3,4,5};

    fstream file;

    file.open("num.bin", ios::out | ios::binary);

    cout<< "Writing to the binary file.\n";

    // file.write(data, sizeof(data));
    file.write(reinterpret_cast<char*>(data), sizeof(data)); // if data was not an array, you would need to 
                                                             //add an & because the input needs to be an address

    file.close();

    file.open("num.bin", ios::in | ios::binary);

    cout<<"Now reading from the file.\n";

    // file.read(data, sizeof(data));
    file.read(reinterpret_cast<char*>(data), sizeof(data));

    for(int i = 0; i<SIZE; i++){
        cout<<data[i]<<"\t";
    }

    cout<< endl;

    file.close();

    return 0;
}