/* Ask for character letter and integer value n. Display on the screen the letter character n times
on a single line. Repeat the process by asking the user if he/she wants to continue.  */

#include <iostream>
using namespace std;

int main()
{
    char x, check = 'y';
    int n;

    // intering in the loop and checking process
    while (check == 'y')
    {
        // print enter the values and getting user inputs
        cout << "Enter a character you want to print repeatedly: ";
        cin >> x;

        cout << "Enter how many times you want to display: ";
        cin >> n;

        // printing the result
        for (int i = 1; i <= n; i++)
        {
            cout << i << " The character is: " << x << endl;
        }

        // want to know for repetition
        cout << "\nDo you want to continue? (y / n)" << endl;
        cin >> check;

        // checking users thought and progressing like that
        while (check != 'y' && check != 'n')
        {
            cout << "\nIncorrect! Please enter 'y' or 'n': ";
            cin >> check;
        }
    }
    cout << "\nThank you!\n";

    return 0;
}