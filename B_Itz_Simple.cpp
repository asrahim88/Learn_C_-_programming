#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while(T--){
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        for(int i =0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int k_sum = v[n-1] + k;
        int p_sum = 0;
        for(int i =0; i<n-1; i++){
            p_sum += v[i];
        }
        p_sum += p;
        if(k_sum>p_sum){
            cout << "Ved" << endl;
        }else if(k_sum<p_sum){
            cout << "Varun" << endl;
        }else {
            cout << "Equal" << endl;
        }
    }
    return 0;
}