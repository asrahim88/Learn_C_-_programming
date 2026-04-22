#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int flag = 0;
        for(int i=0, j=n-1; i<j, j>i;i++, j--){
            if(s[i] == '?' && s[j] == '?'){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}