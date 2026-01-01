// MD Habibur Rahman
/*Write a program that prompts the user to enter the width w and height h of a
rectangle, along with a point (x,y). Your program is going to check if the point is
the rectangle if its horizontal distance to (0,0) is less or equal to w/2 and its
vertical distance to (0,0) is less or equal to h/2 .  */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double w, h, x, y;

    // print enter the values and getting the user input
    cout << "\nEnter width of a rectangle centered at (0, 0): ";
    cin >> w;
    cout << "Enter height of a rectangle centered at (0, 0): ";
    cin >> h;
    cout << "\nEnter first coordinate of the point: ";
    cin >> x;
    cout << "Enter second coordinate of the point: ";
    cin >> y;

    // checking this is a rectangle or not
    if ((abs(x) <= w / 2) && (abs(y) <= h / 2))
    {
        cout << "\nPoint (" << x << ", " << y << " is the rectangle." << endl;
    }
    else
    {
        cout << "\nPoint (" << x << ", " << y << ") is not the rectangle." << endl;
    }
    return 0;
}