#include<bits/stdc++.h>
using namespace std;
int main() {
    char S[100001];
    
    while(cin.getline(S, 100001)){
        char S2 [strlen(S)];
        int j = 0;
        for(int i =0; S[i] !='\0'; i++){
            if(S[i] != ' '){
                S2[j] = S[i];
                j++;
            }
        }
        S2[j] = '\0';
        sort(S2, S2 + strlen(S2));
        cout << S2 << endl;
    }

}