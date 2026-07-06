#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0; i<n ;i++)
            cin >> v[i];

        bool flag = false;
        int mx = v[0];
        int x, y;
        for(int i=1; i<n; i++){
            if(mx > v[i]){
                flag = true;
                x = mx, y = v[i];
                break;
            }
            mx = max(mx, v[i]);
        }
        if(flag){
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << x << " " << y << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}