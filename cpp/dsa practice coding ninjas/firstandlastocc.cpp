#include <iostream>
#include <vector>
#include <algorithm> // Include for sort
using namespace std;

// Helper function to find the first or last occurrence of the key
int binarySearch(vector<int>& arr, int n, int key, bool findFirst) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            if (findFirst) {
                e = mid - 1; // Search in the left half for the first occurrence
            } else {
                s = mid + 1; // Search in the right half for the last occurrence
            }
        } else if (key > arr[mid]) {
            s = mid + 1; // Search in the right half
        } else {
            e = mid - 1; // Search in the left half
        }
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = binarySearch(arr, n, k, true);  // Find first occurrence
    p.second = binarySearch(arr, n, k, false); // Find last occurrence
    return p;
}

int main() {
    // Corrected: Using a SORTED array
    vector<int> arr = {1, 1, 2, 2, 2, 3, 1, 5};
    int n = arr.size();
    int key = 2;

    pair<int, int> result = firstAndLastPosition(arr, n, key);

    if (result.first == -1) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "First occurrence of " << key << ": " << result.first << endl;
        cout << "Last occurrence of " << key << ": " << result.second << endl;
    }

    // Example with a different key
    key = 1;
    result = firstAndLastPosition(arr, n, key);
    if (result.first == -1) {
        cout << "Key not found in the array." << endl;
    } else {
        cout << "First occurrence of " << key << ": " << result.first << endl;
        cout << "Last occurrence of " << key << ": " << result.second << endl;
    }


    return 0;
}