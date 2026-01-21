#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int smallApp, bigApp;
        cin >> smallApp >> bigApp;

        int screen = bigApp / 2;
        int emptyCell = screen * 7;

        if(bigApp %2 !=0){
            screen ++;
            emptyCell += 11; // because 4 cell using for 1 big app, that's why empty cell is 11
        }
        if(smallApp > emptyCell){
            smallApp -= emptyCell;
            screen += smallApp / 15;
            if(smallApp%15 !=0){
                screen++;
            }
        }
        cout << screen << endl;
    }
    return 0;
}