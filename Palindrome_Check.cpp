#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >>n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool flag = true;
        for(int i=0, j=n-1;i<j;){
            if(v[i] == v[j]){
                i++;
                j--;
            }else if(v[i] == k){
                i++;
            }else if(v[j] == k){
                j--;
            }else {
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}