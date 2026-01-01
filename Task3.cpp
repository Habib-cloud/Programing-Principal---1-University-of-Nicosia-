/*MD Habibur Rahman

Write a function "print_pyramid(...)" which takes a single integer argument "height" and
displays a "pyramid" of this height made up of of "*" characters on the screen. Test the function
with a simple "driver" program, which should be able to reproduce the following example
output:
This program prints a 'pyramid' shape of
a specified height on the screen.
how high would you like the pyramid?: 6
     **
    ****
   ******
  ********
 **********
*************/

#include <iostream>
using namespace std;

// function prototype
void print_pyramid(int n);

int main()
{
    int num;

    // asking the user for input and getting user input
    cout << "Enter the value: ";
    cin >> num;

    // checking if the number is valid or not
    if (num <= 0)
    {
        cout << "\nInvalid Number!\n";
    }

    // function calling
    print_pyramid(num);

    return 0;
}

// printing the pyramid in this function
void print_pyramid(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}