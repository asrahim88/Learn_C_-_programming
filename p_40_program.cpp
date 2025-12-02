#include <bits/stdc++.h>
using namespace std;

void printCharacter(int N, char c) {
    for(int i =0; i<N; i++) {
        cout << c << " ";
    }
}

int main() {
    int T;
    cin >> T;
    for(int t=0; t<T; t++) {
        int N;
        char c;
        cin >> N >> c;
        printCharacter(N, c);
        cout << endl;
    }
    return 0;
}