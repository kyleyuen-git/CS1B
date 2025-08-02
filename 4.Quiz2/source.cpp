class MyClass {
    int value;

public:
    MyClass(int v)
    {
        value = v;
    }

    MyClass add(int val)
    {
        value += val;
        return *this;
    }

    MyClass multiply(int val)
    {
        value *= val;
        return *this;
    }

    int getValue()
    {
        return value;
    }
};

#include <iostream>
using namespace std;

int main()
{
    MyClass m(10);
    m.add(10).multiply(5);

    cout << m.getValue() << endl;   // prints 20 with this version
    return 0;
}
