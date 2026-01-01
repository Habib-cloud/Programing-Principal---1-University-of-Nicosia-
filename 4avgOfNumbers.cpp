/* Objective: Calculate the average of numbers using a while loop.

Instructions: Continuously prompt the user to enter numbers until they enter 0.
Use the loop to calculate the sum and then determine the average of the entered
numbers (excluding the negative value).*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number = 1, count = 0;
    double avg, sum = 0;
    // print enter the numbers
    cout << "Enter the numbers: \n";
    cin >> number;
    // getting user input and collect the summation
    while (number != 0)
    {
        sum = sum + number;
        count++;
        cin >> number;
    }

    // checking if the numbers are enterd or not and printing the calculation
    if (count > 0)
    {
        avg = sum / count;
        cout << "\nThe average of these numbers is: " << avg << endl;
    }
    else
    {
        cout << "\nNo numbers are entered.\n";
    }
    return 0;
}