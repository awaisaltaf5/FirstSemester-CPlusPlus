#include<iostream>
using namespace std;
// Function declaration
double calculateVolume(double length, double width, double height);
int main() {
 double l1 = 3.5, w1 = 2.0, h1 = 4.0;
 double volume1 = calculateVolume(l1, w1, h1);
 cout << "Volume of the first box is: " << volume1 << endl;
 double l2 = 5.0, w2 = 3.0, h2 = 2.5;
 double volume2 = calculateVolume(l2, w2, h2);
 cout << "Volume of the second box is: " << volume2 << endl;
 return 0;
}
// Function definition
double calculateVolume(double length, double width, double height) {
 return length * width * height;
}