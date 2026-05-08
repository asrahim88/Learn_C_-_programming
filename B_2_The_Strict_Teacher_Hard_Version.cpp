#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n;
        int m, q;
        cin >> n >> m >> q;

        vector<long long> v(m);
        for(int i=0; i<m; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        while(q--) {
            long long x;
            cin >> x;

            if(x < v[0]) {
                cout << v[0] - 1 << endl;
            }
            else if(x > v[m-1]) {
                cout << n - v[m-1] << endl;
            }
            else {
                int idx = lower_bound(v.begin(), v.end(), x) - v.begin();

                long long left = v[idx-1];
                long long right = v[idx];

                cout << (right - left) / 2 << endl;
            }
        }
    }
    return 0;
}