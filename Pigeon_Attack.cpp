#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int ok = 0;
        int no = 0;

        while(ok !=n){
            for(int i=1; i<k; i++){
                if(ok == n)
                    break;
                ok++;
            }
            if(ok == n)
                break;
            no++;
        }
        cout << ok + no << endl;
    }
    return 0;
}