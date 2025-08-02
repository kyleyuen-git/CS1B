#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int ROWS = 3;
const int COLS = 5;

void getScore(double[][COLS]);
double getTotalScore(double[][COLS]);
double getClassAverage(double[][COLS]);
double getTotalStudent(double[][COLS], int );
double getAverageStudent(double[][COLS], int );
double getLowestScoreStudent(double[][COLS], int );
double getHighestScoreStudent(double[][COLS], int );

int main(){
    double test[ROWS][COLS] = {0};
    cout<<fixed<<setprecision(2);

    getScore(test);

    cout<<"\nThe class average is: " << getClassAverage(test)<<endl;

    cout<<"\nThe average for student #1 is: " << getAverageStudent(test, 0)<<endl;
    cout<<"\nThe average for student #2 is: " << getAverageStudent(test, 1)<<endl;
    cout<<"\nThe average for student #3 is: " << getAverageStudent(test, 2)<<endl;

    cout<<"The lowest score for students #1 is "<<getLowestScoreStudent(test, 0)<<endl;
    cout<<"The lowest score for students #2 is "<<getLowestScoreStudent(test, 1)<<endl;
    cout<<"The lowest score for students #3 is "<<getLowestScoreStudent(test, 2)<<endl;

    cout<<"The highest score for student #1 is: "<<getHighestScoreStudent(test, 0)<<endl;
    cout<<"The highest score for student #2 is: "<<getHighestScoreStudent(test, 1)<<endl;
    cout<<"The highest score for student #3 is: "<<getHighestScoreStudent(test, 2)<<endl;




    // double test[2][3] = { {1,2,3},{4,5,6} };
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout<<test[i][j]<<"\t";
    //     }
    //     cout<<"\n";
    // }
    

    return 0;
    
}

void getScore(double test[][COLS]){
    cout<<"\nEnter 5 test scores for 3 students: ";
    for(int i = 0; i < ROWS; i++){
        cout<<"\nStudent #"<<i+1<<": ";
        for(int j = 0; j < COLS; j++){
            cout<<"Enter score #"<<j+1<<": ";
            cin>>test[i][j];
            }
        }
    }

double getTotalScore(double test[][COLS]){
    double total{};
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            total += test[i][j];
        }
    }
    return total;
}

double getClassAverage(double test[][COLS]){
    return getTotalScore(test)/(ROWS*COLS);

}

double getTotalStudent(double test[][COLS], int row ){
    double total{};
    for (int col = 0; col<COLS; col++){
        total += test[row][col];
    }
    return total;
}

double getAverageStudent(double test[][COLS], int row ){
    return getTotalStudent(test, row)/COLS;

}

double getLowestScoreStudent(double test[][COLS], int row ){
    double lowest = test[row][0];
    for (int col = 1; col<COLS; col++){
        if (test[row][col] < lowest)
        lowest = test[row][col];
    }
    return lowest;
}

double getHighestScoreStudent(double test[][COLS], int row ){
    double highest = test[row][0];
    for (int col = 1; col<COLS; col++){
        if (test[row][col] > highest)
        highest = test[row][col];
    }
    return highest;
}