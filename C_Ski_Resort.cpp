#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int n, k;
        long long q;
        cin >> n >> k >> q;

        vector<long long> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        
        long long ans =0;
        long long length = 0;

        for(int i=0; i<n; i++){
            if(v[i] <= q){
                length+=1;
            }else {
                if(length >= k){
                    long long x = length - k + 1;
                    ans += x * (x + 1) / 2;
                }
                length = 0;
            }
        }
        if(length >= k) {
            long long x = length - k + 1;
            ans += x * (x + 1) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        long long len = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                len++;
            } else {
                if (len >= k) {
                    long long x = len - k + 1;
                    ans += x * (x + 1) / 2;
                }
                len = 0;
            }
        }

        // শেষ block-এর জন্য
        if (len >= k) {
            long long x = len - k + 1;
            ans += x * (x + 1) / 2;
        }

        cout << ans << '\n';
    }

    return 0;
}

*/