#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int sum =0;

    map<string, int> mp;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        mp[s] = 1;
    }
    cout << mp.size() << endl;
    return 0;
}