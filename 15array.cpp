#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int size, mid, start, end;

    cout << "Enter the size: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {  // Fix: Start from index 0
        cin >> arr[i];
    }

    start = 0;
    end = size - 1;

    while (start <= end) {
        mid = start + (end - start) / 2;  // Corrected mid calculation


        // Check if mid is a local minimum
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]) {
            cout << "Local minimum found at index: " << mid << endl;
            return 0;
        }

        // Move to the left half if needed
        else if (arr[mid] > arr[mid - 1]) {
            start = mid + 1;
        }

        // Move to the right half if needed
        else {
            end= mid - 1;
        }
    }

    cout << "No local minimum found." << endl;
    return 0;
}
