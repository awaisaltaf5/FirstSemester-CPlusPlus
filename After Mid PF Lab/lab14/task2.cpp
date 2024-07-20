#include<iostream>
using namespace std;
int main() {
 float salary = 3500.0;
 float* ptrSalary = &salary;
 
 // Modify salary through pointer
 *ptrSalary = 4000.0;
  cout << "Updated salary: " << salary << endl;
}  
