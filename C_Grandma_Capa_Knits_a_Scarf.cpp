#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int solve(string &s, char ch) {
    int l = 0;
    int r = (int)s.size() - 1;

    int cnt = 0;

    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            if (s[l] == ch) {
                l++;
                cnt++;
            }
            else if (s[r] == ch) {
                r--;
                cnt++;
            }
            else {
                return INF;
            }
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int l = 0;
        int r = n - 1;

        while (l < r && s[l] == s[r]) {
            l++;
            r--;
        }

        if (l >= r) {
            cout << 0 << '\n';
            continue;
        }

        int ans = min(
            solve(s, s[l]),
            solve(s, s[r])
        );

        if (ans == INF)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}