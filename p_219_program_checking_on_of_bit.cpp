#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_off(int n, int k){
    return ((n >> k) & 1);
}

void checkingAllBit(int n){
    for(int k =7; k>=0; k--){
        if(check_kth_bit_on_off(n, k)){
            cout << 1 << " ";
        }else {
            cout << 0 << " ";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    checkingAllBit(n);
    return 0;
}