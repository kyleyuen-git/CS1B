#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // vector<int> my_vector;

    vector<int> b = {100, 200, 300, 400, 500};

    vector<int> c(20,0); // second parameter is the values

    // vector<int>::iterator it;
    // for(it = c.begin(); it != c.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    
    /*



    */
    auto it1 = c.begin() + 1;
    auto it2 = b.begin();
    auto it3 = b.begin() + 3;

    c.insert(it1, it2, it3);

    for(int i : c)
    {
        cout << i << " ";
    }

    // const int SIZE = 10;

    // vector<int> d(SIZE);

    // for (auto i : my_vector)
    // {
    //     cout << i << " ";
    // }

    // cout << endl << endl;

    // my_vector.push_back(10);

    // for(int i = 0; i<12; i++)
    // {
    //     cout << my_vector[i] << " ";
    // }

    // cout << endl << endl;

    // for (auto i : b)
    // {
    //     cout << i << " ";
    // }


    // for(int i = 0; i<12; i++)
    // {
    //     cout << my_vector[i] << " ";
    // }


    /*

    cout << "The size is "<< b.size() << "      " << b.capacity() << endl;

    b.push_back(10);
    // b.push_back(10);
    // b.push_back(10);
    // b.push_back(10);
    // b.push_back(10);

    cout << "The size is "<< b.size() << "      " << b.capacity() << endl;

    for(int i : b)
    {
        cout << b[i] << " ";
    }

    cout << endl << endl;

    cout << "Enter 5 integers.\n";

    for (auto& val : b )
    {
        cin >> val;
    }

    cout << b.at(2) << endl;

    cout << endl << endl;

    for(int i : b)
    {
        cout << b[i] << " ";
    }

    cout << endl << endl;

    for(int i = 0; i < 5; i++)
    {
        {
            b.push_back(i * 2);
        }

        return 0;
    }

    */

    // cout << endl << endl;

    // for (auto i : d)
    // {
    //     cout << i << " ";
    // }

    // cout << endl << endl;

}