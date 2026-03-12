#include <bits/stdc++.h>
using namespace std;

long long int storeValue[150];

long long int fib(long long int n){
    if(n<2)
        return n;
    if(storeValue[n] !=-1)
        return storeValue[n];
    storeValue[n] = fib(n-1) + fib(n-2);
    return storeValue[n];
}
int main() {
    int n;
    cin >> n;
    memset(storeValue, -1, sizeof(storeValue));
    cout << fib(n) << endl;
    return 0;
}