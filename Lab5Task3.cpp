/*
Name: MD Habibur Rahman
Date: 30 October 2025

Question: Given the principal (P)
					rate (R)
					time (T)
			Calculate the simple interest, S = (P * R * T) / 100
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double P, R, T, S;

	// Print Enter the Principal
	cout << "Enter the Principal: ";

	// initializing the value
	cin >> P;

	// Print Enter the Rate
	cout << "Enter the Rate: ";

	// initializing the value
	cin >> R;

	// Print Enter the Time
	cout << "Enter the Time: ";

	// initializing the value
	cin >> T;

	// Calculating the result
	S = (P * R * T) / 100;

	//printing the result
	cout << "\nThe simple interest of the Principal " << P << ", Rate " << R << " and Time is: " << S << endl;

	return 0;
}