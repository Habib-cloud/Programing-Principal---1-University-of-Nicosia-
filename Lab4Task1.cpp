// MD Habibur Rahman

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double height, width, area;

	// print: Enter the Height
	cout << "Enter the Height: ";

	// initializing the height
	cin >> height;

	// print: Enter the width
	cout << "Enter the width: ";

	//initializing the width
	cin >> width;

	// calculating the area
	area = height * width;

	// prit The area of the rectangle
	cout << "The area of the rectangle is: " << area << endl;

	return 0;
}