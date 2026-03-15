#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    int a[N];
    for(int i =0; i<N; i++) {
        cin >> a[i];
    }

    sort(a, a+N);

    while(Q--){
        int x;
        cin >> x;

        int flag = 0;

        int l = 0;
        int r = N-1;

        
        while(l<=r){
            int mid = (l+r) / 2;
            if(a[mid] == x) {
                flag = 1;
                break;
            }else if(a[mid] > x){
                r = mid-1;
            }else {
                l = mid+1;
            }
        }

        if(flag == 1){
            cout << "found\n";
        }else {
            cout << "not found\n";
        }

    }
    
    return 0;
}