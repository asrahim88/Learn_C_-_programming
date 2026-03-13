#include <bits/stdc++.h>
using namespace std;

long long int dp[150];

long long int Tra(long long int n){
    if(n==0)
        return 0;
    if(n==1 || n==2)
        return 1;
    if(n==3)
        return 2;

    if(dp[n] !=-1)
        return dp[n];

    dp[n] = Tra(n-1) + Tra(n-2) + Tra(n-3) + Tra(n-4);
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << Tra(n) << endl;
    return 0;
}