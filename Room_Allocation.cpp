#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;
        int A[N];

        for(int i =0; i<N; i++) {
            cin >> A[i];
        }

        int sum = 0;

        for(int i =0; i<N; i++){
            if(A[i] % 2 == 0){
                sum += A[i]/ 2;
            }else {
                float div = A[i] / 2.0;
                int result = ceil(div);
                sum +=result;
            }
        }
        cout << sum << endl;
    }
    return 0;
}