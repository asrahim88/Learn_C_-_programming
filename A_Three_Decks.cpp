#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if( sum %3 ==0 && b<=sum/3){
            cout << "YES" << endl;;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}