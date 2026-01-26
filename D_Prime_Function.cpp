#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        if(N==1){
            cout << "NO" << endl;
            continue;
        }

        int flag = 1;

        for(int i =2; i<=sqrt(N); i++){
            if(N%i==0){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}