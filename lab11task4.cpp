/*Write a calculator program using a function that takes 3 parameters: two
operands and one operator. Perform all necessary data validations. */

#include <iostream>
#include <math.h>
using namespace std;

// declaring the function
void calculator(double a, double b, char c);

int main()
{
    double x, y;
    char ch;

    // print enter the first number
    cout << "Enter the first number: ";
    // getting user input
    cin >> x;
    // print enter the second number
    cout << "Enter the second number: ";
    // getting user input
    cin >> y;

    // print enter the Operator
    cout << "\nEnter the operator you want to calculate (+ - * /): ";
    // getting user input
    cin >> ch;

    // function calling
    calculator(x, y, ch);

    return 0;
}

// calculating the result in this function section
void calculator(double a, double b, char c)
{
    // checking what was the user input and calculating like this
    if (c == '+')
    {
        double result = a + b;
        cout << "The Addition of " << a << " and " << b << " is: " << result << endl;
    }
    else if (c == '-')
    {
        double result = a - b;
        cout << "The Subtractin of " << a << " and " << b << " is: " << result << endl;
    }
    else if (c == '*')
    {
        double result = a * b;
        cout << "The Multiplication of " << a << " and " << b << " is: " << result << endl;
    }
    else if (c == '/')
    {
        // no numbers can be divided by 0
        if (b == 0)
        {
            cout << "Division by zero is not allowed!\n";
        }
        else
        {
            double result = a / b;
            cout << "The Division of " << a << " and " << b << " is: " << result << endl;
        }
    }
    else
    {
        // for invalid operator
        cout << "Invalid operator is Inputed!\n";
    }
}