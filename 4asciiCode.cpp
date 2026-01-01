// MD Habibur Rahman
/*Write a program that prompts the user for a character and displays its ASCII code
as well as the ASCII codes for the next 3 characters. Here is a sample run:*/
#include <iostream>
using namespace std;

int main()
{
    char x;
    int n;

    // print enter the value and getting user input
    cout << "Please enter a character: ";
    cin >> x;
    cout << "Please enter a number how many ASCII you want: ";
    cin >> n;

    // printing the ascii codes
    for (int i = 0; i <= n; i++)
    {

        cout << "ASCII code for " << char(x + i) << " is: " << int(x + i) << endl;
    }
    return 0;
}