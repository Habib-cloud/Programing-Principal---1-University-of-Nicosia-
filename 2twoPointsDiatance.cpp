// MD Habibur Rahman
/*Write a program that prompts the user to enter two points (x1,y1) and
(x2,y2) and display their distance.*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x1, x2, y1, y2;

    // asking the user for value and getting user input
    cout << "Please enter the value of x1: ";
    cin >> x1;
    cout << "Please enter the value of x2: ";
    cin >> x2;
    cout << "Please enter the value of y1: ";
    cin >> y1;
    cout << "Please enter the value of y2: ";
    cin >> y2;

    // calculation and print the result
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << d << endl;

    return 0;
}