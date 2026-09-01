#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

bool checkArraySorted(const vector<int>& arr, int n) {
    if (n == 0 || n == 1) return true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (checkArraySorted(arr, n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;

}