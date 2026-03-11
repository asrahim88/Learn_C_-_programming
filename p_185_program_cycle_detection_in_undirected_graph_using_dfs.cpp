#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[150];
bool visited[150];
int parentAray[150];
int cycle;

void dfs(int src){
    visited[src] = true;
    for(int child: adjList[src]){
        if(visited[child] && parentAray[src] != child)
            cycle = true;

        if(!visited[child]){
            parentAray[child] = src; 
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
    memset(parentAray, -1, sizeof(parentAray));

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