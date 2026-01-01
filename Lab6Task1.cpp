/*
* MD Habibur Rahman
* Date: 6 November 2025
*
* Question: Compute the area of the circle from the user's input and use (if....else) condition for exact result.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double pi, radius, area;

	// initializing the value of pi
	pi = 3.14159;

	// Print enter the value for radius
	cout << "Enter the value for radius:";

	// getting user's input
	cin >> radius;

	// applying the condition
	if ((radius > 0)) {
		// calculating the area
		area = pi * radius * radius;

		// printing the area
		cout << "\nThe area of the Circle is: " << area << endl << endl;
	}
	else {
		// print Invalid input for radius
		cout << "\nInvalid input for radius.\n\n";
	}

	return 0;
}