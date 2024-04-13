// Program to convert the measurement 
// from inches and feet to centimeters
#include<iostream>
using namespace std;

// set constant values
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main()
{
    int feet, inches;
    int totalInches;
    double centimeters;

    cout << "Enter lengths in feet and inches: ";
    cin >> feet >> inches;
    cout << feet << " feet(foot)"  << inches << " inch(es)" << endl;

    totalInches = INCHES_PER_FOOT * feet + inches;

    centimeters = CENTIMETERS_PER_INCH * totalInches;

    cout << "The lengths in centimeters: " << centimeters << "cm" << endl;

    return 0;
}