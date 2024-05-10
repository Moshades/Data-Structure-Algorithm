#include<iostream>
using namespace std;

void printValue(int* valuePointer)
{
    if (valuePointer == nullptr) {
        cout << "Pointer is null" << endl;
    }
    else {
        cout << *valuePointer << endl;
    }
}

int main()
{
    int someInt = 5;
    int* valPointer = nullptr;
    printValue(valPointer);
    valPointer = &someInt;
    printValue(valPointer);

    return 0;
}