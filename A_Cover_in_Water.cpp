#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int consecutive = 0;
        int emptyCell = 0;
        for(char chr : str){
            if(chr == '.'){
                consecutive++;
                emptyCell++;
                if (consecutive == 3){
                    break;
                }
            }else{
                consecutive = 0;
            }
        }
        if(consecutive == 3){
            cout << 2 << endl;
        }else {
            cout << emptyCell << endl;
        }
    }
    return 0;
}