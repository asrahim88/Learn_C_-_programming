#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int ans = INT_MAX;
        for(int i=1; i<=n;i++){
            for(int j=n; j>i;j--){
                if(v[i] == v[j]){
                    int cal = i + (n -1 - j);
                    ans = min(ans , cal);
                }
            }
        }
        if(ans == INT_MAX)
            cout << -1 << endl;
        else 
            cout << ans << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) 
            cin >> A[i];

        int ans = INT_MAX;

        for (int i = 0; i < N; i++) {
            for (int j = N - 1; j > i; j--) {
                if (A[i] == A[j]) {
                    int cost = i + (N - 1 - j);
                    ans = min(ans, cost);
                }
            }
        }

        if (ans == INT_MAX) 
            cout << -1 << endl;
        else 
            cout << ans << endl;
    }
}
    */