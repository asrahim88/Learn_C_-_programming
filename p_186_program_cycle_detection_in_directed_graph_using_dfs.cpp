#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
bool pathVisited[150];
int cycle;

void dfs(int src){
    visited[src] = true;
    pathVisited[src] = true;


    for(int child: adjList[src]){
        if(visited[child] && pathVisited[child])
            cycle = true;
        if(!visited[child]){
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
        adjList[a].push_back(b);
    }
    memset(visited, false, sizeof(visited));
    memset(pathVisited, false, sizeof(pathVisited));
    cycle = false;
    for(int i=0; i<n; i++){
        if(!visited[i])
            dfs(i);
    }
    if(cycle)
        cout << "cycle detected" << endl;
    else 
        cout << "No cycle" << endl;
    return 0;
}