#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> mls;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mls.insert(x);
    }
    int ans = 0;
    int problems =1;
    while(!mls.empty()){
        auto lb = mls.lower_bound(problems);
        if(lb != mls.end()){
            ans++;
            auto it = mls.find(*lb);
            mls.erase(it);
        }else {
            break;
        }
        problems++;
    }
    cout << ans << endl;
    return 0;
}