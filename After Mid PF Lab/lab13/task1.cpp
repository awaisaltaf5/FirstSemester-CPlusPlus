#include<iostream>
using namespace std;
int main() {
 int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},sum=0;
 
 cout << "Matrix elements:" << endl;
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 cout << matrix[i][j]<<" ";
 sum=sum+matrix[i][j];
 
 }
 cout<<endl;
 }
 
}

