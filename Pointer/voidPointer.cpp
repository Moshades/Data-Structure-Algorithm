// increase the value pointed by a pointer
#include<iostream>
using namespace std;

void increase(void* data, int psize)
{
    // if psize is the size of a char
    if (psize == sizeof(char))
    {
        char* pchar;
        pchar = (char*)data;
        ++(*pchar);
    }
    // if psize is the size of a int
    else if (psize == sizeof(int))
    {
        int* pint;
        pint = (int*)data;
        ++(*pint);
    }
}
int main()
{
    char a = 'x';
    int b = 1602;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));
    cout << a << "," << b << '\n';
    return 0;
}