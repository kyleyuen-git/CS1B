#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ch{};
    int num{ 5 };

    fstream file("Num3.txt", ios::in);

    file.seekg(num, ios::beg);  // Move 5 bytes from the beginning
    file.get(ch);
    cout << "Byte 5 from beginning is: " << ch << endl;

    file.seekg(-9L, ios::end);  // Move 10 bytes back from the end
    file.get(ch);
    cout << "10th byte from the end is: " << ch << endl;

    file.seekg(-9L, ios::cur);  // Move 10 bytes back from current
    file.get(ch);
    cout << "10th byte from the current is: " << ch << endl;

    return 0;
}
