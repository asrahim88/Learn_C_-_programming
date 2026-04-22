#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; 
            cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin >> v[i];

        set<int> st;
        int ans = 0;
        for(int i=n-1; i>=0; i--) {
            if(st.find(v[i]) == st.end()){
                st.insert(v[i]);
            }else {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}