/*
Name: MD Habibur Rahman
Date: 30 October 2025

Question: write a program that accepts a temperature in celcius and convert it into Fahrenheit.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double C, F;

	// print Enter the Temperature in Celcius
	cout << "Enter the Temperature in Celciul: ";

	// initializing the value 
	cin >> C;

	// Calculating the temperature in Fahrenheit
	F = (C * 9 / 5) + 32;

	// print the result
	cout << "\nThe Fahrenheit temperature of " << C << " degree Celcius is: " << F << endl;

	return 0;
}