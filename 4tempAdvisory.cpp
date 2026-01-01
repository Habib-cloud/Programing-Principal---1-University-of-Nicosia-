#include <iostream>
using namespace std;

int main()
{
    int cel;

    // print enter a celcius temperature and getting user input
    cout << "\nEnter the temperature in Celsius: ";
    cin >> cel;

    // checking the temperature advisory
    if (cel < 0)
    {
        cout << "\nThe temperature is below freezing point.\n";
    }
    else if ((cel >= 0) && (cel <= 10))
    {
        cout << "\nThe temperature is cold.\n";
    }
    else if ((cel >= 11) && (cel <= 25))
    {
        cout << "\nThe temperature is moderate.\n";
    }
    else if ((cel >= 26) && (cel <= 35))
    {
        cout << "\nThe temperature is warm.\n";
    }
    else
    {
        cout << "\nThe temperature is hot.\n";
    }

    return 0;
}