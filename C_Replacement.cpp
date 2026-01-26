#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i =0; i<N; i++){
        cin >> v[i];
    }
    for(int i = 0; i<N; i++){
        if(v[i]>1){
            v[i] = 1;
        }else if(v[i]<0){
            v[i] = 2;
        }
    }
    for(int i:v){
        cout << i << " ";
    }
    return 0;
}