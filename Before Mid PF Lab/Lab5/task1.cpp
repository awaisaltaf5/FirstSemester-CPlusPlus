#include<iostream>
using namespace std;
    int main() {
 int exam1, exam2;
 cout << "Enter score for Exam 1: ";
 cin >> exam1;
 cout << "Enter score for Exam 2: ";
 cin >> exam2;
 if (exam1 >= 0 && exam1 <= 100 && exam2 >= 0 && exam2 <= 100) {
 if (exam1 >= 50 && exam2 >= 50) {
 cout << "Student has passed." << endl;
 } else {
 cout << "Student has failed." << endl;
 }
 } else {
 cout << "Invalid score input. Scores must be between 0 and 100." << endl;
 }
}


