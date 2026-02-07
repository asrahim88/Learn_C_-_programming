#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y, z;
    cin >> x >> y >> z;
    if(y*z <x){
        cout << x - ( y * z)  << endl;
    }else if(y*z == x){
        cout << 0 << endl;
    }else {
        cout << -1 << endl;
    }
    return 0;
}