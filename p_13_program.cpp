#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i<N; i++){
        cin >> A[i];
    }

    int mx = INT16_MIN;
    for(int i = 0; i<N; i++){
        mx = max(A[i], mx);
    }
    cout << mx << endl;
}