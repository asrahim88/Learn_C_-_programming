#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
bool ppathVisited[150];
bool cycle;
void dfs(int src){
    visited[src] = true;
    ppathVisited[src] = true;
    for(int child: adjList[src]){
        if(visited[child] && ppathVisited[child])
            cycle = true;
        if(!visited[child]){
            dfs(child);
        }
    }
    ppathVisited[src] = false;
}
int main() {
    int n, e;
    cin >> n >> e;
    while(e--){
        int a , b;
        cin >> a >> b;
        adjList[a].push_back(b);
    }
    memset(visited, false, sizeof(visited));
    memset(ppathVisited, false, sizeof(ppathVisited));
    cycle = false;

    for(int i=0; i<n; i++){
        if(!visited[i])
            dfs(i);
    }
    if(cycle)
        cout << "Cycle Detected";
    else
        cout << "Cycle not detected";
    return 0;
}