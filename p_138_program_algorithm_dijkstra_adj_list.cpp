#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[105];

int main() {
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a, c});
    }

    for(int i = 0; i<n; i++){
        cout << i << " -> ";
        for(auto child : adj_list[i]){
            cout << child.first << " " << child.second << ", ";
        }
        cout << endl;
    }
    return 0;
}