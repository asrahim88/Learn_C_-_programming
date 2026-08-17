#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int ans =0;

    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            if(a[i] > b[j]){
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}