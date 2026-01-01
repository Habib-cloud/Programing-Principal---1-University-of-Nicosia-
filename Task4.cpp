/*MD Habibur Rahman

Write a program to print the circumference and area of a circle of radius entered by user by
defining your own functions. */

#include <iostream>
#include <math.h>
using namespace std;

// function prototypes
double areaOfCircel(double r);
double circumferenceOfCircle(double r);

int main()
{
    double radius;

    // asking the user for input and getting user input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // checking if the value is valid or not
    if (radius <= 0)
    {
        cout << "Invalid input!";
    }

    // function calling
    double area = areaOfCircel(radius);
    double circum = circumferenceOfCircle(radius);

    // displaying the result
    cout << "\nThe area of the circle is: " << area << endl;
    cout << "\nThe circumference of the circle is: " << circum << endl;

    return 0;
}
// calculating the area in this function
double areaOfCircel(double r)
{
    const double pi = 3.14159;
    double area = pi * r * r;
    return area;
}

// calculating the circumference in this function
double circumferenceOfCircle(double r)
{
    const double pi = 3.14159;
    double circum = 2 * pi * r;
    return circum;
}