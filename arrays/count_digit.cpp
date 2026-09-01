#include<bits/stdc++.h>
using namespace std;

int countDigits(long long n) {
    if (n == 0 ) {
        return 1;           
    }

    n = abs(n);
    int count = 0;
    while (n > 0 ) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    long long n;
    
    // Check if input is received successfully
    if (cin >> n) {
        cout << countDigits(n) << endl;
    }

    return 0;  
}