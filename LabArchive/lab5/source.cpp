#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Vehicle{
    int id;
    string model;
    int year;
    Vehicle* next;
};

void insertVehicle(Vehicle*& head);
void displayList(Vehicle* head);

int main(){
    char answer = 'Y';
    Vehicle* head = nullptr;

    while(toupper(answer) == 'Y'){
        insertVehicle(head);
        cout<<"\nInsert another vehicle (Y or N)? ";
        cin>>answer;
    }

    cout<<"Here is the list of vehicles:\n";
    displayList(head);

    return 0;
}
// ======================================================


// ==== insertVehicle() =================================
void insertVehicle(Vehicle*& head){ // & is very important to update head list 
    Vehicle* temp = new Vehicle();

    cout<<"Enter ID: ";
    cin>>temp->id;

    cin.ignore();
    cout<<"Enter Model: ";
    getline(cin, temp->model);

    cout<<"Enter Year: ";
    cin>>temp->year;

    temp->next = head;
    head = temp;
}
// ======================================================


// ==== displayList() ===================================
void displayList(Vehicle* head){
    Vehicle* temp = head;

    while(temp != nullptr){
        cout<<"\nThe vehicle's id is: "<<temp->id<<endl;
        cout<<"The vehicle's model is: "<<temp->model<<endl;
        cout<<"The vehicle's year is: "<<temp->year<<endl;

        temp = temp->next;
    }
}
// ======================================================


// ==== deleteVehicle() ===================================
void deleteVehicle(Vehicle* head){
    Vehicle* lead = head; // not new Vehicle();
    Vehicle* follow = head; // not new Vehicle();

    int idNum;

    cout<<"Enter the ID of the vechicle to be deleted: ";
    cin>>idNum;

    //lead != nullptr condition goes first?
    while(lead != nullptr && lead->id != idNum){  
        follow = lead;
        lead = lead->next;
    }

    // Traverse the list looking for ID 11 (in the lab handout this was in the 
    // while loop above but that didn't make sense to me)
    while (lead != nullptr && lead->id != 11) {
        follow = lead;
        lead = lead->next;
    }

    // I realize the lab doesn't ask us to delete any middle or head nodes, just the last node?
    if(lead->next == nullptr){
        if(lead->id == idNum){
            follow->next = nullptr;
            delete lead;
        }
        else{
            cout<<"Not in the list.\n";
        }
    }
}