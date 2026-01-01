// MD Habibur Rahman
/*Write a program that prompts the user to enter an uppercase letter and converts it to 
a lowercase letter. Hint: In the ASCII table the uppercase letters appear before the 
lowercase letters. The offset between any uppercase letter and its corresponding 
lowercase letter is the same. Here is a sample run:*/
#include <iostream>
using namespace std;

int main (){
    char x;

    // print enter the value and getting user input
    cout << "Enter an uppercase letter: ";
    cin >> x;

    cout << "The lowercase letter is: " << char (x + 32) << endl;
    return 0;
}