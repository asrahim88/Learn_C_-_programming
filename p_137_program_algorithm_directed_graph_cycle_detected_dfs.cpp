#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[150];
bool visitedNode[150];
bool pathVisited[150];
bool cycle;

void dfs(int src){
    visitedNode[src] = true;
    pathVisited[src] = true;

    for(int child: adj_list[src]){
        
        if(visitedNode[child] && pathVisited[child])
            cycle = true;
        if(!visitedNode[child]){
            dfs(child);
        }
    }
    pathVisited[src] = false;
}
int main() {
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    memset(visitedNode, false, sizeof(visitedNode));
    memset(pathVisited, false, sizeof(pathVisited));

    cycle = false;
    for(int i =0; i<n; i++){
        if(!visitedNode[i]){
            dfs(i);
        }
    }
    if(cycle)
        cout << "cycle detected";
    else
        cout << "No cycle detected";
    return 0;
}