// MD Habibur Rahman
/*Write a program that displays 10 numbers per line, all numbers from 100 to 1000
that are divisible by 5 and 6. */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int count = 0;

    cout << endl;

    // calculating the result and printing them
    for (int i = 100; i <= 1000; i++)
    {
        if ((i % 5 == 0) && (i % 6 == 0))
        {
            cout << i << " ";
            count++;

            if (count % 10 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}