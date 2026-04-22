#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        vector<int> vtr;
        for(int i=0; i<m; i++){
            int x;
            cin >> x;
            vtr.push_back(x);
        }
        v.push_back(vtr);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;  
    }
    return 0;
}