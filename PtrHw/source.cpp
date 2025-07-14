#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main(){

    const int ROWS = 5, COLS = 10;
    int arr[ROWS][COLS] = {0}; //i populated the array with 0s but you can assign it with 50 actual values

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            // Use pointer notation to access element
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }

}