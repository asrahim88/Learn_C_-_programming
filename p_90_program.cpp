#include <bits/stdc++.h>
using namespace std;
void addVector(vector<int>& A, vector<int>& B, vector<int>& C){
    for(int x : B){
        C.push_back(x);
    }
    for(int X: A){
        C.push_back(X);
    }
}
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C;

    for(int i =0; i<N; i++){
        cin >> A[i];
    }
    for(int i =0; i<N; i++){
        cin >> B[i];
    }
    addVector(A, B, C);

    for(int X: C){
        cout << X << " ";
    }
    return 0;
}