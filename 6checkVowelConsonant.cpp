// MD Habibur Rahman
/*Words are built from vowels (a,e,i,o,u) and consonants (the rest letters except y).
The letter y sometimes acts as a consonant and sometimes it acts as a vowel.
Write a program that reads a character and returns whether or not is a vowel or
consonant. If the user enters a nonalphabetic character, the program will display
an error message. */

#include <iostream>
using namespace std;

int main()
{
    char ch = 'y';

    while (ch == 'y' || ch == 'Y')
    {
        // print enter a character and getting user input
        cout << "Enter a character: ";
        cin >> ch;

        // checking the result and print them
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                cout << ch << " is a vowel.\n";
            }
            else if (ch == 'y' || ch == 'Y')
            {
                cout << "\nThe letter " << ch << " can be a vowel or a consonant.\n";
            }
            else
            {
                cout << ch << " is a consonant.\n";
            }
        }
        else
        {
            cout << "Error! This is a non-alphabetic character.\n";
        }
        cout << "\nDo you want to check this again? (y/n): ";
        cin >> ch;
    }

    cout << "\nThank you!\n";

    return 0;
}