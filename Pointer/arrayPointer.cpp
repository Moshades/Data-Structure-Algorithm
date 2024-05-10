#include <iostream>
using namespace std;

int main ()
{
    int numbers[5];
    int* p;
    p = numbers; // An array name contains the address of first element of the array
    *p = 10;
    p++; // Points to the 2nd element
    *p = 20;
    p = &numbers[2]; // Points to the 3rd element
    *p = 30;
    p = numbers + 3; // Points to the 4th element
    *p = 40;
    p = numbers;
    *(p+4) = 50; // Dereferences the 5th element
    for (int n=0; n<5; n++)
        cout << numbers[n] << ", ";
    return 0;
}