#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long count[11][11] = {0};
        long long flag = 0;

        for(int i = 0; i < n; i++){
            string s;
            cin >> s;

            int a = s[0] - 'a';
            int b = s[1] - 'a';

          
            for(int c = 0; c < 11; c++){
                if(c != b){
                    flag += count[a][c];
                }
            }

         
            for(int c = 0; c < 11; c++){
                if(c != a){
                    flag += count[c][b];
                }
            }
            count[a][b]++;
        }
        cout << flag << endl;
    }
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         long long cnt[11][11] = {0};
//         long long ans = 0;

//         for(int i = 0; i < n; i++){
//             string s;
//             cin >> s;

//             int a = s[0] - 'a';
//             int b = s[1] - 'a';

          
//             for(int c = 0; c < 11; c++){
//                 if(c != b){
//                     ans += cnt[a][c];
//                 }
//             }

         
//             for(int c = 0; c < 11; c++){
//                 if(c != a){
//                     ans += cnt[c][b];
//                 }
//             }

//             cnt[a][b]++;
//         }

//         cout << ans << "\n";
//     }
// }