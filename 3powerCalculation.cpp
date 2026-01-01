// MD Habibur Rahman
/*Write a program that prompts the user to enter a number n and
displays n1, n2, n3, n4, n5. Here is a sample run:*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, p, result = 1;

    // print enter number and getting user input
    cout << "Please enter a number: ";
    cin >> num;
    cout << "Please enter a power integer value: ";
    cin >> p;

    // calculating and the printing the result
    for (int i = 1; i <= p; i++)
    {
        result = result * num;
        cout << num << " raised in the power of " << i << " : " << result << endl;
    }
    return 0;
}