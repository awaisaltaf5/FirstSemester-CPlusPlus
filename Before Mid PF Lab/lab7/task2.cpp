#include<iostream>
using namespace std;
int main() {
 int number, sum = 0;
 do {
 cout << "Enter a number (negative to exit): ";
 cin >> number;
 if (number >= 0) {
 sum += number;
 }
 } while (number >= 0);
 cout << "Sum of entered numbers: " << sum;
}
