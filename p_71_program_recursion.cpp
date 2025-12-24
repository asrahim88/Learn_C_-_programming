#include <bits/stdc++.h>
using namespace std;
void rec(int i,int x){
    if(i>x){
        return;
    }
    cout << i << " ";
    rec(i+1, x);
}
int main() {
    int x;
    cin >> x;
    rec(1, x);
    return 0;
}