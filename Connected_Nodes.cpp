#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];

    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int node;
        cin >> node;
        if(adj_list[node].size()<1){
            cout << -1 << endl;
        }else {
            sort(adj_list[node].begin(), adj_list[node].end(), greater<int>());

            for(auto x : adj_list[node]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}