#include <bits/stdc++.h>
using namespace std;
int turnOnKthBit(int n, int k){
    return (n | (1 << k));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    cout << turnOnKthBit(n, k);

    return 0;
}