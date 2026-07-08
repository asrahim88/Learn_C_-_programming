#include <bits/stdc++.h>
using namespace std;
int turn_off_kth_bit(int n, int k){
    return (n&(~(1 << k)));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >>k;
    cout << turn_off_kth_bit(n, k);
    return 0;
}