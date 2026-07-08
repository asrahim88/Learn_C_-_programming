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

        vector<int> v(n);
        int mn = INT_MAX;
        int count = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];

            if(v[i] < mn){
                mn = v[i];
                count = 1;
            }else if(v[i] == mn){
                count++;
            }
        }
        if(count >=2)
            cout << "YES" << endl;
        else
            cout << "NO" <<endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        int mn = INT_MAX; 
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < mn) {
                mn = v[i];
                cnt = 1;
            } else if (v[i] == mn) {
                cnt++;
            }
        }
        if(cnt >= 2){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
    */