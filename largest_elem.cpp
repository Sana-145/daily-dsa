// #include <iostream>
// #include <vector>
#include<bits/stdc++.h>
using namespace std;


int largestElement(const vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}


int main() {
    int n;

    if (!(cin >> n)) return 0;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) return 0;
    }

    cout << largestElement(arr) << endl;

    return 0;
}