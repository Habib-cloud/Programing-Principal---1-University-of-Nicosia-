/*Write a function that displays a rectangle, but the user specifies the
dimensions. In this case, the function will accept the dimensions as its
parameters. Call your function from main. Ask the user for dimensions
and call your function appropriately. Don’t forget user data validation! */

#include <iostream>
using namespace std;

// declaring the funciton
void Rectangle(int row, int col);

int main()
{
    int r, c;

    // print enter the value
    cout << "Enter the number of rows: ";
    // taking user input
    cin >> r;
    // print enter the value
    cout << "Enter ther number of columns: ";
    // taking user input
    cin >> c;

    // checking if the user inputs are greater or equal than 0 or not
    if (r <= 0 || c <= 0)
    {
        cout << "\nInvalid Input!\n";
        return 0;
    }

    // function calling
    Rectangle(r, c);

    return 0;
}

// in this function section creating the rectangle and displaying them
void Rectangle(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        // creating a newline after print one line
        cout << endl;
    }
}