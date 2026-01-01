// MD Habibur Rahman

// Write a program in C to check a given number is even or odd using the function evenOrOdd.

#include <iostream>
#include <math.h>
using namespace std;

// function prototypes
void evenOrOdd(int n);

int main()
{
    int num;

    // asking the user for input and getting user input
    cout << "Enter a number: ";
    cin >> num;

    // function calling
    evenOrOdd(num);

    return 0;
}

// Calculating the result in this function
void evenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is an even number.\n";
    }
    else
    {
        cout << n << " is an odd number.\n";
    }
}