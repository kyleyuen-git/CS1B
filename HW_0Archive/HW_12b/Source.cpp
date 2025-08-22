// ===========================================================
// Programmer : Kyle Yuen
// Class : CS 1B
// Instructor : Med Mogasemi
// ===========================================================
// Program : HW_12b – STL vector – City List Manipulation
// ===========================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm> // for std::swap
#include <vector>
using namespace std;

int main()
{
    // Declare a vector of city names 
    vector<string> cities;
 
    // Add three cities to the vector 
    cities.push_back("Venice");
    cities.push_back("Paris");
    cities.push_back("Dublin");

    // Display via subscript operator 
    cout << "Output the vector using a for loop and the subscript operator:\n";
    for (size_t i = 0; i < cities.size(); ++i) // i from 0 to size()-1
    {
        cout << cities[i] << "\n"; // print the i-th city
    }
    cout << "\n";

    // Display via iterator 
    cout << "Output the vector using a for loop and iterator:\n";
    for (vector<string>::iterator it = cities.begin(); it != cities.end(); ++it)
    {
        cout << *it << "\n"; // print city pointed to by it
    }
    cout << "\n";
 
    // Display in reverse via reverse iterator 
    cout << "Output the vector in reverse order using a for loop and reverse iterator:\n";
    for (vector<string>::reverse_iterator rit = cities.rbegin(); rit != cities.rend(); ++rit)
    {
        cout << *rit << "\n"; // print city pointed to by rit
    }
    cout << "\n";

    // Show number of cities 
    cout << "# of cities: " << cities.size() << "\n\n";

    // Show the second city 
    cout << "The second city on the vector is " << cities[1] << ".\n\n";

    // Swap first and second cities, then display result 
    cout << "Now swapping the first city with the second city.\n\n";
    // std::swap exchanges values at indices 0 and 1
    swap(cities[0], cities[1]); 
    cout << "Now the second city is " << cities[1] << ".\n";

    return 0;
}

/* ==== OUTPUT =============================================

Output the vector using a for loop and the subscript operator:
Venice
Paris
Dublin

Output the vector using a for loop and iterator:
Venice
Paris
Dublin

Output the vector in reverse order using a for loop and reverse iterator:
Dublin
Paris
Venice

# of cities: 3

The second city on the vector is Paris.

Now swapping the first city with the second city.

Now the second city is Venice.

//======================================================= */