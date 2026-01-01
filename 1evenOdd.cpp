#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;

    // print enter an integer and getting user inpur
    cout << "Enter an integer Number: ";
    cin >> num;

    if ((num % 2) == 0)
    {
        cout << "\nThe number " << num << " is even.\n";
    }
    else
    {
        cout << "\nThe number " << num << " is odd.\n";
    }

    return 0;
}