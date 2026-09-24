#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> v(26, 0);
    for(auto c : s){
        v[c - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(v[i]>0){
            cout << char('a' + i) << " : " << v[i] << endl; 
        }
    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     vector<int> fre(26, 0);
    
//     for(char chr: s){
//         fre[chr-'a']++;
//     }
//     for(int i =0; i<26; i++){
//         if(fre[i]>0)
//             cout << char('a' + i) << " : " << fre[i] << endl;
//     }
//     return 0;
// }


