#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int A[N];

    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    int mn = INT_MAX;
    int mx = INT_MIN;
    int mn_pos = 0;
    int mx_pos = 0;
    for(int i =0; i<N; i++) {
        if(A[i] <mn){
            mn = A[i];
            mn_pos = i;
        }
        if(A[i] > mx) {
            mx = A[i];
            mx_pos = i;
        }
    }
    A[mn_pos] = mx;
    A[mx_pos] = mn;
    
    for(int i =0; i<N; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}