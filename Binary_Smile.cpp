#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        string A, B;
        cin >> A >> B;

        vector<int> posA, posB;

        for(int i=0;i<N;i++) {
            if(A[i]=='1')
                posA.push_back(i);

            if(B[i]=='1')
                posB.push_back(i);
        }

        // different number of 1
        if(posA.size()!=posB.size()) {
            cout << -1 << "\n";
            continue;
        }

        int operations = 0;

        for(int i=0; i<posA.size(); i++) {
            if(posA[i]!=posB[i])
                operations++;
        }

        cout << operations << "\n";
    }

    return 0;
}