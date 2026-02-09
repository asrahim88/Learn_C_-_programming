#include <bits/stdc++.h>
using namespace std;

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<int> adj_List[node];
    
    while(edge--){
        int a, b;
        cin >> a >> b;
        adj_List[a].push_back(b);
        adj_List[b].push_back(a);
    }

    for(int i =0; i<node; i++){
        cout << i << " -> " ;
        for(auto x : adj_List[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}