#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >>x >>y;
        int mn = min(x, y);
        int mx = max(x, y);

        while(mn < mx){
            mn *= 2;
        }
        if(mn == mx)
            cout <<"YES" << endl;
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}