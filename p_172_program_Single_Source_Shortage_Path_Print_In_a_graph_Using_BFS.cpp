#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[150];
bool visited[150];
int pathStore[150];

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    pathStore[src] = -1;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child: adjList[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                pathStore[child] = parent;
            }
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
    memset(pathStore, -1, sizeof(pathStore));

    int src, dest;
    cin >> src >> dest;

    bfs(src);

    vector<int> path;
    
    int node = dest;

    while(node != -1){
        path.push_back(node);
        node = pathStore[node];
    }
    reverse(path.begin(), path.end());
    for(int i=0; i<path.size(); i++){
        cout << path[i] << " ";
    }
    return 0;
}