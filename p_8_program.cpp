#include<bits/stdc++.h>
using namespace std;
int* printAray() {
    int *aray = new int[5];
    for(int i =0; i<5; i++) {
        cin >> aray[i];
    }
    return aray;
}
int main() {
    int *A = printAray();
    for(int i = 0; i<5; i++) {
        cout << A[i] << " " ;
    }
}


