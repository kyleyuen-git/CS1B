#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//IMPORTANT: struct needs to be above ALL code including function prototypes
struct MovieData{
    string Title;
    string Director;
    int Released;
    int RunningTime;
};

void getData(MovieData& Mov);
void displayData(const MovieData& Mov); //IMPORTANT: const for display functions 

int main(){
    MovieData Mov1;
    MovieData Mov2;

    getData(Mov1);
    cout<<"\n";
    getData(Mov2);

    cout<<"\n\n";
    
    displayData(Mov1);
    cout<<"\n";
    displayData(Mov2);
}

void getData(MovieData& Mov){
    cout<<"\nTitle: ";
    getline(cin, Mov.Title); //IMPORTANT: use getline() for string reading
    cout<<"\nDirector: ";
    getline(cin, Mov.Director); //IMPORTANT: use getline() for string reading
    cout<<"\nReleased: ";
    cin>>Mov.Released;
    cout<<"\nRunning Time: ";
    cin>>Mov.RunningTime;
    cin.ignore();
}

void displayData(const MovieData& Mov){
    cout<<"\nTitle: "<<Mov.Title;
    cout<<"\nDirector: "<<Mov.Director;
    cout<<"\nReleased: "<<Mov.Released;
    cout<<"\nRunning Time: "<<Mov.RunningTime<<" minutes";
}

/* ================================ Output ===================================

Title: Fantastic Mr Fox

Director: Wes Anderson

Released: 2006

Running Time: 200


Title: Spiderman

Director: Jon Faverou

Released: 2018

Running Time: 160 



Title: Fantastic Mr Fox
Director: Wes Anderson
Released: 2006
Running Time: 200 minutes

Title: Spiderman
Director: Jon Faverou
Released: 2018
Running Time: 160 minutes

============================================================================= */