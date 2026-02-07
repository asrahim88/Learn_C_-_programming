#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> A(n);
    for(long long int i =0; i<n; i++){
        cin >> A[i];
    }
    long long int totalSum = 0;
    for(long long x : A){
        totalSum += x;
    }
    if(totalSum % 2 != 0){
        cout << 0 << endl;
        return 0;
    }
    long long preSum = 0;
    long long count = 0;

    for(long long int i =0; i<n-1; i++){
        preSum += A[i];
        if(preSum * 2 == totalSum){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
