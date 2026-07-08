#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n =7;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int ans = -1e9;

        for(int i=0; i<n; i++){
            int sum =0; 
            for(int j=0; j<n; j++){
                if(i==j)
                    sum += v[j];
                else
                    sum -= v[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}