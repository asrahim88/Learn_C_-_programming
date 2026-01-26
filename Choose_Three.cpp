#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    for(int t=0; t<T; t++){
        int N, S;
        cin >> N >> S;

        int A[N];
        for(int i =0; i<N; i++){
            cin >> A[i];
        }

        int flag = 0;

        for(int i = 0; i<N; i++){
            for(int j= i+1; j<N; j++){
                for(int k = j+1; k<N; k++){
                    if(A[i] + A[j] + A[k] == S){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1){
                    break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
