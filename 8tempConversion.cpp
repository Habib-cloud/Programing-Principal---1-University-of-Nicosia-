#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double temp;
    char scale;

    // print enter a temperature and getting user input
    cout << "\nEnter the temperature you want to calculate: ";
    cin >> temp;

    // print enter a temperature scale and getting user input
    cout << "\nEnter a temperature scale you entered: ";
    cin >> scale;

    // calculating the temperature advisory
    if ((scale == 'C') || (scale == 'c'))
    {
        double F = (temp * (9.0 / 5.0)) + 32;
        double K = (temp + 273.15);
        cout << "\nThe temperature in Fahrenheit is: " << F << endl;
        cout << "\nThe temperature in Kelvin is: " << K << endl;
    }
    else if ((scale == 'F') || (scale == 'f'))
    {
        double C = (temp - 32) * (5.0 / 9.0);
        double K = (C + 273.15);
        cout << "\nThe temperature in Celsius is: " << C << endl;
        cout << "\nThe temperature in Kelvin is: " << K << endl;
    }
    else if ((scale == 'K') || (scale == 'k'))
    {
        if (temp < 0)
        {
            cout << "\nError! Kelvin temperature cannot be below 0.\n";
        }
        else
        {
            double C = temp - 273.15;
            double F = (C * (9.0 / 5.0)) + 32;
            cout << "\nThe temperature in Celsius is: " << C << endl;
            cout << "\nThe temperature in Fahrenheit is: " << F << endl;
        }
    }
    else
    {
        cout << "\nInvalid input! Please enter among 'C, F, K'.\n";
    }

    return 0;
}