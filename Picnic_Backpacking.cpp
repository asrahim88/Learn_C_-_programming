#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> T(n), J(m);
        for (int i = 0; i < n; i++) cin >> T[i];
        for (int j = 0; j < m; j++) cin >> J[j];

        long long S;
        cin >> S;

        sort(J.begin(), J.end());   // শুধু Jerry sort

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long need = S - T[i];
            auto l = lower_bound(J.begin(), J.end(), need);
            auto r = upper_bound(J.begin(), J.end(), need);
            ans += (r - l);
        }

        cout << ans << "\n";
    }
    return 0;
}