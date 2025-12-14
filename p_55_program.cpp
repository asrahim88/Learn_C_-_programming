#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int aray[N];
    
    for(int i =0; i<N; i++) {
        cin >> aray[N];
    }

    for(int i =0; i<Q; i ++) {
        int x ;
        cin >> x;
        
        int flag = 0;

        for(int i =0; i<N; i++) {
            if(aray[i] == x){
                flag = 1;
            }
        }
        if(flag == 1){
            cout << "Found" << endl;
        }else {
            cout << "Not Found" << endl;
        }
    }
    return 0;
}