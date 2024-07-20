#include<iostream>
using namespace std;
int main() {
 string name;
 do {
 cout << "Enter your name (or 'exit' to quit): ";
 cin >> name;
 cout << "Hello, " << name << "!" << endl;
 } while (name != "exit");
}
