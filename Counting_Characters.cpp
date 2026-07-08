#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int countA = 0;
        int countB = 0;
        for(char a : s){
            if(a == 'a')
                countA++;
            else
                countB++;
        }
        cout << countA  << " " << countB <<endl;
    }
    return 0;
}