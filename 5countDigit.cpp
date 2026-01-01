/*Objective: Count the number of digits in an integer using a loop.

• Instructions: Input an integer from the user. Use a while loop to repeatedly divide
the number by 10, counting how many times this can be done before the number
becomes zero. */

#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    // print enter a number and getting user input
    cout << "Enter an integer number: ";
    cin >> number;

    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number != 0)
        {
            number = number / 10;
            count++;
        }
    }

    // printing the result
    cout << "\nThe number contains " << count << " digits." << endl;
    return 0;
}