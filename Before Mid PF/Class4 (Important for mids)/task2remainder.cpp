#include<iostream>
using namespace std;

int main() {
    int num=123456789; // Initialize num with 1234567
int digit;

    while(num >0) {
        
         digit = num % 10; 
        num = num / 10;  // Get the least significant digit
        cout << digit;        // Print the digit
            // Remove the least significant digit from num
    }

    return 0;
}

