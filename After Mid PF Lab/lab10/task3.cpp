#include<iostream>
using namespace std;
// Function declaration
void printNumbers();
int main() {
 // Call the printNumbers function
 printNumbers();
}
// Function definition
void printNumbers() {
 for (int i = 1; i <= 5; i++) {
cout<< i << " ";
 }
 cout<< endl;
}
