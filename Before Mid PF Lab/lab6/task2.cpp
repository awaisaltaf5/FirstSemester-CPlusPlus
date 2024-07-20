#include<iostream>
using namespace std;
int main() {
 int sum = 0;
 int number = 2;
 while (number <= 100) {
 sum =sum+ number;
 number =number+ 2;
 }
 cout << "Sum of even numbers from 2 to 100: " << sum;
}
