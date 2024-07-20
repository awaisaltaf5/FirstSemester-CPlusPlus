#include<iostream>
using namespace std;

int main() {
    int num = 12345; // Initialize num with 12345 instead of 123

    // Extract each digit from the number
    int a = num % 10; // Last digit
    int temp = num / 10;
    
    int b = temp % 10; // Fourth digit
    temp = temp / 10;
    
    int c = temp % 10; // Third digit
    temp = temp / 10;
    
    
    int d = temp % 10; // Second digit
    int e = temp / 10; // First digit

    // Print each digit from least to most significant
    cout <<a;
    cout << b;
    cout << c;
    cout << d;
    cout << e;
    
    
    return 0;
}

