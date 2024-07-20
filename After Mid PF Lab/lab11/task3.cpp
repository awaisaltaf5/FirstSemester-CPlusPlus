#include<iostream>
using namespace std;
// Function declaration
double calculateAverage(int num1, double num2, float num3);
int main() {
 int a = 5;
 double b = 7.5;
 float c = 3.2;
 double average = calculateAverage(a, b, c);
 cout << "Average of " << a << ", " << b << ", and " << c << " is: " << average 
<< endl;
}
// Function definition
double calculateAverage(int num1, double num2, float num3) {
 return (num1 + num2 + num3) / 3.0;
}
