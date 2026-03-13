#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int Ter[n+1];

    Ter[0] = 0;
    Ter[1] = 1;
    Ter[2] = 1;
    Ter[3] = 2;

    for(long long int i =4; i<=n; i++){
        Ter[i] = Ter[i-1] + Ter[i-2] + Ter[i-3] + Ter[i-4];
    }
    cout << Ter[n] << endl;
    return 0;
}