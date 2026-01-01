// MD Habibur Rahman
/*Write a program that prompts the user to enter three numbers and displays them in
an ascending order and also in a descending order. Here is a sample run:*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double num1, num2, num3, temp;

    // print enter the values and getting the user input
    cout << "Please enter three numbers: \n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // finding in ascendint order
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // printing the values ascending and descending order
    cout << "\nAscending order: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "\nDescending order: " << num3 << ", " << num2 << ", " << num1 << endl;

    return 0;
}