#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> adja_list[n];

    while (e--)
    {
        int a, b;
        cin >> a >>b;
        adja_list[a].push_back(b);
    }
    for(int i =0; i<n; i++){
        cout << i << " -> ";
        for(auto x: adja_list[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}