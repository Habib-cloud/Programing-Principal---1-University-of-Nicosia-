// MD Habibur Rahman
/* Suppose that the tuition for a university is $10,000 this year (year 1) and increases
5% every year. Write a program that computes the tuition in x years from now,
with x being a number given by the user.  In addition, the program should
compute the total cost of y years’ worth of tuition starting from now, with y being
a number given by the user. Finally, the program should display the tuition for x
years along with the total tuition cost at the end of each year. Your program will
terminate when the user enters 0.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int choice = -1, year;
    double basicTuition, rate;

    // print welcome and suggestion for users what they want to do
    cout << "\nWelcome to the tuition calculator!\n";
    cout << "\n1 Compute the yearly tuition at the beginning of a year";
    cout << "\n2 Compute the total tuition cost for x years of studies";
    cout << "\n3 Compute yearly tuition and total tuition cost at the end of each year, for x years";
    cout << "\n0 Quit program";

    // asking the user for enter the basic tuition fee and getting user input
    cout << "\n\nEnter your basic tuition fee: ";
    cin >> basicTuition;

    // asking the user for enter the rate and getting user input
    cout << "\nEnter how much is the parcentage: ";
    cin >> rate;

    // checking the criteria and going inside and doing calculation
    while (choice != 0)
    {
        // asking the users for their choice for calculation and getting user input
        cout << "\nEnter your choice: ";
        cin >> choice;

        // for choice 1 doing the calculation and displaying the result
        if (choice == 1)
        {
            cout << "You want to know the yearly tuition at the beginning of what year? ";
            cin >> year;

            // declare a new variable and put here the user inputed basic Tuition fee
            double newTuition = basicTuition;

            // calculating the result and displaying it
            for (int i = 1; i < year; i++)
            {
                newTuition = newTuition + (newTuition * (rate / 100));
            }

            cout << "\nThe yearly tuition at year " << year << " of your studies will be " << newTuition << endl;
        }
        // for choice 2 doing the calculation and displaying the result
        else if (choice == 2)
        {
            cout << "You want to know the yearly tuition at the beginning of what year? ";
            cin >> year;

            // declare a new variable and put here the user inputed basic Tuition fee
            double newTuition = basicTuition;
            // declare a new variable as totalTuition for calculating the total tuition fee
            double totalTuition = 0;

            // calculating the result and displaying it
            for (int i = 1; i <= year; i++)
            {
                totalTuition = totalTuition + newTuition;
                newTuition = newTuition + (newTuition * (rate / 100));
            }
            cout << "\nThe yearly tuition at year " << year << " of your studies will be " << totalTuition << endl;
        }
        // for choice 3 doing the calculation and displaying the result
        else if (choice == 3)
        {
            cout << "How many years you want to consider starting from today? ";
            cin >> year;

            // declare a new variable and put here the user inputed basic Tuition fee
            double newTuition = basicTuition;
            // declare a new variable as totalTuition for calculating the total tuition fee
            double totalTuition = 0;

            // this is the heading of year and per year tuition fee and total tuition fee
            cout << "Year\tTuition\tTotal Tuition Cost at the End of Year\n";

            // calculating the result and displaying it
            for (int i = 1; i <= year; i++)
            {
                totalTuition = totalTuition + newTuition;
                cout << i << "\t" << newTuition << "\t" << totalTuition << endl;
                newTuition = newTuition + (newTuition * (rate / 100));
            }
        }
        // for choice 0 displaying the result
        else if (choice == 0)
        {
            cout << "\nGoodbye!\n";
        }
        // for any other choice displaying wrong input and asking for input again.
        else
        {
            cout << "\nYou pressed a wrong number. Please enter 1, 2, 3 or 0: ";
        }
    }

    return 0;
}