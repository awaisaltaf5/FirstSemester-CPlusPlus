#include<iostream>
using namespace std;
// Function declaration
int sum(int num1, int num2);
int main() {
 int a = 5, b = 7;
 int result1 = sum(a, b);
 cout<< "Sum of " << a << " and " << b << " is: " << result1 << endl;
 int x = 10, y = 20;
 int result2 = sum(x, y);
 cout << "Sum of " << x << " and " << y << " is: " << result2 << endl;
}
// Function definition
int sum(int num1, int num2) {
 return num1 + num2;
}