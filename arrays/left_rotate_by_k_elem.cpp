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

void rotateLeft(vector<int>& arr,int k) {
    int n = arr.size();

    if (n == 0 || k == 0) return;

    k = k % n; // Handle cases where k is larger than the array size

    // Using built-in functions....
    // rotate(arr.begin(), arr.begin() + k, arr.end());

    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);

}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateLeft(arr, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}