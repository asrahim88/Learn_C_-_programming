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

        string s;
        cin >> s;

        int firstPos = s.find('B');
        int lastPos = s.rfind('B');
        int total = (lastPos - firstPos) + 1;
        cout << total << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;
//         int count = 0;
//         for(int i=0; i<n; i++){
//             if(s[i]=='B'){
//                 break;
//             }
//             count++;
//         }
//         for(int i=n-1; i>=0; i--){
//             if(s[i] == 'B')
//                 break;
//             count++;
//         }
//         cout << n-count << endl;
//     }

//     return 0;
// }