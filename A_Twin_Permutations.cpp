#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int array[n];
        for(int i=0; i<n; i++){
            cin >> array[i];
        }
        vector<int> v(n);
        for(int i=0; i<n; i++){
            v[i] = n - array[i] + 1;
        }

        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}