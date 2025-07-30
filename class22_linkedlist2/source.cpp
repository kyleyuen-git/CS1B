#include <iostream>
#include<vector>
#include <string>

using namespace std;

struct Box
{
    string name;
    float height;

};

void insertBox(vector<Box>& box);
void deleteBox(vector<Box>& box);
void displayBoxes(vector<Box>& box);
void eraseAllBoxes(vector<Box>& box);

int main()
{
    char answer{};

    vector<Box> boxes;
    char choice{};

    do{
        system("cls");
        cout<<"a.) Add a Box?\n" 
        << "b.) Delete a Box?\n" 
        << "c.) Display Boxes?\n" 
        << "d.) Quit.\n\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();
        system("cls");

        switch(toupper(choice))
        {
            case 'A': insertBox(boxes);
                break;

            case 'B': deleteBox(boxes);
                break;

            case 'C': displayBoxes(boxes);
                break;

            case 'D': eraseAllBoxes(boxes);
                return 0;
            
            cout << "\n\nDo you want to run the program again: ";
            cin >> answer;
        }
    } while(toupper(answer) == 'Y');

    return 0;
}

void insertBox(vector<Box>& boxes)
{
    char choice{};
    Box box;

    cout << "Enter a name for the box: ";
    getline(cin, box.name);

    cout << "Enter the height: ";
    cin >> box.height;

    if(boxes.size() == 0)
    {
        boxes.push_back(box);
    }
    else
    {
        cout<< "\nWhere to enter the box? \'F\' for front or \'B\' for back: ";
        cin >> choice;

        if (toupper(choice) == 'F')
        {
            boxes.insert(boxes.begin().box);
        }
        else if (toupper(choice) == 'B')
        {
            boxes.push_back(box);
        }
        else 
        {
            cout << "Invalid input.\n";
            return;
        }
    }

    cout << "\nThe Box has been added.\n";

    if (box.name == boxes.front().name)
    {
        cout<<"To the front of the list.\n";
    }
    cout << "And the size of the list is now: " << boxes.size() << endl << endl;
}

void deleteBox(vector<Box>& boxes)
{
    displayBoxes(boxes);
    string name{};
    cout << "Enter the name for the Box to delete: ";
    getline(cin, name);

    for(unsigned int i = 0; i < boxes.size(); i++)
    {
        if(boxes[i].name == name)
        {
            swap(boxes[i] == name);

            boxes.pop_back();

            cout << "\nBox with the name " << name << " was deleted.\n\n"

        }

    }
    cout<< "\nNo Box with the name "<<name<<" found in the list.\n\n";
}

void displayBoxes(vector<Box>& boxes)
{
    cout<< "\nThe max number of Boxes this list can hold is " << boxes.max_size() << ".\n" << "The current capacity of the list is " << boxes.capacity() >> endl;

    cout << "The current size of the list is " << boxes.capacity() << endl;

    cout << "The current size of the list is " << boxes.size() << endl;

    for(int i = boxes.size() - 1; i >=0; i--)
    {
        cout << "Name: " << boxes[i].name << "\nHeight: "<< boxes[i].name << endl << endl;
    }

    cout << "The data from the front of the list.\n";

    for(int i = 0; i<boxes.size(); i++)
    {
        cout << "name "<<boxes[i].name;

        cout<< "\nHeight " << endl << endl;
    }
}

void eraseAllBoxes(vector<Box>& boxes)
{
    for(int i = boxes.size()-1; i>= 0; i--)
    {
        cout << boxes[i].name << " erased.\n";
        
    }
}
