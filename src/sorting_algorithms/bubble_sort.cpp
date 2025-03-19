#include <iostream>
using namespace std;

// Bubble sort function
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If there were no swaps, the array is already sorted.
        if (!swapped) break;
    }
}

// Print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 96, 76, 83, 33, 51};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:\n";
    printArray(arr, n);
    bubbleSort(arr, n);

    cout << "After sorting:\n";
    printArray(arr, n);
    return 0;
}