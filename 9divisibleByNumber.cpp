// MD Habibur Rahman
/*Write a program that prompts the user to enter an integer and determines whether
or not it is divisible by 5 and 6, whether it is divisible by 5 or 6, and whether it is
divisible by 5 or 6 but not both. Here is a sample run: */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;

    // print enter value and getting user input
    cout << "\nPlease enter an integer: ";
    cin >> a;

    cout << "\nIs " << a << " divisible by 5 and 6? ";
    // checking the number is divisible by 5 and 6 or not
    if ((a % 5 == 0) && (a % 6 == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << "\nIs " << a << " divisible by 5 or 6? ";
    // checking the number is divisible by 5 or 6
    if ((a % 5 == 0) || (a % 6 == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << "\nIs " << a << " divisible by 5 or 6, but not both? ";
    // checking the number is divisible by 5 or 6 or not
    if ((a % 5 == 0) || (a % 6 == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;

    return 0;
}