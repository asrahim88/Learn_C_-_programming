#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int multiple = 0;
    for(int i=A; i<=B; i++){
        if(i%C==0){
            multiple = i;
            break;
        }
    }
    if(multiple==0){
        cout << -1 << endl;
    }else {
        cout << multiple << endl;
    }
    return 0;
}