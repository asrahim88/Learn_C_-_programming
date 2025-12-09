#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        char ch[6];
        for(int i =0 ; i<6; i++) {
            cin >> ch[i];
        }
        bool flag = false;
        for(int i =0; i<6; i++) {
            if(ch[i] == 'W' && ch[i+1] == 'W' && ch[i+2] == 'W'){
                flag = true;
            }
        }
        flag==true ? cout << "YES" << endl : cout << "NO" << endl;

    }
    return 0;
}