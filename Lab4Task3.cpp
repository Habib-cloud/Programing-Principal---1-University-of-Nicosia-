// Ask the user for and integer and print out the power of the number from 1 to 5
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double number;

	//print: Enter a number
	cout << "Enter a Number: ";

	// initializing the number
	cin >> number;

	// Calculating and printing the number in the power of 1
	cout << endl << number << " rasied in the power of 1: " << number << endl;

	// Calculating and printing the number in the power of 2
	cout << number << " rasied in the power of 2: " << number * number << endl;

	// Calculating and printing the number in the power of 3
	cout << number << " rasied in the power of 3: " << number * number * number << endl;

	// Calculating and printing the number in the power of 4
	cout << number << " rasied in the power of 4: " << number * number * number * number << endl;

	// Calculating and printing the number in the power of 5
	cout << number << " rasied in the power of 5: " << number * number *number * number * number << endl;

	return 0;
}