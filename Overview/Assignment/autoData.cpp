#include<iostream>
using namespace std;

int main()
{
    int currC;
    double currF;
    for (currC=-10;currC<=40;currC+=5){
        currF = currC * 1.8 + 32;
        cout << currC << " C is " << currF << " F." <<'\n';
    }
    return 0;
}