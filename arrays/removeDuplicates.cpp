#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& arr, int n) {
    if (n == 0) return 0;

    int i = 0, j = 1;
    
    while (j < n) {
        if (arr[i] == arr[j]) {
            j++;
        } else {
            i++;
            arr[i] = arr[j];
            j++;
        }
    }

    return i + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result_size = removeDuplicates(arr, n);

    cout << result_size << endl;

    return 0;
}