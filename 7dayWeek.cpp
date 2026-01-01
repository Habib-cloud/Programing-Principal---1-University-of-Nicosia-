#include <iostream>
using namespace std;

int main()
{
    int num;

    // print enter number and getting user input
    cout << "\nEnter a number you want to know the day: ";
    cin >> num;

    // checking the grade
    if ((num > 7) || (num <= 0))
    {
        cout << "\nInvalid input! Please enter a valid number between 1 to 7.\n";
    }
    else
    {
        if (num == 1)
        {
            cout << "\nMonday\n";
        }
        else if (num == 2)
        {
            cout << "\nTuesday\n";
        }
        else if (num == 3)
        {
            cout << "\nWednesday\n";
        }
        else if (num == 4)
        {
            cout << "\nThursday\n";
        }
        else if (num == 5)
        {
            cout << "\nFriday\n";
        }
        else if (num == 6)
        {
            cout << "\nSaturday\n";
        }
        else
        {
            cout << "\nSunday\n";
        }
    }

    return 0;
}