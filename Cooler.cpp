#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int sum =0; 
        for(int i=m+1; i<=n; i++){
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}