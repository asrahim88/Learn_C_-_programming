#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> v(N+1);
    for(int i =1; i<=N; i++) {
        cin >> v[i];
    }

    while (Q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        for(int i =1; i<=N; i++) {
            if(v[i] == x){
                flag = 1;
                break;
            }
        }
        if(flag == 1) 
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    
    return 0;
}