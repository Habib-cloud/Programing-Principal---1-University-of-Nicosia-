#include <iostream>
using namespace std;

int main()
{
    int num;

    // print enter number and getting user input
    cout << "\nEnter a grade (0 to 100): ";
    cin >> num;

    // checking the grade
    if ((num > 100) || (num < 0))
    {
        cout << "\nInvalid grade! Please enter a valid grade.\n";
    }
    else
    {
        if ((num >= 90) && (num <= 100))
        {
            cout << "\nExcellent\n";
        }
        else if ((num >= 80) && (num <= 89))
        {
            cout << "\nGood\n";
        }
        else if ((num >= 70) && (num <= 79))
        {
            cout << "\nAverage\n";
        }
        else if ((num >= 60) && (num <= 69))
        {
            cout << "\nBelow Average\n";
        }
        else
        {
            cout << "\nFail\n";
        }
    }

    return 0;
}