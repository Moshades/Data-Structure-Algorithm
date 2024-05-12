#include<iostream>
using namespace std;

void findMax(int* p, int N)
{
    int i;
    for(i = 1; i < N; i++){
        if(*p < *(p + i))
            *p = *(p + i);
    }
    cout << "The max value is: " << *p;
}

int main()
{
    int i, N;
    int* p;
    cout << "Enter the number of value: ";
    cin >> N;

    // Allocate memory for array and assign its pointer
    p = (int*)calloc(N, sizeof(int));

    // Condition for no memory allocated
    if (p == NULL){
        cout << "No memory allocated \n";
        exit(0);
    }

    for(i = 0; i < N; i++){
        cout << "Enter the value number " << i + 1 << ": ";
        cin >> *(p + i);
    }
    
    findMax(p, N);
    return 0;
}
