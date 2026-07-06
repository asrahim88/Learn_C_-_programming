#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, box_size;
        cin >> n >> box_size;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        
        sort(v.rbegin(), v.rend());

        multiset<int> empty;
        int ans =0;
        for(auto value:v){
            auto it = empty.lower_bound(value);
            if(it == empty.end()){
                ans++;
                int newEmpty = box_size- value;
                empty.insert(newEmpty);
            }else {
                int available = *it;
                empty.erase(it);
                int newEmpty = available -value;
                empty.insert(newEmpty);
            }
        }
        cout << ans << endl;
    }
    return 0;
}