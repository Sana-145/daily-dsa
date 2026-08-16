#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    int n;

    if (!(cin >> n))
        return 0; // Check if input is received successfully

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Assuming the numbers are in the range [0, 100000] here we are taking 100001 because we are using 0 based indexing which means we can store the frequency of 100000 at index 100000
    vector<int> hash(100001, 0);
    //Precompute the frequency of each number in the array
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    if (!(cin >> q)) return 0;

    while (q--)
    {
        int number;
        if (!(cin >> number)) return 0;
        cout << hash[number] << endl;
    }
}*/

int main()
{
    // CRITICAL: Mandatory optimization to prevent TLE on mass-hiring platforms
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    if (!(cin >> n)) return 0; 

    unordered_map<long long, int> freqMap; 

    for (int i = 0; i < n; i++)
    {
        long long number;
        if (!(cin >> number)) return 0;
        freqMap[number]++;
    }

    int q;
    if ((!(cin >> q))) return 0;

    while (q--)
    {
        long long num;
        if (!(cin >> num)) return 0;
        cout << freqMap[num] << endl;
    } 

    return 0;  
}