#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        int N;
        cin >> N;

        int A[N];
        for(int i =0; i<N; i++) {
            cin >> A[i];
        }

        int even_count = 0;
        int odd_count = 0;

        for(int i =0; i<N; i++) {
            if(A[i] %2 == 0)
            {
                even_count++;
            }else {
                odd_count++;
            }
        }

        if(N%2==0){
            int divide = N/2;
            int result = divide - even_count;

            if(result <0) {
                result = -result;
            }
            
            cout << result << endl;
        }else{
            cout << -1 << endl;;
        }


    }
    return 0;
}