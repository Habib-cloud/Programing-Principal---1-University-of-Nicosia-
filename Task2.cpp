// MD Habibur Rahman

// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the
// function. Use function factorial to calculate the factorials needed in the series.

#include <iostream>
#include <math.h>
using namespace std;

// function prototype
void factorial(int n);

int main()
{
    int num;

    // asking the user for input and getting user input
    cout << "Enter the number: ";
    cin >> num;

    // checking if the number is greater than or equal 0 or not
    if (num < 0)
    {
        cout << "\nInvalid numebr!\n";
    }

    // function calling
    factorial(num);

    return 0;
}

// calculating in this function
void factorial(int n)
{
    int fact = 1;
    double sum = 0;

    // calculatin factorial and sum of the series and displaying the result
    for (int i = 1; i <= n; i++)
    {
        fact = (fact * i);
        sum += (double)fact / i;
    }
    cout << "The sum of series " << n << " is: " << sum << endl;
}