/*A child’s parents promise to give the child $10 on her 12th birthday, and double that amount
on every subsequent birthday until the amount exceeds $1000. Write a program that determines
on which birthday the last amount is given and the total amount received. The output of your
program should appear as follows:
Birthday     Amount Given
--------    -------------
12          10
13          20
14          40
15          80

--------------------------------------------
On birthday X, the child will receive $Y */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int birthday = 12, totalAmount = 0, everyBirthGift = 5;

    // print birthday and amount and also dash
    cout << "\nBirthday\tAmount Given\n";
    cout << "--------\t------------\n";

    // calculating the amount
    while (totalAmount <= 1000)
    {
        everyBirthGift = everyBirthGift * 2;
        totalAmount = totalAmount + everyBirthGift;
        cout << birthday << "\t\t" << everyBirthGift << endl;
        birthday++;
    }
    // reducing 1 for getting exact birthday
    birthday--;

    // print total amount
    cout << "\n-------------------------------------------\n";
    cout << "On birthday " << birthday << ", the child will receive $" << totalAmount << endl;

    return 0;
}
