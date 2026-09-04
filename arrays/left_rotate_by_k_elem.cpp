#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

// Complexity: Time  → O(n), Space → O(1)

void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> rotateLeft(vector<int>& arr, int n, int k) {
    k = k % n; // Handle cases where k is larger than the array size

    // Using built-in functions....
    // // Reverse the first k elements
    // rotate(arr.begin(), arr.begin() + k);
    // // Reverse the remaining elements
    // rotate(arr.begin() + k, arr.end());
    // // Reverse the entire array
    // rotate(arr.begin(), arr.end());

    if (n == 0 || k == 0) {
        return arr;
    }

    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);

    return arr;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector <int> rotatedArray = rotateLeft(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << rotatedArray[i] << " ";
    }

    return 0;
}