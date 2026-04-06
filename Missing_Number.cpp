#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int sum = 0;
    for(long long int i=1; i<n; i++){
        long long int x; 
        cin >> x;
        sum +=x;
    }
    long long int cal = (n*(n+1)/2) - sum;
    cout << cal << endl;
    return 0;
}

