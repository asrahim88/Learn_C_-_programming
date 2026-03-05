#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[105];
bool visited[105];

void dfs(int src){
    cout << src << endl;
    visited[src] = true;

    for(int child: adjList[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));

    dfs(0);
    return 0;
}