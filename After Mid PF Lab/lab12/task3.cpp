#include <iostream>
using namespace std;
int main() {
 float arr[] = {1.5, 2.5, 3.5, 4.5};
 
 // Modify the second element
 arr[1] = 7.5;
 
 cout << "Updated array: ";
 for (int i = 0; i < 4; i++) {
 cout << arr[i] << " ";
 }
}
