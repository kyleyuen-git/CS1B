#include <iostream>
#include <fstream>

using namespace std;
const int SIZE = 5;

void getNumbers(double[]);
void writeToFile(ofstream& outFile, double[]);
void displayFromFile(ifstream& inFile, double[]);
void displayInReverse(double[]);

int main(){
    // double score[7] {0};
    // score[0] = 45678;
    // cout<<score<<"\n"<<score[0]<<"\n";
    // cout<<sizeof(int)<<"\n";
    // int i = 0.1;
    // cout<<i;

    ofstream outFile;
    ifstream inFile;
    double value = 0;

    string file = "Numbers.txt";

    double numbers[SIZE] {0};
    cout<<"Please enter five numbers.\n";
    for(int i = 0; i < SIZE; i++){
        cout<<"Enter number #"<< i +1<<": ";
        cin>>numbers[i];
    }

    outFile.open(file);

    cout<<"\nWriting the numbers in to the file.\n";

    for(int i = 0; i<SIZE; i++){
        outFile<< numbers[i]<<endl;
    }
    cout<<"Done writing to the file!\n\n";

    outFile.close();

    cout<<"Displaying the numbers from the file. \n";

    inFile.open(file);
    if (inFile.fail()){
        cout<<"Error opening the file.\n";
        exit(1);
    }

    // while(inFile>>value){
    //     cout<<value<<endl;
    // }
    for(int i = 0; i < SIZE; i++){
        inFile>>numbers[i];
        cout<<numbers[i]<<endl;
    }
    cout<<"Displaying the values in reverse.\n";

    for(int i = SIZE - 1; i >= 0; i--){
        cout<<numbers[i]<<endl;
    }


    inFile.close();

    return 0;
}
