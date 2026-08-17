#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x, k;
        cin >> n >> x >> k;

        long long ans = x % k;
        if(x + k - (x % k) <=n){
            long long cal  = k - (x % k);
            ans = min(ans, cal);
        }
        cout << ans << endl;
    }
    return 0;
}