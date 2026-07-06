#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0;i<m; i++){
        cin >> b[i];
    }
    vector<int> c;
    int l = 0;
    int r = 0;

    while(l<n && r < m){
        if(a[l] <= b[r]){
            c.push_back(a[l]);
            l++;
        }else {
            c.push_back(b[r]);
            r++;
        }
    }

    while(l<n){
        c.push_back(a[l]);
        l++;
    }
    while(r<m){
        c.push_back(b[r]);
        r++;
    }

    for(auto num : c){
        cout << num << " ";
    }
    
    return 0;
}