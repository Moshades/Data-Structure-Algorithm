#include<iostream>
using namespace std;

// Outputs max of list of integers
// First value indicates list size
// Ex: 4 -1 9 0 3 yields 9
int main() {
    int maxSoFar;
    int currValue;
    int listSize;
    int i;
    cin >> listSize;
    for (i = 0; i < listSize; ++i) {
        cin >> currValue;
        if (i == 0) { // First iteration
        maxSoFar = currValue;
        }
        else if (currValue > maxSoFar) {
        maxSoFar = currValue;
        }
    }
    if (listSize > 0) {
    cout << "Max: " << maxSoFar << endl;
    }
return 0;
}