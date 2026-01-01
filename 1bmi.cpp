// MD Habibur Rahman

/*Body Mass Index (BMI) is a measure of health on weight. It can be calculated by
taking your weight in kilograms and dividing by the square of your height in meters.
Write a program than prompts the user to enter a weight in pounds and height in
inches and display the BMI. Note that 1 pound is 0.45359237 kilogram and 1 inch is
0.0254 meter. Here is a sample run:*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double height, weight, bmi;

    // asking the user for values and getting user input
    cout << "Please enter weight in pounds: ";
    cin >> weight;

    cout << "Please enter height in inches: ";
    cin >> height;

    // calculation of weight in kilogram and height in meter
    weight = weight * 0.45359237;
    height = height * 0.0254;

    // calculation of bmi and print the result
    bmi = weight / (height * height);
    cout << "BMI is: " << bmi << endl;
    return 0;
}