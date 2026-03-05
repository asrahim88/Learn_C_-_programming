#include <bits/stdc++.h>
using namespace std;
vector<int> adjList[150];
bool visited[150];
int level[150];
void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child: adjList[parent]){
            if(!visited[child]){
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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
    memset(level, -1, sizeof(level));

    int src, dest;
    cin >> src >> dest;
    bfs(src);

    cout << level[dest] << endl;
    return 0;
}