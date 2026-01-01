/*
* MD Habibur Rahman
* Date: 6 November 2025
*
* Question: Compute the area of a Triangle from the user's input and use (if....else) condition for exact result.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double base, height, area;

	// Print enter the value for base
	cout << "Enter the value for base:";

	// getting user's input
	cin >> base;

	// Print enter the value for height
	cout << "\nEnter the value for height:";

	// getting user's input
	cin >> height;

	// applying the condition
	if ((base > 0) && (height > 0)) {
		// calculating the area
		area = (base * height) / 2;

		// printing the area
		cout << "\nThe area of the Triangle is: " << area << endl << endl;
	}
	else {
		// print Invalid input for radius
		cout << "\nInvalid input. Please enter the correct value.\n\n";
	}

	return 0;
}