#include <iostream>
#include <algorithm> // For sort, max_element, min_element
#include <numeric>   // For accumulate
using namespace std;

int main() {
    const int size = 8;
    int arr[size] = {12, 5, 7, 3, 9, 2, 8, 10};

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    // Sort the array
    sort(arr, arr + size);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    // Find the maximum and minimum values
    int maxVal = *max_element(arr, arr + size);
    int minVal = *min_element(arr, arr + size);

    // Calculate the average
    double average = accumulate(arr, arr + size, 0) / static_cast<double>(size);

    // Display the results
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    cout << "Average value: " << average <<endl;

    return 0;
}
