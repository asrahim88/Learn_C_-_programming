#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin >> v[i];
        
        map<int,int> mp;
        for(auto val : v){
            mp[val]++;
        }

        int ans =0;
        map<int,int> duplicate;
        for(auto value: v){
            if(duplicate[value] > 0)
                continue;
            int prev = value - 1;
            if(mp[prev] > mp[value]){
                ans +=0;
            }else {
                int extra = mp[value] - mp[prev];
                ans += extra;
                
            }
            duplicate[value]++;
        }
        cout << ans << endl;
    }
    return 0;
}