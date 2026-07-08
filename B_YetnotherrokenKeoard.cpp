#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        string ans;
        cin >> s;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'B' || s[i]=='b'){
                ans.pop_back();
                continue;
            }else {
                ans.push_back(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}