#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            v[i] = i;
        }
        vector<pair<int,int>> final;
        while(v.size() >2){
            int a = v.back();
            v.pop_back();
            int b = v.back();
            v.pop_back();
            int c = ceil(double(a + b)/2);
            v.push_back(c);
            final.push_back({a,b});
        }
        cout << v[1] << endl;
        for(auto [a, b] : final){
            cout << a << " " << b << endl;
        }
    }
    return 0;
}