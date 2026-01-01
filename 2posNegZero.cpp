/*Description: Create a program that determines if a number is positive, negative, or zero.

Task: Ask the user to input a number. Use if statements to check if the number is positive, negative, or
zero, and display the appropriate message. */

#include <iostream>
using namespace std;

int main()
{
    int num;

    // print enter an integer and getting user input
    cout << "Enter a number: ";
    cin >> num;

    // checking the number is positive or negative or Zero
    if (num > 0)
    {
        cout << "\nThe number is Positive.\n";
    }
    else if (num < 0)
    {
        cout << "\nThe number is negative.\n";
    }
    else
    {
        cout << "\nThe number is Zero.\n";
    }

    return 0;
}