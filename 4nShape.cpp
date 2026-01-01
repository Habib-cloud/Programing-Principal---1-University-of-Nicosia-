/* Write a program that asks the user how many times he/she would like to display on the screen
the shape below (N is the number of the shape). Make sure that the number that the user will
give is a positive (i.e. keep asking for a number if the number is negative). Repeat the process
until the user enters 0.
****
* N *
****
Your program will output the shape as many times as the user requested, one after the other, as
follows:
Enter how many times you want the shape to be displayed:
3
****
*1 *
****
****
*2 *
****
****
*3 *
****
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    // print enter number and getting user input
    cout << "Please enter a positive integer: ";
    cin >> num;

    while (num != 0)
    {
        if (num > 0)
        {
            for (int i = 1; i <= num; i++)
            {
                cout << "\n****\n";
                cout << "* " << i << " *" << endl;
                cout << "****\n";
            }
            cout << "\nPlease inter a positive number if you want to repeat this or 0 for finish: ";
            cin >> num;
        }
        else
        {
            cout << "\nInvalid value! Please inter a positive number: ";
            cin >> num;
        }
    }
    cout << "\nThank you!\n\n";
    return 0;
}