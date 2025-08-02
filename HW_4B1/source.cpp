// =============================================================================
// Programmer: Kyle Yuen
// Class: CS 1B
// Instructor: Med Mogasemi
// =============================================================================
// Program: HW_4B_1 – Dynamic Array of Car Structs
// =============================================================================
// Description:
// This program allows the user to enter information about a specified number 
// of cars. It stores the cars in a dynamically allocated array of Car structs,
// then finds and displays the most expensive car.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Car struct that holds brand, modelYear, and price attributes
struct Car{
    string brand;
    int modelYear;
    float price;
};

// function prototypes
Car* createCarArray(int n);
Car* findMostExpensiveCar(Car* cars, int n);

int main(){
    int n = 0;
    cout<<"Enter number of cars: ";
    cin>>n; // n = number of cars
    cin.ignore(); // ignore the "enter" when reading the getline() for brand 

    Car* cars = createCarArray(n); // create pointer cars that we assign the car array to 
                                   //since an array IS A POINTER

    Car* mostExpensiveCar = findMostExpensiveCar(cars, n); // create a pointer that holds the address
                                                           //of the most expensive car

    // Display details of most expensive car
    cout << "Most Expensive Car:\n";
    cout << "Brand: " << mostExpensiveCar->brand << "\n";
    cout << "Model Year: " << mostExpensiveCar->modelYear << "\n";
    cout << "Price: $" << mostExpensiveCar->price << "\n";

    delete[] cars; // free memory 
    return 0;
}



// ==== createCarArray =========================================================
// Dynamically allocates an array of Car structs and populates each with user 
// input (brand, modelYear, price). Returns pointer to array.
// 
// Input:  n number of cars
// Output: Pointer to dynamically allocated Car array
// =============================================================================
Car* createCarArray(int n){
    Car* cars = new Car[n]; // allocate a new Car array on the heap to a pointer of Car struct named cars
    
    // Loop through each car and gather its details
    for(int i = 0; i<n; i++){
        cout<<"Enter details for car "<<i+1<<": \n";
        cout<<"Brand: "; // Prompt for car brand (use getline for multiple words)
        getline(cin, cars[i].brand); 

        cout<<"Model Year: "; // Prompt for model year (numeric input)
        cin>>cars[i].modelYear; 

        cout<<"Price: "; // Prompt for price (float input)
        cin>>cars[i].price;

        cout<<"\n";
        cin.ignore(); // Clear the input buffer so next getline() works correctly
    }

    return cars; // Return the pointer to the newly created car array
}
// =============================================================================



// ==== findMostExpensiveCar ===================================================
// Iterates through array to find the car with the highest price.
// 
// Input:  cars pointer to array of Car structs
//         n number of cars
// Output: Pointer to most expensive car struct in array
// =============================================================================
Car* findMostExpensiveCar(Car* cars, int n){
    // Assume the first car is the most expensive by default
    Car* mostExpensiveCar = &cars[0];

    // Loop through each car in the array
    for(int i = 0; i<n; i++){

        // Compare current car's price with current max price
        // If this car is more expensive, update the pointer
        if(mostExpensiveCar->price<cars[i].price){
            mostExpensiveCar = &cars[i];
        }
    }

    // Return pointer to the most expensive car found
    return mostExpensiveCar;
}
// =============================================================================

/* ================================ Output ===================================

Enter number of cars: 3
Enter details for car 1: 
Brand: Toyota
Model Year: 2017
Price: 33000 

Enter details for car 2: 
Brand: Honda
Model Year: 2000
Price: 10000

Enter details for car 3: 
Brand: Porche
Model Year: 2021
Price: 95000

Most Expensive Car:
Brand: Porche
Model Year: 2021
Price: $95000

============================================================================= */