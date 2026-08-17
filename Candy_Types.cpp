#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x: v) cin >> x;

    vector<int> frq(n+1, 0);
    for(auto x: v) frq[x]++;
    
    int best = 1;
    for(int i = 2; i<=n; i++){
        if(frq[i] > frq[best]) best = i;
    }
    cout << best << endl;
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