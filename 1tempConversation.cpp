/*Objective: Convert temperatures from Celsius to Fahrenheit using a loop.

Instructions: Ask the user for a start and end Celsius temperature and an
increment value. Use a for loop to display a conversion table from Celsius to
Fahrenheit using the formula F = C * 9/5 + 32*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int startValue, endValue;
    double fahren;

    // asking user to input the values and getting user inputs
    cout << "\nEnter a celsius starting value: ";
    cin >> startValue;
    cout << "Enter a celsius ending value: ";
    cin >> endValue;

    // asking the user to print Celsius and Fahrenheit and print calculation
    cout << "\nThe fahrenheit temperatures are: \n\nCelsius\tFahrenheit\n";
    for (int i = startValue; i <= endValue; i++)
    {
        fahren = (i * (9 / 5)) + 32;
        cout << i << "\t" << fahren << endl;
    }
    return 0;
}