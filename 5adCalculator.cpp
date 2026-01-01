#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2;
    double result;
    char x;

    // print enter values and getting user input
    cout << "\nEnter the value for num1: ";
    cin >> num1;
    cout << "\nEnter the value for num2: ";
    cin >> num2;

    // print enter operator and getting user input
    cout << "\nEnter an operator you want to calculate: ";
    cin >> x;

    // calculation
    if (x == '+')
    {
        result = num1 + num2;
        cout << "The addition of " << num1 << " and " << num2 << " is: " << result << endl;
    }
    else if (x == '-')
    {
        result = num1 - num2;
        cout << "The subtraction of " << num1 << " and " << num2 << " is: " << result << endl;
    }
    else if (x == '*')
    {
        result = num1 * num2;
        cout << "The multiplication of " << num1 << " and " << num2 << " is: " << result << endl;
    }
    else if (x == '/')
    {
        if (num2 > 0)
        {
            result = num1 / num2;
            cout << "The division of " << num1 << " and " << num2 << " is: " << result << endl;
        }
        else
        {
            cout << "\nError!\n";
        }
    }
    else if (x == '%')
    {
        if (num2 > 0)
        {
            result = num1 % num2;
            cout << "The modulus of " << num1 << " and " << num2 << " is: " << result << endl;
        }
        else
        {
            cout << "\nError!\n";
        }
    }
    else
    {
        cout << "\nError!\n";
    }

    return 0;
}
