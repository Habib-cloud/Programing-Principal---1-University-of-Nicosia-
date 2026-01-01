/*Accept from the user an integer number x. If the number x is positive, determine if x is a
multiple of 4. Repeat the process until the user enters 0. */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x = 1;

    // asking the user to input and getting user input
    cout << "Enter an integer number: ";
    cin >> x;

    while (x != 0)
    {
        if (x > 0)
        {
            if (x % 4 == 0)
            {
                cout << "\n" << x << " is a positive multiple of 4.\n";
            }
            else
            {
                cout << "\n" << x << " is not a multiple of 4.\n";
            }
        }
        else
        {
            cout << x << " is a Negative number.\n";
        }
        cin >> x;
    }
    return 0;
}