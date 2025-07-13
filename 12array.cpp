#include <iostream>
using namespace std;

int main() {
    int size, arr[100];
    int start, end, first = -1, last = -1;
    int key, mid;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to be searched: ";
    cin >> key;

    // Finding first occurrence
    start = 0;
    end = size - 1;
    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid

        if (arr[mid] == key) {
            first = mid;
            end = mid - 1; // Continue searching in left half
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Finding last occurrence
    start = 0;
    end = size - 1;
    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid

        if (arr[mid] == key) {
            last = mid;
            start = mid + 1; // Continue searching in right half
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Output results
    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}
