/*Write a function that displays a rectangle of fixed size (e.g. 4x5). No 
arguments are passed in the function. Call your function from main. Ask 
the user to give you the times that he/she wants the rectangle to be 
displayed and call your function appropriately. Don’t forget user data 
validation! */

#include <iostream>
using namespace std;

//declare the function
void Rectangle();

int main()
{
    int n;

    // print enter the value and taking user input
    cout << "Please enter How many times you want to display the rectangle: ";
    cin >> n;

    // checking if the value is correct or not
    if (n <= 0)
    {
        cout << "\nInvalid Input!\n";
        return 0;
    }
    else
    {
        // printing the rectangle how many times user want and calling the function
        for (int i = 1; i <= n; i++)
        {
            cout << "\nRectangle " << i << ":\n";
            Rectangle();
        }
    }

    return 0;
}

// in this function section creating the rectangle and displaying them
void Rectangle()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        // creating a newline after print one line
        cout << endl;
    }
}
