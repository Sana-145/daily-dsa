#include <bits/stdc++.h>

using namespace std;

vector<int> secondSmallest(const vector<int>& arr) {
    int n = arr.size();
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && secondSmallest != smallest) {
            secondSmallest = arr[i];
        }
    }

    return {smallest, secondSmallest};    
}

int main () {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = secondSmallest(arr);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}