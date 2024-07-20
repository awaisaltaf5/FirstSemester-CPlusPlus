#include <iostream>
using namespace std;
int main() {
int start, end;
cout << "Enter the Starting Point: ";
cin >> start;
cout << "Enter the Ending Point: ";
cin >> end;
cout << "Prime numbers between " << start << " and " << end << " are: "
<< endl;
for (int num = start; num <= end; num++) {
int i;
for (i = 2; i <= num / 2; i++) {
if (num % i == 0) {
break;
}
}
if (i > num / 2 && num > 1) {
cout << num << " is prime." << endl;
}
}
return 0;
}
