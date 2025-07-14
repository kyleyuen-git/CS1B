//Lab Code: 9876

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 2;
const int COLS = 5;

void getNumbers(int numbers[ROWS][COLS]);
void showNumbers(int numbers[ROWS][COLS]);
void addRows(int numbers[ROWS][COLS]);
int highest(int numbers[ROWS][COLS]);
int lowest(int numbers[ROWS][COLS]);

int main(){

    int numbers[ROWS][COLS] = {0};
    int highestNumber = 0;
    int lowestNumber = 0;

    getNumbers(numbers);
    showNumbers(numbers);
    addRows(numbers);
    highestNumber = highest(numbers);
    lowestNumber = lowest(numbers);
    cout<<"The highest number in the array is: "<<highestNumber<<"\n\n";
    cout<<"The lowest number in the array is: "<<lowestNumber<<"\n\n";
    
}

void getNumbers(int numbers[ROWS][COLS]){
    for(int rows = 0; rows<ROWS; rows++ ){
        for(int cols = 0; cols<COLS; cols++){
            cout << "Enter number in position (" << rows + 1 << ", " << cols + 1 << "): ";
            cin>>numbers[rows][cols];
        }
    }
    cout<<"\n\n---------------------------------------\n\n";
}

void showNumbers(int numbers[ROWS][COLS]){
    cout<<"Here is what you entered: \n\n";
    for(int rows = 0; rows<ROWS; rows++ ){
        for(int cols = 0; cols<COLS; cols++){
            cout<<setw(5)<<numbers[rows][cols];
        }
        cout<<"\n";
    }
    cout<<"\n\n---------------------------------------\n\n";
}

void addRows(int numbers[ROWS][COLS]){
    for(int rows = 0; rows<ROWS; rows++ ){
        int total = 0;
        for(int cols = 0; cols<COLS; cols++){
            total = total + numbers[rows][cols];
        }
        cout<<"Total for row "<<rows+1<<" is: "<<total<<"\n";
    }
    cout<<"\n\n---------------------------------------\n\n";
}

int highest(int numbers[ROWS][COLS]){
    int highest = numbers[0][0];
    for(int rows = 0; rows<ROWS; rows++ ){
        for(int cols = 0; cols<COLS; cols++){
            if(highest<numbers[rows][cols]){
                highest = numbers[rows][cols];
            }
        }
    }
    return highest;
}

int lowest(int numbers[ROWS][COLS]){
    int lowest = numbers[0][0];
    for(int rows = 0; rows<ROWS; rows++ ){
        for(int cols = 0; cols<COLS; cols++){
            if(lowest>numbers[rows][cols]){
                lowest = numbers[rows][cols];
            }
        }
    }
    return lowest;
}


/* ================================== Output ===================================
Enter number in position (1, 1): 1
Enter number in position (1, 2): 2
Enter number in position (1, 3): 3
Enter number in position (1, 4): 4
Enter number in position (1, 5): 5
Enter number in position (2, 1): 6
Enter number in position (2, 2): 7
Enter number in position (2, 3): 8
Enter number in position (2, 4): 9
Enter number in position (2, 5): 10


---------------------------------------

Here is what you entered: 

    1    2    3    4    5
    6    7    8    9   10


---------------------------------------

Total for row 1 is: 15
Total for row 2 is: 40


---------------------------------------

The highest number in the array is: 10

The lowest number in the array is: 1
*/