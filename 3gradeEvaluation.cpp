#include <iostream>
using namespace std;

int main()
{
    int num;

    // print enter number and getting user input
    cout << "Enter the grade: ";
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
            cout << "\nThe letter grade is A.\n";
        }
        else if ((num >= 80) && (num <= 89))
        {
            cout << "\nThe letter grade is B.\n";
        }
        else if ((num >= 70) && (num <= 79))
        {
            cout << "\nThe letter grade is C.\n";
        }
        else if ((num >= 60) && (num <= 69))
        {
            cout << "\nThe letter grade is D.\n";
        }
        else
        {
            cout << "\nThe letter grade is F.\n";
        }
    }

    return 0;
}