#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count_e= 0;
    int count_g = 0;
    int count_y = 0;
    int count_p = 0;
    int count_t = 0;

    for(char c: s){
        if(c=='e' || c =='E'){
            count_e++;
        }else if(c == 'g' || c == 'G'){
            count_g++;
        }else if(c == 'y' || c == 'Y'){
            count_y++;
        }else if (c == 'p' || c == 'P'){
            count_p++;
        }else if(c == 't' || c == 'T'){
            count_t++;
        }
    }
    int mn = min({count_e, count_g, count_y, count_p, count_t});
    cout << mn << endl;
    
    return 0;
}