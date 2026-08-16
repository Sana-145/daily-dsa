#include <bits/stdc++.h>
using namespace std;

/*vector<int> maxMinFrequency(vector<int> &nums, int n)
{
    vector<bool> visited(n, false);

    int maxElem = 0;
    int minElem = 0;

    int maxFreq = 0;
    int minFreq = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
                visited[j] = true;
            }
        }
        if (count < minFreq)
        {
            minFreq = count;
            minElem = nums[i];
        }

        if (count > maxFreq)
        {
            maxFreq = count;
            maxElem = nums[i];
        }
    }
    return {maxElem, minElem};
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        if (!(cin >> nums[i])) return 0;
    }

    vector<int> result = maxMinFrequency(nums, n);
    cout << result[0] << " " << result[1] << endl;    

    return 0;
}*/


//----------------Optimal Solution------------------//

vector<int> maxMinFrequency(vector<int> &nums, int n) {
    
    unordered_map<int, int> freqMap;

    int maxElem = 0;
    int minElem = 0;
    int maxFreq = 0;
    int minFreq = INT_MAX;

    for (int x: nums) {
        freqMap[x]++;
    }

    for (auto it: freqMap) {
        if(it.second < minFreq) {
            minFreq = it.second;
            minElem = it.first;
        }

        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElem = it.first;
        }
    }

    return {maxElem, minElem};
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n)) return 0;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        if(!(cin >> nums[i])) return 0;
    }

    vector<int> result = maxMinFrequency(nums, n);
    cout << result[0] << " " << result[1] << endl;

    return 0;
}