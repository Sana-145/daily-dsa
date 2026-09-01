#include<bits/stdc++.h>
using namespace std;

vector<int> secondLargest(const vector<int>& arr) {
    int n = arr.size();

    int largest = INT_MIN;    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && secondLargest != largest){
            secondLargest = arr[i];
        }
    }

    return {largest, secondLargest};
}

int main () {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = secondLargest(arr);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}