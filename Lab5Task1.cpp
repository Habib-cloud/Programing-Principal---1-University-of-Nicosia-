/*
Name: MD Habibur Rahman
Date: 30 October 2025

Question: write a program that accepts 3 real numbers and computes the sum and average.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double num1, num2, num3;
	double sum, average;

	// print Enter the real value of num1
	cout << "Enter the real value of num1: ";

	// initializing the value
	cin >> num1;

	// print Enter the real value of num2
	cout << "Enter the real value of num2: ";

	// initializing the value
	cin >> num2;

	// print Enter the real value of num3
	cout << "Enter the real value of num3: ";

	// initializing the value
	cin >> num3;

	// calculating the value
	sum = num1 + num2 + num3;

	// print the sum
	cout << "\nThe summation of " << num1 << ", " << num2 << " and " << num3 << " is: " << sum << endl;

	//calculating the average
	average = sum / 3;

	// print the average
	cout << "\nThe average of " << num1 << ", " << num2 << " and " << num3 << " is: " << average << endl;

	return 0;
}