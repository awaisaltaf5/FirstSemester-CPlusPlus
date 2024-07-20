#include<iostream>
using namespace std;
int main() {
 int numbers[] = {10, 20, 30, 40, 50};
 int* ptrNumbers = numbers;
 
 cout << "Array elements using pointers:" << endl;
 for (int i = 0; i < 5; i++) {
 cout << "Element " << i + 1 << ": " << *(ptrNumbers + i) << endl;
 }
}

