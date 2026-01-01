#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;

    // asking the user to print enter number and getting user input
    cout << "Enter a positive integer number: ";
    cin >> num;

    // checking if the number is greater than 0
    if (num <= 0)
    {
        cout << "\nPlease enter a positive integer!" << endl;
    }
    else
    {
        //print the collatz and calculating the result and printing them
        cout << "\nThe Collatz conjecture sequence: " << num << endl;
        while (num != 1)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            }
            else
            {
                num = (num * 3) + 1;
            }
            cout << num << endl;
        }
    }
    return 0;
}