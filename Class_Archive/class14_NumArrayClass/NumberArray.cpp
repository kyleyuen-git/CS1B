#include "NumberArray.h"

NumberArray::NumberArray(int s) {
    arrayPointer = nullptr;
    arrayPointer = new double[s];
    size = s;
}

NumberArray::~NumberArray() {
    if (arrayPointer != nullptr) {
        delete[] arrayPointer;
        arrayPointer = nullptr;
    }
}

void NumberArray::setCell(int c, double val) {
    if (arrayPointer != nullptr && c >= 0 && c < size) {
        arrayPointer[c] = val;
    } else {
        cout << "Invalid cell number.\n";
        exit(EXIT_FAILURE);
    }
}

double NumberArray::getCell(int cellNum) {
    if (cellNum < 0 || cellNum >= size) {
        cout << "Invalid cell number.\n";
        exit(EXIT_FAILURE);
    }
    return arrayPointer[cellNum];
}

double NumberArray::getAverage() {
    double total{};
    for (auto i = 0; i < size; i++) {
        total += arrayPointer[i];
    }
    return total / size;
}


double NumberArray::getHighest()
{
    double highest = arrayPointer[0];
    for(int i = 0; i<size; i++)
    {
        if(arrayPointer[i]>highest)
        {
            highest = arrayPointer[i];
        }
    }
    return highest;
}

double NumberArray::getLowest()
{
    double lowest = arrayPointer[0];
    for(int i = 0; i<size; i++)
    {
        if(arrayPointer[i]<lowest)
        {
            lowest = arrayPointer[i];
        }
    }
    return lowest;
}
