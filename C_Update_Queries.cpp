#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        string s1;
        cin >> s1;

        vector<int> upd(m);
        for(int i=0;i<m;i++){
            cin >> upd[i];
        }


        string s2;
        cin >> s2;
       
        sort(upd.begin(), upd.end());
        sort(s2.begin(), s2.end());

        for(int i=0; i<m; i++){
            s1[upd[i]] = s2[i]; 
        }

        cout << s1 << endl;

    }

    return 0;
}