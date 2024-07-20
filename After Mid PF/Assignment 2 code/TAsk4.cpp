#include <iostream>
using namespace std;
int main() {
cout << "Composite numbers between 2 and 1000 are:" << endl;
for (int num = 2; num <= 1000; num++) {
for (int i = 2; i <= num / 2; i++) {
if (num % i == 0) {
cout << num << " ";
break;
}
}
}
return 0;
}