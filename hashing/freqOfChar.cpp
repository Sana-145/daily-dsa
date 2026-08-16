#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    if (!(cin >> str)) return 0;

    // When all 256 ASCII characters are considered, we can use a fixed-size array of size 256 to store the frequency of each character.
    // vector<int> hash(256, 0); // Assuming ASCII characters.
    // for (char c : str) {
    //     hash[c]++;
    // }

    //When only lowercase letters are considered, we can use a fixed-size array of size 26 to store the frequency of each character.
    // vector<int> hash(26, 0);
    // for (char c: str) {
    //     hash[c - 'a']++;    
    // }

    // Using unordered_map to store the frequency of each character in the string.
    unordered_map<char, int> hash;
    for (char c : str) {
        hash[c - 'a']++;
    }

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        char ch;
        if (!(cin >> ch)) return 0;
        // cout << hash[ch] << endl;  // when all 256 ASCII characters are considered
        cout << "The frequency of " << ch << " is: " << hash[ch - 'a'] << endl;  // when only lowercase letters are considered
    }

    return 0;
}