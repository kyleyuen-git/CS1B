#include "Box.h"
#include <string>

int main(){
    Box* head = nullptr;

    Box* ptr = new Box();
    ptr->id = 12345;
    ptr -> next = head;
    head = ptr;

    Box* temp = new Box;
    temp -> id = 654132498;
    temp -> next = head;
    head = temp;

    Box* temp1 = new Box;
    temp1 -> id = 654999978;
    temp1 -> next = head;
    head = temp1;

    Box* temp2 = new Box;
    temp2 -> id = 654000098;
    temp2 -> next = head;
    head = temp2;
    
    Box* print = head;
    while(print != nullptr){
        cout<<print->id<<endl;
        print = print -> next;
    }

    cout<<endl<<endl;

    return 0;

}