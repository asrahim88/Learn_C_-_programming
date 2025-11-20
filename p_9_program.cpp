#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int *A = new int[N];
    for(int i = 0; i<N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int *B = new int[10];
    for(int i=0; i<N;i ++ ){
        B[i] = A[i];
    }
    for(int i = N; i<10; i++){
        cin >> B[i];
    }
    delete [] A;
    for(int i = 0; i<10; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
    
     
}


