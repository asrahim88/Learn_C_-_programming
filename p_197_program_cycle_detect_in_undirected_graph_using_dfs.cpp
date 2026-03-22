#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[105];
int parent[105];
bool cycle;
void dfs(int src){
    visited[src] = true;

    for(int child: adjList[src]){
        if(visited[child] && parent[src] != child)
            cycle = true;
        if(!visited[child]){
            parent[child] = src;
            dfs(child); 
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    if(cycle)
        cout << "Cycle detected" << endl;
    else
        cout << "Cycle not detected." << endl;
    return 0;
}
/*
6 4
0 1
1 2
2 3
4 5
*/