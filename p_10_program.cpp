#include<bits/stdc++.h>
using namespace std;
int main() {
    char a;
    cin >> a ;
    if(a >= 48 && a<=57){
        cout << "IS DIGIT" << endl;
    }else if(a >= 65 && a<=90){
        cout << "ALPHA\nIS CAPITAL" << endl;
    }else {
        cout << "ALPHA\nIS SMALL" << endl;
    }
    return 0;
}