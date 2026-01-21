#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0; 
        for(char s : str){
            if(s == '1')
                count++;
        }
        int ans = 0;
        for(char s : str){
            if(s== '1'){
                ans += count-1;
            }else{
                ans += count+1;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n;
//         cin >> n;
//         string str;
//         cin >> str;
//         string aray[n];

//         for(int i =0; i<str.size(); i++){
//             for(int j = 0; j<str.size(); j++){
//                 string x = str;
//                 if(str[i]== '0'){
//                     x[i] = '1';
//                 }else {
//                     x[i] = '0';
//                 }
//                 aray[i] = x;
//             }
//         }

//         int count = 0; 
//         for(int i =0; i<aray->size(); i++){
//             for(int j =0; j<aray[i].size(); j ++){
//                 if(aray[i][j] == '1'){
//                     count++;
//                 }
//             }
//         }
//         cout<< count << endl;
//     }
    
    
//     return 0;
// }