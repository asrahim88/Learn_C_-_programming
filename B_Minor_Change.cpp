#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    long long int sum = 0; 
    for(long long int i =0; i<S.size(); i++){
        if(S[i] != T[i])
            sum++;
    }
    cout << sum << endl;
    return 0;
}