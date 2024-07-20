#include<iostream>
using namespace std;
int main() {
 int age;
 float height;
 char favoriteSymbol;

 cout << "Enter your age: ";
 cin >> age;

 cout << "Enter your height in meters: ";
 cin >> height;

 cout << "Enter your favorite letter or symbol: ";
 cin >> favoriteSymbol;

 cout << "You entered the following information:" << endl;
 cout << "Age: " << age << " (int)" << endl;
 cout << "Height: " << height << " (float)" << endl;
 cout << "Favorite Symbol: " << favoriteSymbol << " (char)" << endl;
 return 0;
}

