#include<iostream>
using namespace std;
void swapValues(int* a, int* b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
int main() {
 int x = 5, y = 10; 
 cout << "Before swapping: x = " << x << ", y = " << y << endl; 
 swapValues(&x, &y); 
 cout << "After swapping: x = " << x << ", y = " << y << endl;
}