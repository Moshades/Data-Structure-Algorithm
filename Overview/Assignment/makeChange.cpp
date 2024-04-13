// Compute the change in half-dollars, quarters, dimes, nickels, pennies
// equivalent to change in cents
#include<iostream>
using namespace std;

const int CENTS_PER_HALF = 50;
const int CENTS_PER_QUARTER = 25;
const int CENTS_PER_DIME = 10;
const int CENTS_PER_NICKEL = 5;

int main()
{
    int cents, halves;
    int quarters, dimes;
    int nickels, pennies;
    int remain;

    cout << "Enter the change in cents: ";
    cin >> cents;
    cout << cents << " cents" << endl;

    halves = cents / CENTS_PER_HALF;
    remain = cents % CENTS_PER_HALF;
    quarters = remain / CENTS_PER_QUARTER;
    remain = remain % CENTS_PER_QUARTER;
    dimes = remain / CENTS_PER_DIME;
    remain = remain % CENTS_PER_DIME;
    nickels = remain / CENTS_PER_NICKEL;
    pennies = remain % CENTS_PER_NICKEL;

    cout << "The change after calculating: "
        << halves << " half-dollars, "
        << quarters << " quarters, "
        << dimes << " dimes, "
        << nickels << " nickels, "
        << pennies << " pennies, "
        << endl;

    return 0;
}