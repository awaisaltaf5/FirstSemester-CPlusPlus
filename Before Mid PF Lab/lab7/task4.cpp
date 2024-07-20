#include<iostream>
using namespace std;
int main() {
 int number;
 do {
 cout << "Enter a positive integer: ";
 cin >> number;
 } while (number<1);
 
 int factorial = 1;
 int i = 1;
 do {
 factorial *= i;
 i++;
 } while (i <= number);
 
 cout << "Factorial of " << number << " is " << factorial;
}
