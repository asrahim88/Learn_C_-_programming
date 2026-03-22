#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
int parentArray[150];
bool cycle;
void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        // cout << parent << " ";
        for(int child: adjList[parent]){
            if(visited[child] && parentArray[parent] != child)
                cycle = true;
            if(!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parentArray[child] = parent;
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
    memset(parentArray, -1, sizeof(parentArray));
    cycle = false;
    for(int i =0; i<n; i++){
        if(!visited[i])
            bfs(i);
    }

    if(cycle)
        cout << "cycle detected";
    else
        cout << "cycle not detected";
    return 0;
}