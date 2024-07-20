#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    int num;
    int maxNum = INT_MIN; // Initialize maxNum to the smallest possible integer
    int minNum = INT_MAX; // Initialize minNum to the largest possible integer

    cout << "Enter integers (press 0 to stop):\n";
 
    // Loop to read integers until 0 is entered
    while (true) {
        cin >> num;

        // If the entered number is 0, break out of the loop
        if (num == 0) {
            break;
        }

        // Update maxNum if necessary
        if (num > maxNum) {
            maxNum = num;
        }

        // Update minNum if necessary
        if (num < minNum) {
            minNum = num;
        }
    }

    // Display maximum and minimum numbers
    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    return 0;
}
