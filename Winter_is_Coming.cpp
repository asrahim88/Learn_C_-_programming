#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int N, A, B;
        cin >> N >> A >>B;

        vector<int> v(N);

        for(int i =0; i<N; i++){
            cin >> v[i];
        }
        bool jacketWire = false;
        int flag = 0;
        for(int i :v){
            if(i<A){
                if(!jacketWire){
                    flag++;
                    jacketWire = true;
                }
            }else if(i>B){
                jacketWire =  false;
            }
        }
        cout << flag << endl;

    }      
    return 0;
}