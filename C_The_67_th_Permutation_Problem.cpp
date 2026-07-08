#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        int r = n * 3;
        for(int i=0; i<n; i++){
            v.push_back(i+1);
            v.push_back(r-1);
            v.push_back(r);
            r -=2;
        }
        for(int i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}