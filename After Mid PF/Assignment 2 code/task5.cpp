#include <iostream>
using namespace std;
int main() {
int n, digit, product = 1;
cout << "Enter Your Number: ";
cin >> n;
while (n > 0) {
digit = n % 10;
product *= digit;
n /= 10;
}
cout << "Product of digits of the number is: " << product << endl;
return 0;
}
