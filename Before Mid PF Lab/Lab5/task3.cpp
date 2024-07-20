#include<iostream>
using namespace std;

int main() {
 double totalPurchase;
 char isMember;
 cout << "Enter total purchase amount: $";
 cin >> totalPurchase;
 if (totalPurchase >= 500) {
 cout << "Are you a member? (Y/N): ";
cin >> isMember;
 if (isMember == 'Y' || isMember == 'y') {
 totalPurchase -= (totalPurchase * 0.10); // 10% discount for members
 } else {
 totalPurchase -= (totalPurchase * 0.05); // 5% discount for nonmembers
 }
 }
 cout << "Total purchase amount after discount: $" << totalPurchase << endl;
}
