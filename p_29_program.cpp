#include <bits/stdc++.h>

using namespace std;

int* showArray(int N) {

    int *Aray = new int[N];

    for(int i = 0; i<N; i++) {
        cin >>  Aray[i];
    }
    
    return Aray;

}

int main() {
   
    int N;
    cin >> N;

    int * aray = showArray(N);
   
    for(int i = 0; i<N; i++) {
        cout << aray[i] << " ";
    }

    return 0;
}

