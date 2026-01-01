/*Objective: Calculate the sum of even numbers within a specified range.

Instructions: Prompt the user to input a start and end number. Use a for loop to
iterate through the range and calculate the sum of all even numbers. */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int startNumber, endNumber, sum = 0;

    // asking the user for the input and getting user input
    cout << "\nEnter the starting value: ";
    cin >> startNumber;
    cout << "Enter the ending value: ";
    cin >> endNumber;

    // asking the user for print the enter numbers and printing the calculation
    cout << "\nThe numbers are: ";
    for (int i = startNumber; i <= endNumber; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }

        // printing the numbers and comma after the numbers
        if (i < endNumber)
        {
            cout << i << ", ";
        }
        else
        {
            cout << i << endl;
        }
    }
    cout << "\nThe summation of these numbers is: " << sum << endl;
}