/*Write a function that calculates and displays the factorial of a number.
The number is passed as an argument to this function. Call your function
from main. Don’t forget user data validation! */

#include <iostream>
#include <math.h>
using namespace std;

// declaring the function
void Factorial(int n);

int main()
{
    int num;

    // print enter the value
    cout << "Enter a number for Factorial: ";
    // getting user input
    cin >> num;

    // checking if the number is valid or not
    if (num < 0)
    {
        cout << "\nInvalid input!\n";
        return 0;
    }

    // function calling
    Factorial(num);

    return 0;
}

// in this function section calculating the factorial
void Factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    // displaying the result
    cout << "Factorial of " << n << " = " << fact << endl;
}
