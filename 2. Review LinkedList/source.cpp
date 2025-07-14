#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Node{
    int Value;
    Node* Next;
};

void printLinkList(Node* N);

int main(){

    Node* Head = new Node(); //allocates memory for Node Head
    Node* Second = new Node();
    Node* Third = new Node();

    Head->Value = 1; // Store value for Head
    Head->Next = Second; // Link to Second Node

    Second->Value = 2; // Store value for Second Node
    Second->Next = Third; // Link to Third Node

    Third->Value = 3; // Store value for Third Node
    Third->Next = NULL; // Last Node points to NULL

    printLinkList(Head);

}

void printLinkList(Node* N){
    while(N != NULL){ // checks if Node* N is Null, NOT IF THE NEXT NODE IS NULL (doesn't exist)
        cout<<N->Value<<endl;
        N = N->Next;
    }
}