#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int totalMarks = (n + 1) * 100;
        int forPass = totalMarks / 2;
        int sum = 0;
        for(int i =0; i<n; i++){
            int x;
            cin >> x;
            sum += x;
        }
        int need = forPass  - sum;
        if(need <=0){
            cout << 0 << endl;
        }else if(need>100){
            cout << -1 << endl;
        }else {
            cout << need << endl;
        }
    }
    return 0;
}