#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    for(int t=0; t<T; t++) {
        int N;
    cin >> N;

    int A[N];

    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int mn = INT_MAX;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++) {
            int cal = A[i] + A[j] + j-i; 
            mn = min(mn, cal);
        }
    }
    cout << mn << endl;
    }
}