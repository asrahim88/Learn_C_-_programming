#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int A[N];

    for(int i =0; i<N; i++) {
        cin >> A[i];
    }

    int pos = 0;
    for(int i=0; i<N; i++) {
        if(A[i] !=0) {
            A[pos++] = A[i];
        }
    }

    while (pos<N)
    {
        A[pos++] = 0;
    }

    for(int i =0; i<N; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}