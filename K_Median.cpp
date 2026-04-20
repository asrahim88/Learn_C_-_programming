#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        set<int> st;
        int rem = n-k;
        int left = rem/2;
        if(rem %2 == 0) left --;
        int right = rem/2;

        for(int i=0; i<n ;i++){
            int current_left = i;
            int current_right = n-i-1;

            if(current_left>=left && current_right>= right){
                st.insert(v[i]);
            }
        }
        for(int i: st){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}