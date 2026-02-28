#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<pair<int,int>> adjList[105];
    while(e--){
        int a, b, c;
        cin >> a >> b >> c;

        adjList[a].push_back({b,c});
        adjList[b].push_back({a,c});
    }

    for(int i =0; i<n; i++) {
        cout << i << " -> ";
        for(pair<int,int> child: adjList[i]){
            cout << child.first << " " << child.second<< ", ";
        }
        cout << endl;
    }
    return 0;
}