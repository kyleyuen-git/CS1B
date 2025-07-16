#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int SIZE = 10;
    int numbers[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    fstream file;
    file.open("numbers.txt", ios::out | ios::binary); 

    cout<<"Writing the data to the file.\n";

    // writes the contents of the arry to the file
    file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
    
    file.close();

    file.open("numbers.txt", ios::in | ios::binary);

    cout << "Now reading the data back into memory.\n";

    file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    //Display the contents of the array
    for (int i = 0; i < SIZE; i++)
        cout << numbers[i] << " ";
    cout << endl;

    file.close();
    return 0;
}