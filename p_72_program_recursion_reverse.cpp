#include <bits/stdc++.h>
using namespace std;
void recursions(int i, int n){
    if(i>n){
        return;
    }
    recursions(i+1, n);
    cout << i << " ";
}
int main() {
    int x;
    cin >> x;
    recursions(1, x);
    return 0;
}