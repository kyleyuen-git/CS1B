#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int part2(){
    const int ROWS = 3;
    int const COLS = 3;

    int nums[ROWS][COLS] = {1,2,3,4,5,6,7,8,9};
    
    string fileName = "Num2.txt";

    fstream outFile(fileName, ios::out);

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j< COLS; j++){
            outFile << setw(8) << nums[i][j];
        }

        outFile << endl;
    }
    outFile.close();

    return 0;
}