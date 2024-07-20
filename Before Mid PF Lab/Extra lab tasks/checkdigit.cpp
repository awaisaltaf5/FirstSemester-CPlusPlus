#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer between 1 and 99999: ";
    cin >> number;

    // Calculating the number of digits by checking the range of the number
    switch (number) {
        case 1 ... 9:
            cout << "The number has 1 digit." << endl;
            break;
        case 10 ... 99:
            cout << "The number has 2 digits." << endl;
            break;
        case 100 ... 999:
            cout << "The number has 3 digits." << endl;
            break;
        case 1000 ... 9999:
            cout << "The number has 4 digits." << endl;
            break;
        case 10000 ... 99999:
            cout << "The number has 5 digits." << endl;
            break;
        default:
            cout << "The number entered is out of the allowed range." << endl;
    }

    return 0;
}
