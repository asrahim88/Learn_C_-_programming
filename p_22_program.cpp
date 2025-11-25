#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int A[N];

    for(int i =0; i<N ;i++) {
        cin >> A[i];
    }

    int mn = INT_MAX;
    for(int i =0 ;i <N ;i++) {
        if(A[i] <mn) {
            mn = A[i];
        }
    }
    int count = 0;

    for(int i =0; i<N; i++) {
        if(A[i] == mn) {
            count++;
        }
    }
    if(count % 2 == 0){
        cout << "Unlucky";
    }else {
        cout << "Lucky";
    }

    return 0;
}