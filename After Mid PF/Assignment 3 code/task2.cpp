#include <iostream>
using namespace std;
int main() {
int c[5], d = 0, e = 0;
cout << "Enter data in array:" << endl;
for (int k = 0; k < 5; k++) {
cin >> c[k];
}
cout << "Prime numbers in array:" << endl;
for (int i = 0; i < 5; i++) {
for (int j = 2; j < c[i]; j++) {
if (c[i] % j == 0) {
d++;
break;

}
}
if (d == 0) {
cout << c[i] << endl;
e++;
}
d=0;
}
cout << "Count of prime numbers in your array: " << e << endl;
return 0;
}
