#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        // frequency array
        int freq[26] = {0};

        // count frequency
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        // count odd frequencies
        int odd = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] % 2 != 0) {
                odd++;
            }
        }

        // check condition
        if(odd <= k + 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}