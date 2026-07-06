#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int indx;
        for(indx=1; indx <s.size(); indx ++){
            if(s[indx] == s[indx-1]){
                break;
            }
        }
        if(s[indx-1]== 'a') s.insert(s.begin() + indx, 'b');
        else s.insert(s.begin()+indx, 'a');

        cout << s << endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int indx = -1;
        // find if the adjacent same
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                indx = i;
                break;
            }
        }
        if(indx == -1){
            // all distinct
            if(s.back() == 'a') s.push_back('b');
            else s.push_back('a');
            cout << s << endl;
            continue;
        }
 
        for(int i=0; i<indx; i++){
            cout << s[i];
        }
 
        if(s[indx] == 'a') cout << 'b';
        else cout << 'a';
        
        for(int i=indx; i<s.size(); i++){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
*/