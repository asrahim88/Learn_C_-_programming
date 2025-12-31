#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> V(N);
    for(int i =0; i<N; i++){
        cin >> V[i];
    }
    int flag = 0;
    for(int i =0; i<N; i++){
        int sum = V[i] + 1;
        auto it = find(V.begin(), V.end(), sum);
        if(it != V.end()){
            flag++;
        }
    }
    cout << flag << endl;
    return 0;
}