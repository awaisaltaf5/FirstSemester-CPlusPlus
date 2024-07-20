#include<iostream>
using namespace std;
// Function to calculate the area of a circle
double calculateArea(double radius) {
 const double pi = 3.14159265359;
 return pi * radius * radius;
}
// Overloaded function to calculate the area of a rectangle
double calculateArea(double length, double width) {
 return length * width;
}
int main() {
 double circleRadius = 5.0;
 double rectangleLength = 4.0;
 double rectangleWidth = 6.0;
 // Calculate the area of a circle
 double circleArea = calculateArea(circleRadius);
 
 // Calculate the area of a rectangle
 double rectangleArea = calculateArea(rectangleLength, rectangleWidth);
 // Display the results
 cout << "Area of the circle with radius " << circleRadius << " is: " << 
circleArea << endl;
 cout << "Area of rectanglr is:"<<rectangleArea;
}
