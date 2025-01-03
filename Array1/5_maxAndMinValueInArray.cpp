#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Input elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min to the first element of the array
    int maxVal = arr[0];
    int minVal = arr[0];

    // Loop through the array to find max and min values
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // Output the results
    cout << "The maximum value is: " << maxVal << endl;
    cout << "The minimum value is: " << minVal << endl;

    return 0;
}
