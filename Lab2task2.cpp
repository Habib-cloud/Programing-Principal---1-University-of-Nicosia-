// The area of the square

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double radius, area;

    // initializing the vallue
    radius = 15.2;

    // calculating the area
    area = radius * radius * 3.14159;

    // print the area
    cout << "\nThe area of the square is: " << area << "\n";

    return 0;
}