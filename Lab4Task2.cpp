#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double weight, height, bmi;

	// print Enter weight in pounds
	cout << "Enter Weight in pounds: ";

	// initializing the weight
	cin >> weight;

	// print Enter height in inches
	cout << "Enter Height in inches: ";

	// initializing the height
	cin >> height;

	// claculating the BMI
	bmi = (weight * 0.45359237) / ((height * 0.0254) * (height * 0.0254));

	// print the bmi
	cout << "BMI is: " << bmi << endl;

	return 0;
}