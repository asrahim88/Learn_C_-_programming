#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
int parentAray[150];
bool cycle;
void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child: adjList[parent]){
            if(visited[child] && parentAray[parent] != child)
                cycle = true;
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parentAray[child] = parent;
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
    memset(parentAray, -1, sizeof(parentAray));
    cycle = false;
    for(int i =0; i<n; i++){
        if(!visited[i])
            bfs(i);
    }
    if(cycle)
        cout << "cycle detected" << endl;
    else
        cout << "no cycle" << endl;
    return 0;
}