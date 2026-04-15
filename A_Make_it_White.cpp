#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                break;
            }
            count++;
        }
        for(int i=n-1; i>=0; i--){
            if(s[i] == 'B')
                break;
            count++;
        }
        cout << n-count << endl;
    }

    return 0;
}