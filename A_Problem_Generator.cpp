#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        int freAray[7] = {0};
        for(char chr: str){
            freAray[chr-'A']++;
        }

        int count = 0; 
        for(int i =0; i<7; i++){
            if(freAray[i]<m){
                count += m-freAray[i];
            }
        }
        cout << count << endl;

    }
    return 0;
}